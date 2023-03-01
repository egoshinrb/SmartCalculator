/********************************************************************************
** Form generated from reading UI file 'deposit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSIT_H
#define UI_DEPOSIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Deposit
{
public:
    QLabel *label_time;
    QLabel *label_sum_tax_value;
    QLabel *label_sum_all_value;
    QLabel *label_rate_deposit;
    QSpinBox *spinBox_time;
    QPushButton *pushButton_clear;
    QLabel *label_sum_rate;
    QLabel *label_sum_deposit;
    QDoubleSpinBox *doubleSpinBox_rate_deposit;
    QLabel *label_sum_rate_value;
    QPushButton *pushButton_calc;
    QLabel *label_sum_tax;
    QComboBox *comboBox_type_capital;
    QLabel *label_capital;
    QDoubleSpinBox *doubleSpinBox_sum_deposit;
    QLabel *label_sum_all;
    QLabel *label_rate_tax;
    QDoubleSpinBox *doubleSpinBox_rate_tax;
    QLabel *label_rate_CB;
    QDoubleSpinBox *doubleSpinBox_rate_CB;
    QComboBox *comboBox_type_add;
    QLabel *label_add;
    QComboBox *comboBox_type_get;
    QLabel *label_get;
    QLabel *label_note;
    QDoubleSpinBox *doubleSpinBox_sum_add;
    QLabel *label_add_2;
    QLabel *label_get_2;
    QDoubleSpinBox *doubleSpinBox_sum_get;

    void setupUi(QDialog *Deposit)
    {
        if (Deposit->objectName().isEmpty())
            Deposit->setObjectName(QString::fromUtf8("Deposit"));
        Deposit->resize(487, 639);
        Deposit->setMinimumSize(QSize(487, 639));
        Deposit->setMaximumSize(QSize(487, 639));
        Deposit->setStyleSheet(QString::fromUtf8("background-color: rgb(182, 182, 182);"));
        label_time = new QLabel(Deposit);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(20, 60, 181, 21));
        label_time->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_sum_tax_value = new QLabel(Deposit);
        label_sum_tax_value->setObjectName(QString::fromUtf8("label_sum_tax_value"));
        label_sum_tax_value->setGeometry(QRect(250, 560, 211, 31));
        label_sum_tax_value->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_sum_all_value = new QLabel(Deposit);
        label_sum_all_value->setObjectName(QString::fromUtf8("label_sum_all_value"));
        label_sum_all_value->setGeometry(QRect(250, 520, 211, 31));
        label_sum_all_value->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_rate_deposit = new QLabel(Deposit);
        label_rate_deposit->setObjectName(QString::fromUtf8("label_rate_deposit"));
        label_rate_deposit->setGeometry(QRect(20, 100, 191, 31));
        label_rate_deposit->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        spinBox_time = new QSpinBox(Deposit);
        spinBox_time->setObjectName(QString::fromUtf8("spinBox_time"));
        spinBox_time->setGeometry(QRect(280, 60, 181, 22));
        spinBox_time->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Times New Roman\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        spinBox_time->setMaximum(1200);
        pushButton_clear = new QPushButton(Deposit);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(90, 430, 131, 24));
        pushButton_clear->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_sum_rate = new QLabel(Deposit);
        label_sum_rate->setObjectName(QString::fromUtf8("label_sum_rate"));
        label_sum_rate->setGeometry(QRect(20, 480, 211, 31));
        label_sum_rate->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_sum_deposit = new QLabel(Deposit);
        label_sum_deposit->setObjectName(QString::fromUtf8("label_sum_deposit"));
        label_sum_deposit->setGeometry(QRect(20, 20, 181, 21));
        label_sum_deposit->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        doubleSpinBox_rate_deposit = new QDoubleSpinBox(Deposit);
        doubleSpinBox_rate_deposit->setObjectName(QString::fromUtf8("doubleSpinBox_rate_deposit"));
        doubleSpinBox_rate_deposit->setGeometry(QRect(280, 100, 181, 22));
        doubleSpinBox_rate_deposit->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Times New Roman\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        doubleSpinBox_rate_deposit->setMaximum(500.000000000000000);
        doubleSpinBox_rate_deposit->setSingleStep(0.010000000000000);
        label_sum_rate_value = new QLabel(Deposit);
        label_sum_rate_value->setObjectName(QString::fromUtf8("label_sum_rate_value"));
        label_sum_rate_value->setGeometry(QRect(250, 480, 211, 31));
        label_sum_rate_value->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        pushButton_calc = new QPushButton(Deposit);
        pushButton_calc->setObjectName(QString::fromUtf8("pushButton_calc"));
        pushButton_calc->setGeometry(QRect(280, 430, 131, 24));
        pushButton_calc->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_sum_tax = new QLabel(Deposit);
        label_sum_tax->setObjectName(QString::fromUtf8("label_sum_tax"));
        label_sum_tax->setGeometry(QRect(20, 560, 211, 31));
        label_sum_tax->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        comboBox_type_capital = new QComboBox(Deposit);
        comboBox_type_capital->addItem(QString());
        comboBox_type_capital->addItem(QString());
        comboBox_type_capital->addItem(QString());
        comboBox_type_capital->addItem(QString());
        comboBox_type_capital->addItem(QString());
        comboBox_type_capital->setObjectName(QString::fromUtf8("comboBox_type_capital"));
        comboBox_type_capital->setGeometry(QRect(280, 220, 181, 22));
        comboBox_type_capital->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Times New Roman\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_capital = new QLabel(Deposit);
        label_capital->setObjectName(QString::fromUtf8("label_capital"));
        label_capital->setGeometry(QRect(20, 220, 231, 31));
        label_capital->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        doubleSpinBox_sum_deposit = new QDoubleSpinBox(Deposit);
        doubleSpinBox_sum_deposit->setObjectName(QString::fromUtf8("doubleSpinBox_sum_deposit"));
        doubleSpinBox_sum_deposit->setGeometry(QRect(280, 20, 181, 22));
        doubleSpinBox_sum_deposit->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Times New Roman\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        doubleSpinBox_sum_deposit->setMaximum(999999999999.989990234375000);
        doubleSpinBox_sum_deposit->setSingleStep(0.010000000000000);
        label_sum_all = new QLabel(Deposit);
        label_sum_all->setObjectName(QString::fromUtf8("label_sum_all"));
        label_sum_all->setGeometry(QRect(20, 520, 211, 31));
        label_sum_all->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_rate_tax = new QLabel(Deposit);
        label_rate_tax->setObjectName(QString::fromUtf8("label_rate_tax"));
        label_rate_tax->setGeometry(QRect(20, 140, 191, 31));
        label_rate_tax->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        doubleSpinBox_rate_tax = new QDoubleSpinBox(Deposit);
        doubleSpinBox_rate_tax->setObjectName(QString::fromUtf8("doubleSpinBox_rate_tax"));
        doubleSpinBox_rate_tax->setGeometry(QRect(280, 140, 181, 22));
        doubleSpinBox_rate_tax->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Times New Roman\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        doubleSpinBox_rate_tax->setMaximum(500.000000000000000);
        doubleSpinBox_rate_tax->setSingleStep(0.010000000000000);
        label_rate_CB = new QLabel(Deposit);
        label_rate_CB->setObjectName(QString::fromUtf8("label_rate_CB"));
        label_rate_CB->setGeometry(QRect(20, 180, 191, 31));
        label_rate_CB->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        doubleSpinBox_rate_CB = new QDoubleSpinBox(Deposit);
        doubleSpinBox_rate_CB->setObjectName(QString::fromUtf8("doubleSpinBox_rate_CB"));
        doubleSpinBox_rate_CB->setGeometry(QRect(280, 180, 181, 22));
        doubleSpinBox_rate_CB->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Times New Roman\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        doubleSpinBox_rate_CB->setMaximum(500.000000000000000);
        doubleSpinBox_rate_CB->setSingleStep(0.010000000000000);
        comboBox_type_add = new QComboBox(Deposit);
        comboBox_type_add->addItem(QString());
        comboBox_type_add->addItem(QString());
        comboBox_type_add->addItem(QString());
        comboBox_type_add->addItem(QString());
        comboBox_type_add->addItem(QString());
        comboBox_type_add->setObjectName(QString::fromUtf8("comboBox_type_add"));
        comboBox_type_add->setGeometry(QRect(280, 260, 181, 22));
        comboBox_type_add->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Times New Roman\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_add = new QLabel(Deposit);
        label_add->setObjectName(QString::fromUtf8("label_add"));
        label_add->setGeometry(QRect(20, 260, 231, 31));
        label_add->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        comboBox_type_get = new QComboBox(Deposit);
        comboBox_type_get->addItem(QString());
        comboBox_type_get->addItem(QString());
        comboBox_type_get->addItem(QString());
        comboBox_type_get->addItem(QString());
        comboBox_type_get->addItem(QString());
        comboBox_type_get->setObjectName(QString::fromUtf8("comboBox_type_get"));
        comboBox_type_get->setGeometry(QRect(280, 340, 181, 22));
        comboBox_type_get->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Times New Roman\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_get = new QLabel(Deposit);
        label_get->setObjectName(QString::fromUtf8("label_get"));
        label_get->setGeometry(QRect(20, 340, 251, 31));
        label_get->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_note = new QLabel(Deposit);
        label_note->setObjectName(QString::fromUtf8("label_note"));
        label_note->setGeometry(QRect(20, 600, 271, 31));
        label_note->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Times New Roman\";"));
        doubleSpinBox_sum_add = new QDoubleSpinBox(Deposit);
        doubleSpinBox_sum_add->setObjectName(QString::fromUtf8("doubleSpinBox_sum_add"));
        doubleSpinBox_sum_add->setGeometry(QRect(280, 300, 181, 22));
        doubleSpinBox_sum_add->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Times New Roman\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        doubleSpinBox_sum_add->setMaximum(1000000000000.000000000000000);
        doubleSpinBox_sum_add->setSingleStep(0.010000000000000);
        label_add_2 = new QLabel(Deposit);
        label_add_2->setObjectName(QString::fromUtf8("label_add_2"));
        label_add_2->setGeometry(QRect(20, 300, 231, 31));
        label_add_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_get_2 = new QLabel(Deposit);
        label_get_2->setObjectName(QString::fromUtf8("label_get_2"));
        label_get_2->setGeometry(QRect(20, 380, 231, 31));
        label_get_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        doubleSpinBox_sum_get = new QDoubleSpinBox(Deposit);
        doubleSpinBox_sum_get->setObjectName(QString::fromUtf8("doubleSpinBox_sum_get"));
        doubleSpinBox_sum_get->setGeometry(QRect(280, 380, 181, 22));
        doubleSpinBox_sum_get->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Times New Roman\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        doubleSpinBox_sum_get->setMaximum(1000000000000.000000000000000);
        doubleSpinBox_sum_get->setSingleStep(0.010000000000000);

        retranslateUi(Deposit);

        QMetaObject::connectSlotsByName(Deposit);
    } // setupUi

    void retranslateUi(QDialog *Deposit)
    {
        Deposit->setWindowTitle(QCoreApplication::translate("Deposit", "DepositCalculator", nullptr));
        label_time->setText(QCoreApplication::translate("Deposit", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217, \320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));
        label_sum_tax_value->setText(QString());
        label_sum_all_value->setText(QString());
        label_rate_deposit->setText(QCoreApplication::translate("Deposit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260, %", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Deposit", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        label_sum_rate->setText(QCoreApplication::translate("Deposit", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        label_sum_deposit->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260, \321\200\321\203\320\261\320\273\320\265\320\271", nullptr));
        label_sum_rate_value->setText(QString());
        pushButton_calc->setText(QCoreApplication::translate("Deposit", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_sum_tax->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260\320\273\320\276\320\263\320\260*", nullptr));
        comboBox_type_capital->setItemText(0, QCoreApplication::translate("Deposit", "\320\235\320\265\321\202", nullptr));
        comboBox_type_capital->setItemText(1, QCoreApplication::translate("Deposit", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\320\276", nullptr));
        comboBox_type_capital->setItemText(2, QCoreApplication::translate("Deposit", "\320\225\320\266\320\265\320\272\320\262\320\260\321\200\321\202\320\260\320\273\321\214\320\275\320\276", nullptr));
        comboBox_type_capital->setItemText(3, QCoreApplication::translate("Deposit", "\320\240\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        comboBox_type_capital->setItemText(4, QCoreApplication::translate("Deposit", "\320\225\320\266\320\265\320\263\320\276\320\264\320\275\320\276", nullptr));

        label_capital->setText(QCoreApplication::translate("Deposit", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\272\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        label_sum_all->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260 \320\272 \320\272\320\276\320\275\321\206\321\203 \321\201\321\200\320\276\320\272\320\260", nullptr));
        label_rate_tax->setText(QCoreApplication::translate("Deposit", "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260, %", nullptr));
        label_rate_CB->setText(QCoreApplication::translate("Deposit", "\320\232\320\273\321\216\321\207\320\265\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260 \320\246\320\221, %", nullptr));
        comboBox_type_add->setItemText(0, QCoreApplication::translate("Deposit", "\320\235\320\265\321\202", nullptr));
        comboBox_type_add->setItemText(1, QCoreApplication::translate("Deposit", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\320\276", nullptr));
        comboBox_type_add->setItemText(2, QCoreApplication::translate("Deposit", "\320\225\320\266\320\265\320\272\320\262\320\260\321\200\321\202\320\260\320\273\321\214\320\275\320\276", nullptr));
        comboBox_type_add->setItemText(3, QCoreApplication::translate("Deposit", "\320\240\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        comboBox_type_add->setItemText(4, QCoreApplication::translate("Deposit", "\320\225\320\266\320\265\320\263\320\276\320\264\320\275\320\276", nullptr));

        label_add->setText(QCoreApplication::translate("Deposit", "\320\222\320\276\320\267\320\274\320\276\320\266\320\275\320\276\321\201\321\202\321\214 \320\277\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", nullptr));
        comboBox_type_get->setItemText(0, QCoreApplication::translate("Deposit", "\320\235\320\265\321\202", nullptr));
        comboBox_type_get->setItemText(1, QCoreApplication::translate("Deposit", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\320\276", nullptr));
        comboBox_type_get->setItemText(2, QCoreApplication::translate("Deposit", "\320\225\320\266\320\265\320\272\320\262\320\260\321\200\321\202\320\260\320\273\321\214\320\275\320\276", nullptr));
        comboBox_type_get->setItemText(3, QCoreApplication::translate("Deposit", "\320\240\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        comboBox_type_get->setItemText(4, QCoreApplication::translate("Deposit", "\320\225\320\266\320\265\320\263\320\276\320\264\320\275\320\276", nullptr));

        label_get->setText(QCoreApplication::translate("Deposit", "\320\222\320\276\320\267\320\274\320\276\320\266\320\275\320\276\321\201\321\202\321\214 \321\207\320\260\321\201\321\202\320\270\321\207\320\275\320\276\320\263\320\276 \321\201\320\275\321\217\321\202\320\270\321\217", nullptr));
        label_note->setText(QCoreApplication::translate("Deposit", "*\320\275\320\260\320\273\320\276\320\263 \320\275\320\260 \320\262\320\272\320\273\320\260\320\264\321\213 \320\267\320\260 2021 \320\270 2022 \320\263\320\276\320\264 \320\276\321\202\320\274\320\265\320\275\320\265\320\275", nullptr));
        label_add_2->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \320\277\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", nullptr));
        label_get_2->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \321\207\320\260\321\201\321\202\320\270\321\207\320\275\320\276\320\263\320\276 \321\201\320\275\321\217\321\202\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Deposit: public Ui_Deposit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSIT_H
