/********************************************************************************
** Form generated from reading UI file 'generator.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATOR_H
#define UI_GENERATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_Generator
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *configWidget;

    void setupUi(QDialog *Generator)
    {
        if (Generator->objectName().isEmpty())
            Generator->setObjectName(QStringLiteral("Generator"));
        Generator->resize(307, 383);
        gridLayout = new QGridLayout(Generator);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        configWidget = new QTreeWidget(Generator);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(configWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(configWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        configWidget->setObjectName(QStringLiteral("configWidget"));

        gridLayout->addWidget(configWidget, 0, 0, 1, 1);


        retranslateUi(Generator);

        QMetaObject::connectSlotsByName(Generator);
    } // setupUi

    void retranslateUi(QDialog *Generator)
    {
        Generator->setWindowTitle(QApplication::translate("Generator", "Dialog", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = configWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("Generator", "Value", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("Generator", "Property", Q_NULLPTR));

        const bool __sortingEnabled = configWidget->isSortingEnabled();
        configWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = configWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("Generator", "Component", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(1, QApplication::translate("Generator", "Generator", Q_NULLPTR));
        ___qtreewidgetitem2->setText(0, QApplication::translate("Generator", "Name", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = configWidget->topLevelItem(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("Generator", "Generator", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(1, QApplication::translate("Generator", "N/A", Q_NULLPTR));
        ___qtreewidgetitem4->setText(0, QApplication::translate("Generator", "SerialNumber", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem3->child(1);
        ___qtreewidgetitem5->setText(1, QApplication::translate("Generator", "N/A", Q_NULLPTR));
        ___qtreewidgetitem5->setText(0, QApplication::translate("Generator", "Operations", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem3->child(2);
        ___qtreewidgetitem6->setText(1, QApplication::translate("Generator", "N/A", Q_NULLPTR));
        ___qtreewidgetitem6->setText(0, QApplication::translate("Generator", "Runtime", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem3->child(3);
        ___qtreewidgetitem7->setText(1, QApplication::translate("Generator", "N/A", Q_NULLPTR));
        ___qtreewidgetitem7->setText(0, QApplication::translate("Generator", "Mode", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem3->child(4);
        ___qtreewidgetitem8->setText(1, QApplication::translate("Generator", "N/A", Q_NULLPTR));
        ___qtreewidgetitem8->setText(0, QApplication::translate("Generator", "EngineStatus", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem3->child(5);
        ___qtreewidgetitem9->setText(1, QApplication::translate("Generator", "N/A", Q_NULLPTR));
        ___qtreewidgetitem9->setText(0, QApplication::translate("Generator", "Volts", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem3->child(6);
        ___qtreewidgetitem10->setText(1, QApplication::translate("Generator", "N/A", Q_NULLPTR));
        ___qtreewidgetitem10->setText(0, QApplication::translate("Generator", "RPM", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem3->child(7);
        ___qtreewidgetitem11->setText(1, QApplication::translate("Generator", "N/A", Q_NULLPTR));
        ___qtreewidgetitem11->setText(0, QApplication::translate("Generator", "AmbientTemp", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem3->child(8);
        ___qtreewidgetitem12->setText(1, QApplication::translate("Generator", "N/A", Q_NULLPTR));
        ___qtreewidgetitem12->setText(0, QApplication::translate("Generator", "EngineTemp", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem3->child(9);
        ___qtreewidgetitem13->setText(1, QApplication::translate("Generator", "N/A", Q_NULLPTR));
        ___qtreewidgetitem13->setText(0, QApplication::translate("Generator", "Cycles", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem3->child(10);
        ___qtreewidgetitem14->setText(1, QApplication::translate("Generator", "N/A", Q_NULLPTR));
        ___qtreewidgetitem14->setText(0, QApplication::translate("Generator", "ChargeCycles", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem3->child(11);
        ___qtreewidgetitem15->setText(1, QApplication::translate("Generator", "N/A", Q_NULLPTR));
        ___qtreewidgetitem15->setText(0, QApplication::translate("Generator", "CrankAttempts", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem3->child(12);
        ___qtreewidgetitem16->setText(1, QApplication::translate("Generator", "N/A", Q_NULLPTR));
        ___qtreewidgetitem16->setText(0, QApplication::translate("Generator", "SensorMode", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem3->child(13);
        ___qtreewidgetitem17->setText(1, QApplication::translate("Generator", "N/A", Q_NULLPTR));
        ___qtreewidgetitem17->setText(0, QApplication::translate("Generator", "Status", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem3->child(14);
        ___qtreewidgetitem18->setText(1, QApplication::translate("Generator", "N/A", Q_NULLPTR));
        ___qtreewidgetitem18->setText(0, QApplication::translate("Generator", "TimeSinceOilChange", Q_NULLPTR));
        configWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class Generator: public Ui_Generator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATOR_H
