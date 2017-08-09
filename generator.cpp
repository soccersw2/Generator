#include "generator.h"
#include "ui_generator.h"

Generator::Generator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Generator)
{
    ui->setupUi(this);
    parser = new GeneratorParser;
}

Generator::~Generator()
{
    delete ui;
}

GeneratorParser::Settings Generator::config() const
{
    return this->currentConfig;
}

void Generator::setLEDs(QList<QLabel*> ledList)
{
    this->leds = ledList;
    this->generatorStatus = leds[0];
    this->portOpen = leds[1];
    this->recievingData = leds[2];
    this->changeOil = leds[3];
    this->crankFault = leds[4];
    this->lowOilPressureSensor = leds[5];
    this->highEngineTemp = leds[6];
    this->engineTempSensor = leds[7];
    this->ambientTempSensor = leds[8];
    this->outputVoltageHigh = leds[9];
    this->rpmHigh = leds[10];
    this->rpmLow = leds[11];
    this->lowOilPressure = leds[12];
    this->stopOverRuntime = leds[13];
    this->labelChangeOil = leds[14];
    this->labelEngineRunning = leds[15];
    this->labelOilPressure = leds[16];
}

void Generator::setLEDGreen(QLabel *label)
{
    label->setPixmap(QPixmap(":/images/images/led-green.gif"));
}

void Generator::setLEDRed(QLabel *label)
{
    label->setPixmap(QPixmap(":/images/images/led-red.gif"));
}

void Generator::setLEDYellow(QLabel *label)
{
    label->setPixmap(QPixmap(":/images/images/led-yellow.gif"));
}

void Generator::setLEDGray(QLabel *label)
{
    label->setPixmap(QPixmap(":/images/images/led-gray.gif"));
}

void Generator::openSerialPort()
{
    this->setLEDGreen(this->portOpen);
    this->setLEDYellow(this->recievingData);
    this->setLEDRed(this->generatorStatus);
}

void Generator::closeSerialPort()
{
    this->setLEDRed(this->portOpen);
    this->setLEDRed(this->recievingData);
    this->setLEDGray(this->generatorStatus);
    this->setLEDGray(this->changeOil);
    this->setLEDGray(this->crankFault);
    this->setLEDGray(this->lowOilPressureSensor);
    this->setLEDGray(this->highEngineTemp);
    this->setLEDGray(this->engineTempSensor);
    this->setLEDGray(this->ambientTempSensor);
    this->setLEDGray(this->outputVoltageHigh);
    this->setLEDGray(this->rpmHigh);
    this->setLEDGray(this->rpmLow);
    this->setLEDGray(this->lowOilPressure);
    this->setLEDGray(this->stopOverRuntime);
}

void Generator::parse(const QString& data)
{
    this->parser->parse(data);
    this->updateConfig();
}

void Generator::updateConfig()
{
    this->currentConfig = this->parser->settings();
}

void Generator::updateTreeWidget(QTreeWidgetItem *item)
{
    item->child(0)->setText(1, QString::number(this->config().serialNumber));
    item->child(1)->setText(1, QString::number(this->config().operations));
    //item->child(2)->setText(1, QString::number(this->config().runtime));
    item->child(3)->setText(1, QString::number(this->config().mode));
    item->child(4)->setText(1, QString::number(this->config().engineStatus));
    item->child(5)->setText(1, QString::number(this->config().volts));
    item->child(6)->setText(1, QString::number(this->config().rpm));
    item->child(7)->setText(1, QString::number(this->config().ambientTemp));
    item->child(8)->setText(1, QString::number(this->config().engineTemp));
    item->child(9)->setText(1, QString::number(this->config().cycles));
    item->child(10)->setText(1, QString::number(this->config().chargeCycles));
    item->child(11)->setText(1, QString::number(this->config().crankAttempts));
    item->child(12)->setText(1, QString::number(this->config().sensorMode));
    item->child(13)->setText(1, QString::number(this->config().failureStatus));
    item->child(14)->setText(1, QString::number(this->config().timeSinceOilChange));
}

