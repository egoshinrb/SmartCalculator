/********************************************************************************
** Form generated from reading UI file 'credit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_H
#define UI_CREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Credit
{
public:
    QLabel *label_credit;
    QDoubleSpinBox *doubleSpinBox_sum;
    QLabel *label_time;
    QDoubleSpinBox *doubleSpinBox_rate;
    QSpinBox *spinBox_time;
    QLabel *label_rate;
    QLabel *label_payment;
    QComboBox *comboBox_payment_type;
    QLabel *label_answer_payment;
    QLabel *label_answer_rate;
    QLabel *label_answer_all;
    QLabel *label_sum_payment_first;
    QLabel *label_sum_rate;
    QLabel *label_sum_all;
    QPushButton *pushButton_calc;
    QPushButton *pushButton_clear;
    QLabel *label_sum_payment_last;

    void setupUi(QDialog *Credit)
    {
        if (Credit->objectName().isEmpty())
            Credit->setObjectName(QString::fromUtf8("Credit"));
        Credit->resize(458, 431);
        Credit->setMinimumSize(QSize(458, 431));
        Credit->setMaximumSize(QSize(458, 431));
        Credit->setStyleSheet(QString::fromUtf8("background-color: rgb(182, 182, 182);"));
        label_credit = new QLabel(Credit);
        label_credit->setObjectName(QString::fromUtf8("label_credit"));
        label_credit->setGeometry(QRect(20, 20, 181, 21));
        label_credit->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        doubleSpinBox_sum = new QDoubleSpinBox(Credit);
        doubleSpinBox_sum->setObjectName(QString::fromUtf8("doubleSpinBox_sum"));
        doubleSpinBox_sum->setGeometry(QRect(250, 20, 181, 22));
        doubleSpinBox_sum->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Times New Roman\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        doubleSpinBox_sum->setMaximum(999999999999.989990234375000);
        doubleSpinBox_sum->setSingleStep(0.010000000000000);
        label_time = new QLabel(Credit);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(20, 60, 181, 21));
        label_time->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        doubleSpinBox_rate = new QDoubleSpinBox(Credit);
        doubleSpinBox_rate->setObjectName(QString::fromUtf8("doubleSpinBox_rate"));
        doubleSpinBox_rate->setGeometry(QRect(250, 100, 181, 22));
        doubleSpinBox_rate->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Times New Roman\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        doubleSpinBox_rate->setMaximum(500.000000000000000);
        doubleSpinBox_rate->setSingleStep(0.010000000000000);
        spinBox_time = new QSpinBox(Credit);
        spinBox_time->setObjectName(QString::fromUtf8("spinBox_time"));
        spinBox_time->setGeometry(QRect(250, 60, 181, 22));
        spinBox_time->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Times New Roman\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        spinBox_time->setMaximum(1200);
        label_rate = new QLabel(Credit);
        label_rate->setObjectName(QString::fromUtf8("label_rate"));
        label_rate->setGeometry(QRect(20, 100, 191, 31));
        label_rate->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_payment = new QLabel(Credit);
        label_payment->setObjectName(QString::fromUtf8("label_payment"));
        label_payment->setGeometry(QRect(20, 140, 211, 31));
        label_payment->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        comboBox_payment_type = new QComboBox(Credit);
        comboBox_payment_type->addItem(QString());
        comboBox_payment_type->addItem(QString());
        comboBox_payment_type->setObjectName(QString::fromUtf8("comboBox_payment_type"));
        comboBox_payment_type->setGeometry(QRect(250, 140, 181, 22));
        comboBox_payment_type->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Times New Roman\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_answer_payment = new QLabel(Credit);
        label_answer_payment->setObjectName(QString::fromUtf8("label_answer_payment"));
        label_answer_payment->setGeometry(QRect(20, 230, 211, 31));
        label_answer_payment->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_answer_rate = new QLabel(Credit);
        label_answer_rate->setObjectName(QString::fromUtf8("label_answer_rate"));
        label_answer_rate->setGeometry(QRect(20, 300, 211, 31));
        label_answer_rate->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_answer_all = new QLabel(Credit);
        label_answer_all->setObjectName(QString::fromUtf8("label_answer_all"));
        label_answer_all->setGeometry(QRect(20, 340, 211, 31));
        label_answer_all->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_sum_payment_first = new QLabel(Credit);
        label_sum_payment_first->setObjectName(QString::fromUtf8("label_sum_payment_first"));
        label_sum_payment_first->setGeometry(QRect(240, 230, 211, 31));
        label_sum_payment_first->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_sum_rate = new QLabel(Credit);
        label_sum_rate->setObjectName(QString::fromUtf8("label_sum_rate"));
        label_sum_rate->setGeometry(QRect(240, 300, 211, 31));
        label_sum_rate->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_sum_all = new QLabel(Credit);
        label_sum_all->setObjectName(QString::fromUtf8("label_sum_all"));
        label_sum_all->setGeometry(QRect(240, 340, 211, 31));
        label_sum_all->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        pushButton_calc = new QPushButton(Credit);
        pushButton_calc->setObjectName(QString::fromUtf8("pushButton_calc"));
        pushButton_calc->setGeometry(QRect(250, 190, 131, 24));
        pushButton_calc->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        pushButton_clear = new QPushButton(Credit);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(70, 190, 131, 24));
        pushButton_clear->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_sum_payment_last = new QLabel(Credit);
        label_sum_payment_last->setObjectName(QString::fromUtf8("label_sum_payment_last"));
        label_sum_payment_last->setGeometry(QRect(240, 260, 211, 31));
        label_sum_payment_last->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));

        retranslateUi(Credit);

        QMetaObject::connectSlotsByName(Credit);
    } // setupUi

    void retranslateUi(QDialog *Credit)
    {
        Credit->setWindowTitle(QCoreApplication::translate("Credit", "CreditCalculator", nullptr));
        label_credit->setText(QCoreApplication::translate("Credit", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260, \321\200\321\203\320\261\320\273\320\265\320\271", nullptr));
        label_time->setText(QCoreApplication::translate("Credit", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260, \320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));
        label_rate->setText(QCoreApplication::translate("Credit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260, %", nullptr));
        label_payment->setText(QCoreApplication::translate("Credit", "\320\242\320\270\320\277 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\321\205 \320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271", nullptr));
        comboBox_payment_type->setItemText(0, QCoreApplication::translate("Credit", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\271", nullptr));
        comboBox_payment_type->setItemText(1, QCoreApplication::translate("Credit", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));

        label_answer_payment->setText(QCoreApplication::translate("Credit", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
        label_answer_rate->setText(QCoreApplication::translate("Credit", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        label_answer_all->setText(QCoreApplication::translate("Credit", "\320\236\320\261\321\211\320\260\321\217 \321\201\321\203\320\274\320\274\320\260 \320\267\320\260 \320\262\320\265\321\201\321\214 \320\277\320\265\321\200\320\270\320\276\320\264", nullptr));
        label_sum_payment_first->setText(QString());
        label_sum_rate->setText(QString());
        label_sum_all->setText(QString());
        pushButton_calc->setText(QCoreApplication::translate("Credit", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Credit", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        label_sum_payment_last->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Credit: public Ui_Credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H
