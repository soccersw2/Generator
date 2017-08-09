#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QtGlobal>
#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QTreeWidget>
#include <QLabel>

#include "settingsdialog.h"
#include "generatorparser.h"
#include "generator.h"
#include "logger.h"

QT_BEGIN_NAMESPACE

namespace Ui {
class MainWindow;
}

QT_END_NAMESPACE

class SettingsDialog;
class Generator;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void openSerialPort();
    void closeSerialPort();
    void readData();

    void handleError(QSerialPort::SerialPortError error);

private:
    void initConnections();
    void updateUI();

private:
    Ui::MainWindow *ui;
    SettingsDialog *settings;
    QSerialPort *serial;
    Generator *generator;
    Logger *log;
};

#endif // MAINWINDOW_H