void Generator::updateLEDs()
{
    bool alert = false;

    //LABELS
    this->labelOilPressure->setPixmap(QPixmap(":/images/images/oil-pressure-disabled.png"));
    this->labelChangeOil->setPixmap(QPixmap(":/images/images/oil-change-disabled.png"));
    this->labelEngineRunning->setPixmap(QPixmap(":/images/images/engine-running-disabled.png"));

    //LEDS
    this->setLEDGray(this->changeOil);
    this->setLEDGray(this->crankFault);
    this->setLEDGray(this->lowOilPressureSensor);
    this->setLEDGray(this->highEngineTemp);
    this->setLEDGray(this->engineTempSensor);
    this->setLEDGray(this->ambientTempSensor);

    //OUTPUT VOLTAGE HIGH?
    if(this->config().volts > 32)
    {
        this->setLEDRed(this->outputVoltageHigh);
        alert = true;
    }
    else this->setLEDGray(this->outputVoltageHigh);

    //RPM HIGH/LOW?
    if(this->config().rpm > 4000 || this->config().rpm < 2500)
    {
        this->setLEDRed(this->rpmHigh);
        alert = true;
    }
    else
    {
        this->setLEDGray(this->rpmHigh);
        this->setLEDGray(this->rpmLow);
    }

    //LOW OIL PRESSURE?
    this->setLEDGray(this->lowOilPressure);

    //STOP OVER RUNTIME?
    this->setLEDGray(this->stopOverRuntime);

    //*******************
    //CHECK FAILURE STATUS
    //*******************
    switch(this->config().failureStatus)
    {
    case 0:
    {
        return;
    }
    case 1:
    {
        alert = true;
        this->setLEDRed(this->crankFault);
        return;
    }
    case 2:
    {
        alert = true;
        this->setLEDRed(this->lowOilPressureSensor);
        return;
    }
    case 3:
    {
        alert = true;
        this->setLEDRed(this->highEngineTemp);
        return;
    }
    case 4:
    {
        alert = true;
        this->setLEDRed(this->engineTempSensor);
        return;
    }
    case 5:
    {
        alert = true;
        this->setLEDRed(this->ambientTempSensor);
        return;
    }
    case 6:
    {
        alert = true;
        this->setLEDRed(this->ambientTempSensor);
        this->setLEDRed(this->engineTempSensor);
        return;
    }
    case 7:
    {
        alert = true;
        this->setLEDRed(this->lowOilPressureSensor);
        this->setLEDRed(this->engineTempSensor);
        return;
    }
    case 8:
    {
        alert = true;
        this->setLEDRed(this->lowOilPressureSensor);
        this->setLEDRed(this->ambientTempSensor);
        return;
    }
    case 9:
    {
        alert = true;
        this->setLEDRed(this->lowOilPressureSensor);
        this->setLEDRed(this->engineTempSensor);
        this->setLEDRed(this->ambientTempSensor);
        return;
    }
    case 10:
    {
        alert = true;
        this->setLEDRed(this->outputVoltageHigh);
        return;
    }
    case 11:
    {
        alert = true;
        this->setLEDRed(this->rpmHigh);
        return;
    }
    case 12:
    {
        alert = true;
        this->setLEDRed(this->rpmLow);
        return;
    }
    case 14:
    {
        alert = true;
        this->setLEDRed(this->lowOilPressure);
        this->labelOilPressure->setPixmap(QPixmap(":/images/images/oil-pressure.png"));
        return;
    }
    case 15:
    {
        alert = true;
        //this->setLEDRed(this->runtimeFault);
        return;
    }
    default:
        return;
    }

    // Check for oil change
//    if ( m_data.timeSinceOilChange >= m_oilChangeThreshold )
//    {
//        this->setLEDRed(this->changeOil);
//        this->labelChangeOil->setPixmap(QPixmap(":/images/images/oil-change.png"));
//    }

    //ENGINE ON?
    if (this->config().engineStatus == true && alert == false)
    {
        this->setLEDGreen(this->generatorStatus);
    }
    else this->setLEDRed(this->generatorStatus);
}
