/********************************************************************************
** Form generated from reading UI file 'RTSettingsUI.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTSETTINGSUI_H
#define UI_RTSETTINGSUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RTSettingsUI
{
public:
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *edtVolume34;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *edtRatio34;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_4;
    QLineEdit *edtVolume25;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *edtRatio25;
    QLabel *label_8;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_6;
    QLineEdit *edtOrder;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *edtVolume;
    QLabel *label_12;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *RTSettingsUI)
    {
        if (RTSettingsUI->objectName().isEmpty())
            RTSettingsUI->setObjectName(QStringLiteral("RTSettingsUI"));
        RTSettingsUI->resize(300, 400);
        RTSettingsUI->setMinimumSize(QSize(300, 400));
        RTSettingsUI->setMaximumSize(QSize(300, 400));
        RTSettingsUI->setAutoFillBackground(true);
        gridLayout_7 = new QGridLayout(RTSettingsUI);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        groupBox = new QGroupBox(RTSettingsUI);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        edtVolume34 = new QLineEdit(groupBox);
        edtVolume34->setObjectName(QStringLiteral("edtVolume34"));

        gridLayout->addWidget(edtVolume34, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        edtRatio34 = new QLineEdit(groupBox);
        edtRatio34->setObjectName(QStringLiteral("edtRatio34"));
        edtRatio34->setEnabled(true);

        gridLayout->addWidget(edtRatio34, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(RTSettingsUI);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font);
        groupBox_2->setAlignment(Qt::AlignCenter);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        edtVolume25 = new QLineEdit(groupBox_2);
        edtVolume25->setObjectName(QStringLiteral("edtVolume25"));

        gridLayout_4->addWidget(edtVolume25, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_4->addWidget(label_7, 1, 0, 1, 1);

        edtRatio25 = new QLineEdit(groupBox_2);
        edtRatio25->setObjectName(QStringLiteral("edtRatio25"));
        edtRatio25->setEnabled(true);

        gridLayout_4->addWidget(edtRatio25, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_4->addWidget(label_8, 1, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 1, 0, 1, 2);

        groupBox_3 = new QGroupBox(RTSettingsUI);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFont(font);
        groupBox_3->setAlignment(Qt::AlignCenter);
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        edtOrder = new QLineEdit(groupBox_3);
        edtOrder->setObjectName(QStringLiteral("edtOrder"));

        gridLayout_6->addWidget(edtOrder, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_6->addWidget(label_9, 0, 2, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_6->addWidget(label_10, 0, 0, 1, 1);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_6->addWidget(label_11, 1, 0, 1, 1);

        edtVolume = new QLineEdit(groupBox_3);
        edtVolume->setObjectName(QStringLiteral("edtVolume"));
        edtVolume->setEnabled(true);
        edtVolume->setReadOnly(false);

        gridLayout_6->addWidget(edtVolume, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_6->addWidget(label_12, 1, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_6, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_3, 2, 0, 1, 2);

        btnOK = new QPushButton(RTSettingsUI);
        btnOK->setObjectName(QStringLiteral("btnOK"));

        gridLayout_7->addWidget(btnOK, 3, 0, 1, 1);

        btnCancel = new QPushButton(RTSettingsUI);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        gridLayout_7->addWidget(btnCancel, 3, 1, 1, 1);


        retranslateUi(RTSettingsUI);

        QMetaObject::connectSlotsByName(RTSettingsUI);
    } // setupUi

    void retranslateUi(QDialog *RTSettingsUI)
    {
        RTSettingsUI->setWindowTitle(QApplication::translate("RTSettingsUI", "RTSettingsUI", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("RTSettingsUI", "3.4\345\220\250\347\206\224\347\202\274\347\202\211", Q_NULLPTR));
        label->setText(QApplication::translate("RTSettingsUI", "\346\226\260\346\226\231\347\263\273\346\225\260", Q_NULLPTR));
        label_4->setText(QApplication::translate("RTSettingsUI", "\346\200\273\345\256\271\351\207\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("RTSettingsUI", "KG", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("RTSettingsUI", "2.5\345\220\250\347\206\224\347\202\274\347\202\211", Q_NULLPTR));
        label_6->setText(QApplication::translate("RTSettingsUI", "\346\226\260\346\226\231\347\263\273\346\225\260", Q_NULLPTR));
        label_7->setText(QApplication::translate("RTSettingsUI", "\346\200\273\345\256\271\351\207\217", Q_NULLPTR));
        label_8->setText(QApplication::translate("RTSettingsUI", "KG", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("RTSettingsUI", "\351\235\231\347\275\256\347\202\211", Q_NULLPTR));
        label_9->setText(QApplication::translate("RTSettingsUI", "KG", Q_NULLPTR));
        label_10->setText(QApplication::translate("RTSettingsUI", "\346\200\273\351\207\215\351\207\217  ", Q_NULLPTR));
        label_11->setText(QApplication::translate("RTSettingsUI", "\346\214\207\344\273\244\345\200\274", Q_NULLPTR));
        label_12->setText(QApplication::translate("RTSettingsUI", "KG", Q_NULLPTR));
        btnOK->setText(QApplication::translate("RTSettingsUI", "\345\272\224\347\224\250", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("RTSettingsUI", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RTSettingsUI: public Ui_RTSettingsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTSETTINGSUI_H
