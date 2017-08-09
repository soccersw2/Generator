#ifndef GENERATORPARSER_H
#define GENERATORPARSER_H

#include <QObject>
#include <QDateTime>

class GeneratorParser : public QObject
{
    Q_OBJECT

    public:
        GeneratorParser(QObject* parent=0);
        virtual ~GeneratorParser();

    public Q_SLOTS:
        void parse(const QString& buffer);

    public:
    struct Settings {
        uint16_t serialNumber;
        uint16_t operations;
        QTime runTime; //new
        uint16_t mode;
        bool engineStatus;
        double volts;
        uint16_t rpm;
        double ambientTemp;
        double engineTemp;
        uint16_t cycles;
        uint16_t chargeCycles;
        uint16_t crankAttempts;
        uint16_t sensorMode;
        uint16_t failureStatus;
        double timeSinceOilChange; // hours (new)
    };

    Settings settings() const;

    public:
        Settings currentSettings;

    protected:
        bool validate(const QString& sentence);
        void parseTokens(const QStringList& tokens);


    Q_SIGNALS:
        void sig_error(const QString&);
};

#endif // GENERATORPARSER_H
