#ifndef LOGGER_H
#define LOGGER_H

#include <QObject>
#include <QString>
#include <QFile>
#include <QDebug>

class Logger : public QObject
{
public:
    Logger(QObject* parent=0);
    virtual ~Logger();
    void logToFile(const QByteArray &data);

private:
    QString filename = "log.txt"; //TEMP
};

#endif // LOGGER_H
