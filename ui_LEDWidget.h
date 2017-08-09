/********************************************************************************
** Form generated from reading UI file 'LEDWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEDWIDGET_H
#define UI_LEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
//#include "qled.h"

QT_BEGIN_NAMESPACE

class Ui_LEDWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLed *q_led;
    QLabel *q_boxLabel;

    void setupUi(QWidget *LEDWidget)
    {
        if (LEDWidget->objectName().isEmpty())
            LEDWidget->setObjectName(QStringLiteral("LEDWidget"));
        LEDWidget->resize(149, 32);
        horizontalLayout = new QHBoxLayout(LEDWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        q_led = new QLed(LEDWidget);
        q_led->setObjectName(QStringLiteral("q_led"));
        q_led->setMinimumSize(QSize(14, 14));
        q_led->setMaximumSize(QSize(14, 14));
        q_led->setProperty("value", QVariant(false));
        q_led->setProperty("color", QVariant(QColor(255, 0, 0)));

        horizontalLayout->addWidget(q_led);

        q_boxLabel = new QLabel(LEDWidget);
        q_boxLabel->setObjectName(QStringLiteral("q_boxLabel"));

        horizontalLayout->addWidget(q_boxLabel);


        retranslateUi(LEDWidget);

        QMetaObject::connectSlotsByName(LEDWidget);
    } // setupUi

    void retranslateUi(QWidget *LEDWidget)
    {
        LEDWidget->setWindowTitle(QApplication::translate("LEDWidget", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        q_led->setToolTip(QApplication::translate("LEDWidget", "Binary Led", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        q_led->setWhatsThis(QApplication::translate("LEDWidget", "Led widget", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        q_boxLabel->setText(QApplication::translate("LEDWidget", "Label", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LEDWidget: public Ui_LEDWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEDWIDGET_H
