#include "generatorparser.h"

#include <QStringList>
#include <QMetaType>
#include <QTimer>
#include <QTime>
#include <QTextStream>
#include <sstream>
#include <iostream>
#include <QDebug>

GeneratorParser::GeneratorParser(QObject* parent)
    : QObject(parent)
{

}

GeneratorParser::~GeneratorParser()
{
}

void GeneratorParser::parse(const QString& buffer)
{
    qDebug() << "\nLine of Data Recieved: " << buffer << "\n";
    try
    {
    // Convert to string
        QString sentence = buffer;

    // Validate
        bool valid = this->validate( sentence );

        if(valid)
        {
            // Create tokens
            //QRegExp regexp( "[,\\*]" );
            QRegExp regexp( "," );
            QStringList tokens = sentence.split( regexp );

            parseTokens(tokens);
        }
        else qDebug() << "Data not valid.\n";
    }
    catch(std::exception& ex)
    {
        emit sig_error( ex.what() );
        std::cout << "ex: " << ex.what() << std::endl;
    }
    catch( ... )
    {
       QString text;
       QTextStream strm( &text );
       strm << "GeneratorApp::processMessage failed: Unknown Exception!";
       emit sig_error( text );
    }
}

bool GeneratorParser::validate( const QString& sentence )
{
// Ensure start character is valid
   if ( sentence[0] != '$' )
   {
      QString text;
      QTextStream strm( &text );
      strm << "GeneratorApp::readMessage failed: Missing $ start character!";
      std::cout << text.toStdString() << std::endl;
      return false;
   }
   return true;

//   }
    qDebug() << "\n---DATA IS VALIDATED---\n";
} // end validate

void GeneratorParser::parseTokens(const QStringList& tokens)
{
    qDebug() << "---PARSING TOKENS---\n";
// Should be 16 tokens
    if ( tokens.size() != 15 )
    {
       QString text;
       QTextStream strm( &text );
       qDebug() << "GeneratorApp::parseTokens failed: should have 16 tokens, found " << tokens.size() << "!";
       emit sig_error( text );
       return;
    }

    this->currentSettings.serialNumber = tokens[0].trimmed().remove(0,1).toUInt();
    this->currentSettings.operations = tokens[1].trimmed().toUInt();

//    QByteArray tokensAsByteArray;
//    foreach (const QString &str, tokens) tokensAsByteArray.append(str);
//    QList<QByteArray> tokensAsQList = tokensAsByteArray.split(',');
//    QList<QByteArray> time = tokensAsQList[2].split(':');
//    this->currentSettings.runTime = QTime( time[0].toUInt(), time[1].toUInt(), time[2].toUInt() );

    this->currentSettings.mode = tokens[3].trimmed().toUInt();
    QString tempString = tokens[4].trimmed();
    this->currentSettings.engineStatus = (tempString=="1") ? true : false;
    this->currentSettings.volts = tokens[5].trimmed().toDouble();
    this->currentSettings.rpm = tokens[6].trimmed().toUInt();
    this->currentSettings.ambientTemp = tokens[7].trimmed().toDouble();
    this->currentSettings.engineTemp = tokens[8].trimmed().toDouble();
    this->currentSettings.cycles = tokens[9].trimmed().toInt();
    this->currentSettings.chargeCycles = tokens[10].trimmed().toUInt();
    this->currentSettings.crankAttempts = tokens[11].trimmed().toUInt();
    this->currentSettings.sensorMode = tokens[12].trimmed().toUInt();
    this->currentSettings.failureStatus = tokens[13].trimmed().toUInt();
    this->currentSettings.timeSinceOilChange = tokens[14].trimmed().toDouble();

    qDebug() << "---TOKENS PARSED---\n";

    qDebug() << "serialNumber: " << currentSettings.serialNumber;
    qDebug() << "operations: " << currentSettings.operations;
    qDebug() << "runTime: " << currentSettings.runTime;
    qDebug() << "mode: " << currentSettings.mode;
    qDebug() << "engineStatus: " << currentSettings.engineStatus;
    qDebug() << "volts: " << currentSettings.volts;
    qDebug() << "rpm: " << currentSettings.rpm;
    qDebug() << "ambientTemp: " << currentSettings.ambientTemp;
    qDebug() << "engineTemp: " << currentSettings.engineTemp;
    qDebug() << "cycles: " << currentSettings.cycles;
    qDebug() << "chargeCycles: " << currentSettings.chargeCycles;
    qDebug() << "crankAttempts: " << currentSettings.crankAttempts;
    qDebug() << "sensorMode: " << currentSettings.sensorMode;
    qDebug() << "failureStatus: " << currentSettings.failureStatus;
    qDebug() << "timeSinceOilChange: " << currentSettings.timeSinceOilChange;
}


GeneratorParser::Settings GeneratorParser::settings() const
{
    return currentSettings;
}
