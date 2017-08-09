#include "logger.h"

Logger::Logger(QObject* parent)
    : QObject(parent)
{

}

Logger::~Logger()
{
}

void Logger::logToFile(const QByteArray &data)
{
    QFile logFile(filename);
    if(!logFile.open(QIODevice::Append | QIODevice::Text))
    {
        qDebug() << "could not open file for writing";
        return;
    }
    logFile.write(data);
    logFile.close();
}
