/********************************************************************************
** Form generated from reading UI file 'RTMaterialMonitor.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTMATERIALMONITOR_H
#define UI_RTMATERIALMONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RTMaterialMonitorClass
{
public:
    QGridLayout *gridLayout_7;
    QGroupBox *gbxAll;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *ldtLeftWeightLarge;
    QLineEdit *ldtCurrentTempLarge;
    QLabel *label_13;
    QLabel *label_10;
    QLabel *label_14;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *ldtJMKWeight;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_12;
    QLineEdit *ldtShouldInputWeightLarge;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *ldtInputNewWeightLarge;
    QLabel *label_11;
    QLineEdit *ldtBFLWeight;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *lblLargeStove;
    QLabel *lblLargeStoveImg;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_4;
    QLineEdit *ldtCurrentTempSmall;
    QLabel *label_15;
    QLineEdit *ldtLeftWeightSmall;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_16;
    QLabel *label_21;
    QLabel *label_19;
    QLineEdit *lineEdit_11;
    QLabel *label_20;
    QLineEdit *ldtAlScrapWeight;
    QLabel *label_22;
    QLabel *label_27;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *ldtShouldInputWeightSmall;
    QLabel *label_28;
    QLineEdit *ldtInputNewWeightSmall;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblSmallStove;
    QLabel *lblSmallStoveImg;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *lblMixStove;
    QLabel *lblMixStoveImg;
    QSpacerItem *verticalSpacer_6;
    QFrame *line;
    QGroupBox *gbxHoldingStove;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_5;
    QLabel *lblHoldingFurnance;
    QLabel *label_30;
    QLineEdit *lineEdit_14;
    QLabel *label_29;
    QLabel *label_36;
    QLineEdit *ldtCurrentWeight;
    QLabel *label_37;
    QLabel *label_39;
    QLineEdit *ldtShouldInputWeightMix;
    QLabel *label_38;
    QLabel *label_41;
    QLineEdit *ldtCurrentTempMix;
    QLabel *label_40;
    QSpacerItem *horizontalSpacer_4;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnTrans;
    QPushButton *btnFinish;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *RTMaterialMonitorClass)
    {
        if (RTMaterialMonitorClass->objectName().isEmpty())
            RTMaterialMonitorClass->setObjectName(QStringLiteral("RTMaterialMonitorClass"));
        RTMaterialMonitorClass->resize(1071, 472);
        gridLayout_7 = new QGridLayout(RTMaterialMonitorClass);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gbxAll = new QGroupBox(RTMaterialMonitorClass);
        gbxAll->setObjectName(QStringLiteral("gbxAll"));
        gbxAll->setFlat(false);
        gridLayout_8 = new QGridLayout(gbxAll);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_2 = new QGroupBox(gbxAll);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        groupBox_2->setFont(font);
        groupBox_2->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ldtLeftWeightLarge = new QLineEdit(groupBox_2);
        ldtLeftWeightLarge->setObjectName(QStringLiteral("ldtLeftWeightLarge"));
        ldtLeftWeightLarge->setEnabled(false);

        gridLayout->addWidget(ldtLeftWeightLarge, 5, 1, 1, 1);

        ldtCurrentTempLarge = new QLineEdit(groupBox_2);
        ldtCurrentTempLarge->setObjectName(QStringLiteral("ldtCurrentTempLarge"));

        gridLayout->addWidget(ldtCurrentTempLarge, 6, 1, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 6, 2, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 5, 2, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 6, 0, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        ldtJMKWeight = new QLineEdit(groupBox_2);
        ldtJMKWeight->setObjectName(QStringLiteral("ldtJMKWeight"));

        gridLayout->addWidget(ldtJMKWeight, 1, 1, 1, 1);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 2, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

        ldtShouldInputWeightLarge = new QLineEdit(groupBox_2);
        ldtShouldInputWeightLarge->setObjectName(QStringLiteral("ldtShouldInputWeightLarge"));
        ldtShouldInputWeightLarge->setEnabled(false);

        gridLayout->addWidget(ldtShouldInputWeightLarge, 3, 1, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 3, 2, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        ldtInputNewWeightLarge = new QLineEdit(groupBox_2);
        ldtInputNewWeightLarge->setObjectName(QStringLiteral("ldtInputNewWeightLarge"));

        gridLayout->addWidget(ldtInputNewWeightLarge, 4, 1, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 4, 2, 1, 1);

        ldtBFLWeight = new QLineEdit(groupBox_2);
        ldtBFLWeight->setObjectName(QStringLiteral("ldtBFLWeight"));

        gridLayout->addWidget(ldtBFLWeight, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblLargeStove = new QLabel(gbxAll);
        lblLargeStove->setObjectName(QStringLiteral("lblLargeStove"));
        lblLargeStove->setMinimumSize(QSize(100, 0));
        lblLargeStove->setMaximumSize(QSize(16777215, 20));
        lblLargeStove->setFont(font);
        lblLargeStove->setTextFormat(Qt::AutoText);
        lblLargeStove->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lblLargeStove);

        lblLargeStoveImg = new QLabel(gbxAll);
        lblLargeStoveImg->setObjectName(QStringLiteral("lblLargeStoveImg"));
        lblLargeStoveImg->setMaximumSize(QSize(100, 80));
        lblLargeStoveImg->setScaledContents(true);

        verticalLayout->addWidget(lblLargeStoveImg);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_7->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox_3 = new QGroupBox(gbxAll);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFont(font);
        groupBox_3->setAlignment(Qt::AlignCenter);
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        ldtCurrentTempSmall = new QLineEdit(groupBox_3);
        ldtCurrentTempSmall->setObjectName(QStringLiteral("ldtCurrentTempSmall"));

        gridLayout_4->addWidget(ldtCurrentTempSmall, 5, 1, 1, 1);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_4->addWidget(label_15, 5, 2, 1, 1);

        ldtLeftWeightSmall = new QLineEdit(groupBox_3);
        ldtLeftWeightSmall->setObjectName(QStringLiteral("ldtLeftWeightSmall"));
        ldtLeftWeightSmall->setEnabled(false);

        gridLayout_4->addWidget(ldtLeftWeightSmall, 4, 1, 1, 1);

        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_4->addWidget(label_17, 5, 0, 1, 1);

        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_4->addWidget(label_18, 4, 0, 1, 1);

        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_4->addWidget(label_16, 4, 2, 1, 1);

        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_4->addWidget(label_21, 1, 0, 1, 1);

        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_4->addWidget(label_19, 0, 0, 1, 1);

        lineEdit_11 = new QLineEdit(groupBox_3);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setEnabled(false);

        gridLayout_4->addWidget(lineEdit_11, 0, 1, 1, 1);

        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_4->addWidget(label_20, 0, 2, 1, 1);

        ldtAlScrapWeight = new QLineEdit(groupBox_3);
        ldtAlScrapWeight->setObjectName(QStringLiteral("ldtAlScrapWeight"));

        gridLayout_4->addWidget(ldtAlScrapWeight, 1, 1, 1, 1);

        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_4->addWidget(label_22, 1, 2, 1, 1);

        label_27 = new QLabel(groupBox_3);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_4->addWidget(label_27, 3, 0, 1, 1);

        label_25 = new QLabel(groupBox_3);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_4->addWidget(label_25, 2, 0, 1, 1);

        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_4->addWidget(label_26, 2, 2, 1, 1);

        ldtShouldInputWeightSmall = new QLineEdit(groupBox_3);
        ldtShouldInputWeightSmall->setObjectName(QStringLiteral("ldtShouldInputWeightSmall"));
        ldtShouldInputWeightSmall->setEnabled(false);

        gridLayout_4->addWidget(ldtShouldInputWeightSmall, 2, 1, 1, 1);

        label_28 = new QLabel(groupBox_3);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_4->addWidget(label_28, 3, 2, 1, 1);

        ldtInputNewWeightSmall = new QLineEdit(groupBox_3);
        ldtInputNewWeightSmall->setObjectName(QStringLiteral("ldtInputNewWeightSmall"));

        gridLayout_4->addWidget(ldtInputNewWeightSmall, 3, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lblSmallStove = new QLabel(gbxAll);
        lblSmallStove->setObjectName(QStringLiteral("lblSmallStove"));
        lblSmallStove->setMinimumSize(QSize(100, 0));
        lblSmallStove->setMaximumSize(QSize(16777215, 20));
        lblSmallStove->setFont(font);
        lblSmallStove->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lblSmallStove);

        lblSmallStoveImg = new QLabel(gbxAll);
        lblSmallStoveImg->setObjectName(QStringLiteral("lblSmallStoveImg"));
        lblSmallStoveImg->setMaximumSize(QSize(100, 80));
        lblSmallStoveImg->setScaledContents(true);

        verticalLayout_4->addWidget(lblSmallStoveImg);


        verticalLayout_3->addLayout(verticalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_7->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        lblMixStove = new QLabel(gbxAll);
        lblMixStove->setObjectName(QStringLiteral("lblMixStove"));
        lblMixStove->setMinimumSize(QSize(100, 0));
        lblMixStove->setMaximumSize(QSize(16777215, 20));
        lblMixStove->setFont(font);
        lblMixStove->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(lblMixStove);

        lblMixStoveImg = new QLabel(gbxAll);
        lblMixStoveImg->setObjectName(QStringLiteral("lblMixStoveImg"));
        lblMixStoveImg->setMaximumSize(QSize(100, 80));
        lblMixStoveImg->setScaledContents(true);

        verticalLayout_6->addWidget(lblMixStoveImg);


        verticalLayout_5->addLayout(verticalLayout_6);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);


        horizontalLayout_3->addLayout(verticalLayout_5);


        gridLayout_8->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        line = new QFrame(gbxAll);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line, 0, 1, 1, 1);

        gbxHoldingStove = new QGroupBox(gbxAll);
        gbxHoldingStove->setObjectName(QStringLiteral("gbxHoldingStove"));
        gbxHoldingStove->setMinimumSize(QSize(400, 0));
        gbxHoldingStove->setMaximumSize(QSize(600, 16777215));
        gbxHoldingStove->setFont(font);
        gridLayout_6 = new QGridLayout(gbxHoldingStove);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        lblHoldingFurnance = new QLabel(gbxHoldingStove);
        lblHoldingFurnance->setObjectName(QStringLiteral("lblHoldingFurnance"));
        lblHoldingFurnance->setMinimumSize(QSize(100, 40));
        lblHoldingFurnance->setMaximumSize(QSize(16777215, 40));
        lblHoldingFurnance->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblHoldingFurnance, 0, 1, 1, 1);

        label_30 = new QLabel(gbxHoldingStove);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_5->addWidget(label_30, 1, 0, 1, 1);

        lineEdit_14 = new QLineEdit(gbxHoldingStove);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setEnabled(false);

        gridLayout_5->addWidget(lineEdit_14, 1, 1, 1, 1);

        label_29 = new QLabel(gbxHoldingStove);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_5->addWidget(label_29, 1, 2, 1, 1);

        label_36 = new QLabel(gbxHoldingStove);
        label_36->setObjectName(QStringLiteral("label_36"));

        gridLayout_5->addWidget(label_36, 2, 0, 1, 1);

        ldtCurrentWeight = new QLineEdit(gbxHoldingStove);
        ldtCurrentWeight->setObjectName(QStringLiteral("ldtCurrentWeight"));

        gridLayout_5->addWidget(ldtCurrentWeight, 2, 1, 1, 1);

        label_37 = new QLabel(gbxHoldingStove);
        label_37->setObjectName(QStringLiteral("label_37"));

        gridLayout_5->addWidget(label_37, 2, 2, 1, 1);

        label_39 = new QLabel(gbxHoldingStove);
        label_39->setObjectName(QStringLiteral("label_39"));

        gridLayout_5->addWidget(label_39, 3, 0, 1, 1);

        ldtShouldInputWeightMix = new QLineEdit(gbxHoldingStove);
        ldtShouldInputWeightMix->setObjectName(QStringLiteral("ldtShouldInputWeightMix"));

        gridLayout_5->addWidget(ldtShouldInputWeightMix, 3, 1, 1, 1);

        label_38 = new QLabel(gbxHoldingStove);
        label_38->setObjectName(QStringLiteral("label_38"));

        gridLayout_5->addWidget(label_38, 3, 2, 1, 1);

        label_41 = new QLabel(gbxHoldingStove);
        label_41->setObjectName(QStringLiteral("label_41"));

        gridLayout_5->addWidget(label_41, 4, 0, 1, 1);

        ldtCurrentTempMix = new QLineEdit(gbxHoldingStove);
        ldtCurrentTempMix->setObjectName(QStringLiteral("ldtCurrentTempMix"));

        gridLayout_5->addWidget(ldtCurrentTempMix, 4, 1, 1, 1);

        label_40 = new QLabel(gbxHoldingStove);
        label_40->setObjectName(QStringLiteral("label_40"));

        gridLayout_5->addWidget(label_40, 4, 2, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout_6->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        tableWidget = new QTableWidget(gbxHoldingStove);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMinimumSize(QSize(400, 0));
        tableWidget->setMaximumSize(QSize(16777215, 200));

        gridLayout_6->addWidget(tableWidget, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btnTrans = new QPushButton(gbxHoldingStove);
        btnTrans->setObjectName(QStringLiteral("btnTrans"));

        horizontalLayout_4->addWidget(btnTrans);

        btnFinish = new QPushButton(gbxHoldingStove);
        btnFinish->setObjectName(QStringLiteral("btnFinish"));

        horizontalLayout_4->addWidget(btnFinish);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout_6->addLayout(horizontalLayout_4, 2, 0, 1, 1);


        gridLayout_8->addWidget(gbxHoldingStove, 0, 2, 1, 1);


        gridLayout_7->addWidget(gbxAll, 0, 0, 1, 1);


        retranslateUi(RTMaterialMonitorClass);

        QMetaObject::connectSlotsByName(RTMaterialMonitorClass);
    } // setupUi

    void retranslateUi(QDialog *RTMaterialMonitorClass)
    {
        RTMaterialMonitorClass->setWindowTitle(QApplication::translate("RTMaterialMonitorClass", "RTMaterialMonitor", Q_NULLPTR));
        gbxAll->setTitle(QString());
        groupBox_2->setTitle(QApplication::translate("RTMaterialMonitorClass", "3.4\345\220\250\347\206\224\347\202\274\347\202\211", Q_NULLPTR));
        label_13->setText(QApplication::translate("RTMaterialMonitorClass", "\302\260C", Q_NULLPTR));
        label_10->setText(QApplication::translate("RTMaterialMonitorClass", "KG", Q_NULLPTR));
        label_14->setText(QApplication::translate("RTMaterialMonitorClass", "\345\275\223\345\211\215\347\202\211\346\270\251", Q_NULLPTR));
        label_7->setText(QApplication::translate("RTMaterialMonitorClass", "\345\211\251\344\275\231\346\226\260\346\226\231\351\207\215\351\207\217", Q_NULLPTR));
        label->setText(QApplication::translate("RTMaterialMonitorClass", "\346\200\273\351\207\215\351\207\217", Q_NULLPTR));
        label_2->setText(QApplication::translate("RTMaterialMonitorClass", "KG", Q_NULLPTR));
        label_4->setText(QApplication::translate("RTMaterialMonitorClass", "\345\206\222\345\217\243\346\226\231\351\207\215\351\207\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("RTMaterialMonitorClass", "KG", Q_NULLPTR));
        label_6->setText(QApplication::translate("RTMaterialMonitorClass", "\346\212\245\345\272\237\346\226\231\351\207\215\351\207\217", Q_NULLPTR));
        label_5->setText(QApplication::translate("RTMaterialMonitorClass", "KG", Q_NULLPTR));
        label_12->setText(QApplication::translate("RTMaterialMonitorClass", "\345\272\224\346\212\225\346\226\260\346\226\231\351\207\215\351\207\217", Q_NULLPTR));
        label_8->setText(QApplication::translate("RTMaterialMonitorClass", "KG", Q_NULLPTR));
        label_9->setText(QApplication::translate("RTMaterialMonitorClass", "\345\267\262\346\212\225\346\226\260\346\226\231\351\207\215\351\207\217", Q_NULLPTR));
        label_11->setText(QApplication::translate("RTMaterialMonitorClass", "KG", Q_NULLPTR));
        lblLargeStove->setText(QApplication::translate("RTMaterialMonitorClass", "\350\277\220\350\241\214\344\270\255", Q_NULLPTR));
        lblLargeStoveImg->setText(QString());
        groupBox_3->setTitle(QApplication::translate("RTMaterialMonitorClass", "2.5\345\220\250\347\206\224\347\202\274\347\202\211", Q_NULLPTR));
        label_15->setText(QApplication::translate("RTMaterialMonitorClass", "\302\260C", Q_NULLPTR));
        label_17->setText(QApplication::translate("RTMaterialMonitorClass", "\345\275\223\345\211\215\347\202\211\346\270\251", Q_NULLPTR));
        label_18->setText(QApplication::translate("RTMaterialMonitorClass", "\345\211\251\344\275\231\346\226\260\346\226\231\351\207\215\351\207\217", Q_NULLPTR));
        label_16->setText(QApplication::translate("RTMaterialMonitorClass", "KG", Q_NULLPTR));
        label_21->setText(QApplication::translate("RTMaterialMonitorClass", "\351\223\235\345\261\221\346\226\231\351\207\215\351\207\217", Q_NULLPTR));
        label_19->setText(QApplication::translate("RTMaterialMonitorClass", "\346\200\273\351\207\215\351\207\217", Q_NULLPTR));
        label_20->setText(QApplication::translate("RTMaterialMonitorClass", "KG", Q_NULLPTR));
        label_22->setText(QApplication::translate("RTMaterialMonitorClass", "KG", Q_NULLPTR));
        label_27->setText(QApplication::translate("RTMaterialMonitorClass", "\345\267\262\346\212\225\346\226\260\346\226\231\351\207\215\351\207\217", Q_NULLPTR));
        label_25->setText(QApplication::translate("RTMaterialMonitorClass", "\345\272\224\346\212\225\346\226\260\346\226\231\351\207\215\351\207\217", Q_NULLPTR));
        label_26->setText(QApplication::translate("RTMaterialMonitorClass", "KG", Q_NULLPTR));
        label_28->setText(QApplication::translate("RTMaterialMonitorClass", "KG", Q_NULLPTR));
        lblSmallStove->setText(QApplication::translate("RTMaterialMonitorClass", "\350\277\220\350\241\214\344\270\255", Q_NULLPTR));
        lblSmallStoveImg->setText(QString());
        lblMixStove->setText(QApplication::translate("RTMaterialMonitorClass", "\350\277\220\350\241\214\344\270\255", Q_NULLPTR));
        lblMixStoveImg->setText(QString());
        gbxHoldingStove->setTitle(QApplication::translate("RTMaterialMonitorClass", "\351\235\231\347\275\256\347\202\211", Q_NULLPTR));
        lblHoldingFurnance->setText(QApplication::translate("RTMaterialMonitorClass", "\347\255\211\345\276\205", Q_NULLPTR));
        label_30->setText(QApplication::translate("RTMaterialMonitorClass", "\346\200\273\351\207\215\351\207\217", Q_NULLPTR));
        label_29->setText(QApplication::translate("RTMaterialMonitorClass", "KG", Q_NULLPTR));
        label_36->setText(QApplication::translate("RTMaterialMonitorClass", "\345\275\223\345\211\215\351\207\215\351\207\217", Q_NULLPTR));
        label_37->setText(QApplication::translate("RTMaterialMonitorClass", "KG", Q_NULLPTR));
        label_39->setText(QApplication::translate("RTMaterialMonitorClass", "\345\272\224\346\212\225\351\207\215\351\207\217", Q_NULLPTR));
        label_38->setText(QApplication::translate("RTMaterialMonitorClass", "KG", Q_NULLPTR));
        label_41->setText(QApplication::translate("RTMaterialMonitorClass", "\345\275\223\345\211\215\347\202\211\346\270\251", Q_NULLPTR));
        label_40->setText(QApplication::translate("RTMaterialMonitorClass", "\302\260C", Q_NULLPTR));
        btnTrans->setText(QApplication::translate("RTMaterialMonitorClass", "\344\274\240\350\276\223", Q_NULLPTR));
        btnFinish->setText(QApplication::translate("RTMaterialMonitorClass", "\345\256\214\346\210\220", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RTMaterialMonitorClass: public Ui_RTMaterialMonitorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTMATERIALMONITOR_H
