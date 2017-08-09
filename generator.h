#ifndef GENERATOR_H
#define GENERATOR_H

#include "generatorparser.h"

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QTreeWidget>
#include <QList>
#include <QLabel>


QT_USE_NAMESPACE

QT_BEGIN_NAMESPACE

namespace Ui {
class Generator;
}

QT_END_NAMESPACE

class Generator : public QDialog
{
    Q_OBJECT

public:
    //QString baudrate() const { return m_baudRateDict; }

    explicit Generator(QWidget *parent = 0);
    ~Generator();

    GeneratorParser::Settings config() const;
    void updateConfig();
    void updateTreeWidget(QTreeWidgetItem *item);
    void updateLEDs();
    void setLEDs(QList<QLabel*>);

    void openSerialPort();
    void closeSerialPort();

    void setLEDRed(QLabel*);
    void setLEDYellow(QLabel*);
    void setLEDGray(QLabel*);
    void setLEDGreen(QLabel*);

public Q_SLOTS:
    void parse(const QString& data);

private:
    Ui::Generator *ui;
    GeneratorParser *parser;
    QList<QLabel*> leds;
    GeneratorParser::Settings defaultConfig;
    GeneratorParser::Settings currentConfig;

    QLabel *generatorStatus;
    QLabel *portOpen;
    QLabel *recievingData;
    QLabel *changeOil;
    QLabel *crankFault;
    QLabel *lowOilPressureSensor;
    QLabel *highEngineTemp;
    QLabel *engineTempSensor;
    QLabel *ambientTempSensor;
    QLabel *outputVoltageHigh;
    QLabel *rpmHigh;
    QLabel *rpmLow;
    QLabel *lowOilPressure;
    QLabel *stopOverRuntime;
    QLabel *labelChangeOil;
    QLabel *labelEngineRunning;
    QLabel *labelOilPressure;
};

#endif // GENERATOR_H
