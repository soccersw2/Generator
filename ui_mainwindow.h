/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConfigure;
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionQuit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *generatorButton;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuCalls;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QFormLayout *formLayout_3;
    QTreeWidget *configWidget;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_3;
    QFrame *statusFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *labelEngineRunning;
    QLabel *labelOilPressure;
    QLabel *labelChangeOil;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *generatorLED;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *portOpenLED;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *recievingDataLED;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *changeOilLED;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *crankFaultLED;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lowOilPressureSensorLED;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *highEngineTempLED;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *engineTempLED;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_10;
    QLabel *ambientTempLED;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *outputVoltHighLED;
    QLabel *label_24;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_12;
    QLabel *rpmHighLED;
    QLabel *label_25;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_13;
    QLabel *rpmLowLED;
    QLabel *label_26;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_14;
    QLabel *lowOilPressureLED;
    QLabel *label_27;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_15;
    QLabel *stopOverRuntimeLED;
    QLabel *label_28;
    QSpacerItem *horizontalSpacer_14;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(735, 587);
        MainWindow->setIconSize(QSize(24, 24));
        actionConfigure = new QAction(MainWindow);
        actionConfigure->setObjectName(QStringLiteral("actionConfigure"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfigure->setIcon(icon);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon1);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QStringLiteral("actionDisconnect"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon2);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        generatorButton = new QPushButton(centralWidget);
        generatorButton->setObjectName(QStringLiteral("generatorButton"));

        verticalLayout_2->addWidget(generatorButton);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_2->addWidget(textEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 735, 21));
        menuCalls = new QMenu(menuBar);
        menuCalls->setObjectName(QStringLiteral("menuCalls"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        formLayout_3 = new QFormLayout(dockWidgetContents);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        configWidget = new QTreeWidget(dockWidgetContents);
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
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(configWidget->sizePolicy().hasHeightForWidth());
        configWidget->setSizePolicy(sizePolicy);
        configWidget->setAutoFillBackground(false);
        configWidget->setFrameShape(QFrame::StyledPanel);
        configWidget->setFrameShadow(QFrame::Sunken);
        configWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        configWidget->setItemsExpandable(true);
        configWidget->header()->setCascadingSectionResizes(false);
        configWidget->header()->setHighlightSections(false);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, configWidget);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QStringLiteral("dockWidget_2"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        statusFrame = new QFrame(dockWidgetContents_3);
        statusFrame->setObjectName(QStringLiteral("statusFrame"));
        statusFrame->setGeometry(QRect(9, 9, 180, 44));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        statusFrame->setPalette(palette);
        statusFrame->setAutoFillBackground(true);
        horizontalLayout = new QHBoxLayout(statusFrame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 3, -1, 3);
        labelEngineRunning = new QLabel(statusFrame);
        labelEngineRunning->setObjectName(QStringLiteral("labelEngineRunning"));
        labelEngineRunning->setPixmap(QPixmap(QString::fromUtf8(":/images/images/engine-running-disabled.png")));
        labelEngineRunning->setScaledContents(false);
        labelEngineRunning->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelEngineRunning);

        labelOilPressure = new QLabel(statusFrame);
        labelOilPressure->setObjectName(QStringLiteral("labelOilPressure"));
        labelOilPressure->setPixmap(QPixmap(QString::fromUtf8("../../Source Code/cws-generator/cws-controller/images/oil-pressure-disabled.png")));
        labelOilPressure->setScaledContents(false);
        labelOilPressure->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelOilPressure);

        labelChangeOil = new QLabel(statusFrame);
        labelChangeOil->setObjectName(QStringLiteral("labelChangeOil"));
        labelChangeOil->setPixmap(QPixmap(QString::fromUtf8(":/images/images/oil-change-disabled.png")));
        labelChangeOil->setScaledContents(false);
        labelChangeOil->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelChangeOil);

        groupBox = new QGroupBox(dockWidgetContents_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(9, 59, 186, 421));
        layoutWidget = new QWidget(dockWidgetContents_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 78, 172, 388));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        generatorLED = new QLabel(layoutWidget);
        generatorLED->setObjectName(QStringLiteral("generatorLED"));
        generatorLED->setPixmap(QPixmap(QString::fromUtf8(":/images/images/led-red.gif")));

        horizontalLayout_2->addWidget(generatorLED);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        QFont font;
        font.setFamily(QStringLiteral("Gadugi"));
        font.setPointSize(12);
        label_15->setFont(font);

        horizontalLayout_2->addWidget(label_15);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        portOpenLED = new QLabel(layoutWidget);
        portOpenLED->setObjectName(QStringLiteral("portOpenLED"));
        portOpenLED->setPixmap(QPixmap(QString::fromUtf8(":/images/images/led-red.gif")));

        horizontalLayout_3->addWidget(portOpenLED);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_3->addWidget(label_16);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        recievingDataLED = new QLabel(layoutWidget);
        recievingDataLED->setObjectName(QStringLiteral("recievingDataLED"));
        recievingDataLED->setPixmap(QPixmap(QString::fromUtf8(":/images/images/led-red.gif")));

        horizontalLayout_4->addWidget(recievingDataLED);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_4->addWidget(label_11);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        changeOilLED = new QLabel(layoutWidget);
        changeOilLED->setObjectName(QStringLiteral("changeOilLED"));
        changeOilLED->setPixmap(QPixmap(QString::fromUtf8(":/images/images/led-gray.gif")));

        horizontalLayout_5->addWidget(changeOilLED);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_5->addWidget(label_12);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        crankFaultLED = new QLabel(layoutWidget);
        crankFaultLED->setObjectName(QStringLiteral("crankFaultLED"));
        crankFaultLED->setPixmap(QPixmap(QString::fromUtf8(":/images/images/led-gray.gif")));

        horizontalLayout_6->addWidget(crankFaultLED);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_6->addWidget(label_19);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lowOilPressureSensorLED = new QLabel(layoutWidget);
        lowOilPressureSensorLED->setObjectName(QStringLiteral("lowOilPressureSensorLED"));
        lowOilPressureSensorLED->setPixmap(QPixmap(QString::fromUtf8(":/images/images/led-gray.gif")));

        horizontalLayout_7->addWidget(lowOilPressureSensorLED);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_7->addWidget(label_10);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        highEngineTempLED = new QLabel(layoutWidget);
        highEngineTempLED->setObjectName(QStringLiteral("highEngineTempLED"));
        highEngineTempLED->setPixmap(QPixmap(QString::fromUtf8(":/images/images/led-gray.gif")));

        horizontalLayout_8->addWidget(highEngineTempLED);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_8->addWidget(label_13);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        engineTempLED = new QLabel(layoutWidget);
        engineTempLED->setObjectName(QStringLiteral("engineTempLED"));
        engineTempLED->setPixmap(QPixmap(QString::fromUtf8(":/images/images/led-gray.gif")));

        horizontalLayout_9->addWidget(engineTempLED);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_9->addWidget(label_14);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        ambientTempLED = new QLabel(layoutWidget);
        ambientTempLED->setObjectName(QStringLiteral("ambientTempLED"));
        ambientTempLED->setPixmap(QPixmap(QString::fromUtf8(":/images/images/led-gray.gif")));

        horizontalLayout_10->addWidget(ambientTempLED);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_10->addWidget(label_17);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        outputVoltHighLED = new QLabel(layoutWidget);
        outputVoltHighLED->setObjectName(QStringLiteral("outputVoltHighLED"));
        outputVoltHighLED->setPixmap(QPixmap(QString::fromUtf8(":/images/images/led-gray.gif")));

        horizontalLayout_11->addWidget(outputVoltHighLED);

        label_24 = new QLabel(layoutWidget);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_11->addWidget(label_24);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        rpmHighLED = new QLabel(layoutWidget);
        rpmHighLED->setObjectName(QStringLiteral("rpmHighLED"));
        rpmHighLED->setPixmap(QPixmap(QString::fromUtf8(":/images/images/led-gray.gif")));

        horizontalLayout_12->addWidget(rpmHighLED);

        label_25 = new QLabel(layoutWidget);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_12->addWidget(label_25);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        rpmLowLED = new QLabel(layoutWidget);
        rpmLowLED->setObjectName(QStringLiteral("rpmLowLED"));
        rpmLowLED->setPixmap(QPixmap(QString::fromUtf8(":/images/images/led-gray.gif")));

        horizontalLayout_13->addWidget(rpmLowLED);

        label_26 = new QLabel(layoutWidget);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_13->addWidget(label_26);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        lowOilPressureLED = new QLabel(layoutWidget);
        lowOilPressureLED->setObjectName(QStringLiteral("lowOilPressureLED"));
        lowOilPressureLED->setPixmap(QPixmap(QString::fromUtf8(":/images/images/led-gray.gif")));

        horizontalLayout_14->addWidget(lowOilPressureLED);

        label_27 = new QLabel(layoutWidget);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_14->addWidget(label_27);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_13);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        stopOverRuntimeLED = new QLabel(layoutWidget);
        stopOverRuntimeLED->setObjectName(QStringLiteral("stopOverRuntimeLED"));
        stopOverRuntimeLED->setPixmap(QPixmap(QString::fromUtf8(":/images/images/led-gray.gif")));

        horizontalLayout_15->addWidget(stopOverRuntimeLED);

        label_28 = new QLabel(layoutWidget);
        label_28->setObjectName(QStringLiteral("label_28"));

        horizontalLayout_15->addWidget(label_28);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_15);

        dockWidget_2->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_2);

        menuBar->addAction(menuCalls->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuCalls->addAction(actionConnect);
        menuCalls->addAction(actionDisconnect);
        menuCalls->addAction(actionQuit);
        menuTools->addAction(actionConfigure);
        mainToolBar->addAction(actionConnect);
        mainToolBar->addAction(actionDisconnect);
        mainToolBar->addAction(actionConfigure);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionConfigure->setText(QApplication::translate("MainWindow", "Configure", Q_NULLPTR));
        actionConnect->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        actionDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
        generatorButton->setText(QApplication::translate("MainWindow", "Generator", Q_NULLPTR));
        menuCalls->setTitle(QApplication::translate("MainWindow", "Calls", Q_NULLPTR));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = configWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Value", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Property", Q_NULLPTR));

        const bool __sortingEnabled = configWidget->isSortingEnabled();
        configWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = configWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "Component", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(1, QApplication::translate("MainWindow", "Generator", Q_NULLPTR));
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = configWidget->topLevelItem(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "Generator", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(1, QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "SerialNumber", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem3->child(1);
        ___qtreewidgetitem5->setText(1, QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "Operations", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem3->child(2);
        ___qtreewidgetitem6->setText(1, QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "Runtime", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem3->child(3);
        ___qtreewidgetitem7->setText(1, QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "Mode", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem3->child(4);
        ___qtreewidgetitem8->setText(1, QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWindow", "EngineStatus", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem3->child(5);
        ___qtreewidgetitem9->setText(1, QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        ___qtreewidgetitem9->setText(0, QApplication::translate("MainWindow", "Volts", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem3->child(6);
        ___qtreewidgetitem10->setText(1, QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        ___qtreewidgetitem10->setText(0, QApplication::translate("MainWindow", "RPM", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem3->child(7);
        ___qtreewidgetitem11->setText(1, QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        ___qtreewidgetitem11->setText(0, QApplication::translate("MainWindow", "AmbientTemp", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem3->child(8);
        ___qtreewidgetitem12->setText(1, QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        ___qtreewidgetitem12->setText(0, QApplication::translate("MainWindow", "EngineTemp", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem3->child(9);
        ___qtreewidgetitem13->setText(1, QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        ___qtreewidgetitem13->setText(0, QApplication::translate("MainWindow", "Cycles", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem3->child(10);
        ___qtreewidgetitem14->setText(1, QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        ___qtreewidgetitem14->setText(0, QApplication::translate("MainWindow", "ChargeCycles", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem3->child(11);
        ___qtreewidgetitem15->setText(1, QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        ___qtreewidgetitem15->setText(0, QApplication::translate("MainWindow", "CrankAttempts", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem3->child(12);
        ___qtreewidgetitem16->setText(1, QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        ___qtreewidgetitem16->setText(0, QApplication::translate("MainWindow", "SensorMode", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem3->child(13);
        ___qtreewidgetitem17->setText(1, QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        ___qtreewidgetitem17->setText(0, QApplication::translate("MainWindow", "Status", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem3->child(14);
        ___qtreewidgetitem18->setText(1, QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        ___qtreewidgetitem18->setText(0, QApplication::translate("MainWindow", "TimeSinceOilChange", Q_NULLPTR));
        configWidget->setSortingEnabled(__sortingEnabled);

        labelEngineRunning->setText(QString());
        labelOilPressure->setText(QString());
        labelChangeOil->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
        generatorLED->setText(QString());
        label_15->setText(QApplication::translate("MainWindow", "GENERATOR", Q_NULLPTR));
        portOpenLED->setText(QString());
        label_16->setText(QApplication::translate("MainWindow", "PORT OPEN", Q_NULLPTR));
        recievingDataLED->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "RECEIVING DATA", Q_NULLPTR));
        changeOilLED->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "CHANGE OIL", Q_NULLPTR));
        crankFaultLED->setText(QString());
        label_19->setText(QApplication::translate("MainWindow", "CRANK FAULT", Q_NULLPTR));
        lowOilPressureSensorLED->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "LOW OIL PRESSURE SENSOR", Q_NULLPTR));
        highEngineTempLED->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "HIGH ENGINE TEMP", Q_NULLPTR));
        engineTempLED->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "ENGINE TEMP SENSOR", Q_NULLPTR));
        ambientTempLED->setText(QString());
        label_17->setText(QApplication::translate("MainWindow", "AMBIENT TEMP SENSOR", Q_NULLPTR));
        outputVoltHighLED->setText(QString());
        label_24->setText(QApplication::translate("MainWindow", "OUTPUT VOLTAGE HIGH", Q_NULLPTR));
        rpmHighLED->setText(QString());
        label_25->setText(QApplication::translate("MainWindow", "RPM HIGH", Q_NULLPTR));
        rpmLowLED->setText(QString());
        label_26->setText(QApplication::translate("MainWindow", "RPM LOW", Q_NULLPTR));
        lowOilPressureLED->setText(QString());
        label_27->setText(QApplication::translate("MainWindow", "LOW OIL PRESSURE", Q_NULLPTR));
        stopOverRuntimeLED->setText(QString());
        label_28->setText(QApplication::translate("MainWindow", "STOP OVER RUNTIME", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
