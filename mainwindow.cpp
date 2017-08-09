#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QtSerialPort/QSerialPort>
#include <QDebug>
#include <QLabel>
#include <QPixmap>
#include <QFile>
#include <QTextStream>
#include <QTextCodec>

#include <QtCore>
#include <QtGui>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->ui->setupUi(this);

    serial = new QSerialPort(this);
    settings = new SettingsDialog;
    log = new Logger;
    generator = new Generator;

    QList<QLabel*> leds;
    leds << ui->generatorLED << ui->portOpenLED << ui->recievingDataLED
         << ui->changeOilLED << ui->crankFaultLED << ui->lowOilPressureSensorLED
         << ui->highEngineTempLED << ui->engineTempLED << ui->ambientTempLED
         << ui->outputVoltHighLED << ui->rpmHighLED << ui->rpmLowLED
         << ui->lowOilPressureLED << ui->stopOverRuntimeLED <<ui->labelChangeOil
         << ui->labelEngineRunning << ui->labelOilPressure;

    this->generator->setLEDs(leds);
    this->updateUI();

    this->ui->actionConnect->setEnabled(true);
    this->ui->actionDisconnect->setEnabled(false);
    this->ui->actionQuit->setEnabled(true);
    this->ui->actionConfigure->setEnabled(true);

    this->initConnections();

    connect(serial, SIGNAL(error(QSerialPort::SerialPortError)), this,
            SLOT(handleError(QSerialPort::SerialPortError)));

    connect(serial, SIGNAL(readyRead()), this, SLOT(readData()));

    this->openSerialPort();
}

MainWindow::~MainWindow()
{
    this->saveState();
    delete ui;
}

void MainWindow::openSerialPort()
{
    SettingsDialog::Settings p = settings->settings();
    this->serial->setPortName(p.name);
    if (this->serial->open(QIODevice::ReadWrite)) {
        if (this->serial->setBaudRate(p.baudRate)
                && this->serial->setDataBits(p.dataBits)
                && this->serial->setParity(p.parity)
                && this->serial->setStopBits(p.stopBits)
                && this->serial->setFlowControl(p.flowControl)) {
            this->ui->actionConnect->setEnabled(false);
            this->ui->actionDisconnect->setEnabled(true);
            this->ui->actionConfigure->setEnabled(false);
            this->ui->statusBar->showMessage(tr("Connected to %1 : %2, %3, %4, %5, %6")
                                       .arg(p.name).arg(p.stringBaudRate).arg(p.stringDataBits)
                                       .arg(p.stringParity).arg(p.stringStopBits).arg(p.stringFlowControl));

            this->generator->openSerialPort();

        } else {
            this->serial->close();
            QMessageBox::critical(this, tr("Error"), serial->errorString());

            this->ui->statusBar->showMessage(tr("Open error"));
        }
    } else {
        QMessageBox::critical(this, tr("Error"), serial->errorString());

        this->ui->statusBar->showMessage(tr("Configure error"));
    }
}

void MainWindow::closeSerialPort()
{
    this->serial->close();
    this->ui->actionConnect->setEnabled(true);
    this->ui->actionDisconnect->setEnabled(false);
    this->ui->actionConfigure->setEnabled(true);
    this->ui->statusBar->showMessage(tr("Disconnected"));

    this->generator->closeSerialPort();
}

void MainWindow::handleError(QSerialPort::SerialPortError error)
{
    if (error == QSerialPort::ResourceError) {
        QMessageBox::critical(this, tr("Critical Error"), serial->errorString());
        closeSerialPort();
    }
}

void MainWindow::readData()
{
    if(this->serial->waitForReadyRead(100))
    {       
        char buffer[1024];
        this->serial->readLine(buffer, sizeof(buffer));
        this->ui->textEdit->insertPlainText(buffer);
        this->log->logToFile(buffer);

        QString tempString = buffer;
        if(!tempString.trimmed().isEmpty())
        {
            this->generator->parse(tempString.trimmed());
            this->updateUI();
            this->generator->setLEDGreen(ui->recievingDataLED);;
        }
    }
    else this->generator->setLEDRed(ui->recievingDataLED);
}

void MainWindow::initConnections()
{
      connect(ui->actionConnect, SIGNAL(triggered()), this, SLOT(openSerialPort()));
      connect(ui->actionDisconnect, SIGNAL(triggered()), this, SLOT(closeSerialPort()));
      connect(ui->actionQuit, SIGNAL(triggered()), this, SLOT(close()));
      connect(ui->actionConfigure, SIGNAL(triggered()), settings, SLOT(show()));
      connect(ui->generatorButton, SIGNAL(pressed()), generator, SLOT(show()));
}

void MainWindow::updateUI()
{
    QTreeWidgetItem *item = ui->configWidget->topLevelItem(1);
    this->generator->updateTreeWidget(item);
    this->generator->updateLEDs();
}
