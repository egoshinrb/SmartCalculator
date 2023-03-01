/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_1;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_op_bracket;
    QPushButton *pushButton_cl_bracket;
    QPushButton *pushButton_credit;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_multi;
    QPushButton *pushButton_x;
    QPushButton *pushButton_2;
    QPushButton *pushButton_log;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_5;
    QPushButton *pushButton_point;
    QPushButton *pushButton_res;
    QPushButton *pushButton_7;
    QPushButton *pushButton_exp;
    QPushButton *pushButton_9;
    QPushButton *pushButton_sqrt;
    QLabel *label_in;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_back;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_graph;
    QPushButton *pushButton_del;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_div;
    QPushButton *pushButton_deposit;
    QLabel *label_out;
    QPushButton *pushButton_0;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_8;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_4;
    QPushButton *pushButton_mod;
    QDoubleSpinBox *doubleSpinBox_x;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(676, 502);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(676, 502));
        MainWindow->setMaximumSize(QSize(676, 502));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(176, 176, 176);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setFocusPolicy(Qt::NoFocus);
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(230, 380, 108, 56));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy2);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: white;\n"
"  color: black; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(120, 320, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_atan->sizePolicy().hasHeightForWidth());
        pushButton_atan->setSizePolicy(sizePolicy2);
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color:  rgb(255, 112, 36);\n"
"  color: white; \n"
"  border: 3px solid rgb(255, 112, 36);\n"
" border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(214, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(143, 0, 0);\n"
"}"));
        pushButton_op_bracket = new QPushButton(centralwidget);
        pushButton_op_bracket->setObjectName(QString::fromUtf8("pushButton_op_bracket"));
        pushButton_op_bracket->setGeometry(QRect(230, 200, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_op_bracket->sizePolicy().hasHeightForWidth());
        pushButton_op_bracket->setSizePolicy(sizePolicy2);
        pushButton_op_bracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: rgb(152, 143, 139);\n"
"  color: white; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_cl_bracket = new QPushButton(centralwidget);
        pushButton_cl_bracket->setObjectName(QString::fromUtf8("pushButton_cl_bracket"));
        pushButton_cl_bracket->setGeometry(QRect(340, 200, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_cl_bracket->sizePolicy().hasHeightForWidth());
        pushButton_cl_bracket->setSizePolicy(sizePolicy2);
        pushButton_cl_bracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: rgb(152, 143, 139);\n"
"  color: white; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_credit = new QPushButton(centralwidget);
        pushButton_credit->setObjectName(QString::fromUtf8("pushButton_credit"));
        pushButton_credit->setGeometry(QRect(460, 100, 91, 31));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_credit->sizePolicy().hasHeightForWidth());
        pushButton_credit->setSizePolicy(sizePolicy3);
        pushButton_credit->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Verdana\";\n"
""));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(10, 200, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_sin->sizePolicy().hasHeightForWidth());
        pushButton_sin->setSizePolicy(sizePolicy2);
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color:  rgb(255, 112, 36);\n"
"  color: white; \n"
"  border: 3px solid rgb(255, 112, 36);\n"
" border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(214, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(143, 0, 0);\n"
"}"));
        pushButton_multi = new QPushButton(centralwidget);
        pushButton_multi->setObjectName(QString::fromUtf8("pushButton_multi"));
        pushButton_multi->setGeometry(QRect(560, 380, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_multi->sizePolicy().hasHeightForWidth());
        pushButton_multi->setSizePolicy(sizePolicy2);
        pushButton_multi->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: rgb(152, 143, 139);\n"
"  color: white; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_x = new QPushButton(centralwidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setGeometry(QRect(120, 140, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_x->sizePolicy().hasHeightForWidth());
        pushButton_x->setSizePolicy(sizePolicy2);
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 22pt \"Verdana\";\n"
"  background-color: rgb(152, 143, 139);\n"
"  color: white; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 380, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: white;\n"
"  color: black; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(10, 440, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_log->sizePolicy().hasHeightForWidth());
        pushButton_log->setSizePolicy(sizePolicy2);
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color:  rgb(255, 112, 36);\n"
"  color: white; \n"
"  border: 3px solid rgb(255, 112, 36);\n"
" border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(214, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(143, 0, 0);\n"
"}"));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(10, 260, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_cos->sizePolicy().hasHeightForWidth());
        pushButton_cos->setSizePolicy(sizePolicy2);
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color:  rgb(255, 112, 36);\n"
"  color: white; \n"
"  border: 3px solid rgb(255, 112, 36);\n"
" border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(214, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(143, 0, 0);\n"
"}"));
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(120, 260, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_acos->sizePolicy().hasHeightForWidth());
        pushButton_acos->setSizePolicy(sizePolicy2);
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color:  rgb(255, 112, 36);\n"
"  color: white; \n"
"  border: 3px solid rgb(255, 112, 36);\n"
" border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(214, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(143, 0, 0);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(340, 320, 108, 56));
        sizePolicy3.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy3);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: white;\n"
"  color: black; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_point = new QPushButton(centralwidget);
        pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));
        pushButton_point->setGeometry(QRect(340, 440, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_point->sizePolicy().hasHeightForWidth());
        pushButton_point->setSizePolicy(sizePolicy2);
        pushButton_point->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: white;\n"
"  color: black; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_res = new QPushButton(centralwidget);
        pushButton_res->setObjectName(QString::fromUtf8("pushButton_res"));
        pushButton_res->setGeometry(QRect(450, 140, 216, 56));
        sizePolicy2.setHeightForWidth(pushButton_res->sizePolicy().hasHeightForWidth());
        pushButton_res->setSizePolicy(sizePolicy2);
        pushButton_res->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: rgb(152, 143, 139);\n"
"  color: white; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(230, 260, 108, 56));
        sizePolicy3.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy3);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: white;\n"
"  color: black; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_exp = new QPushButton(centralwidget);
        pushButton_exp->setObjectName(QString::fromUtf8("pushButton_exp"));
        pushButton_exp->setGeometry(QRect(450, 440, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_exp->sizePolicy().hasHeightForWidth());
        pushButton_exp->setSizePolicy(sizePolicy2);
        pushButton_exp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: rgb(152, 143, 139);\n"
"  color: white; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(450, 260, 108, 56));
        sizePolicy3.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy3);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: white;\n"
"  color: black; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(120, 380, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_sqrt->sizePolicy().hasHeightForWidth());
        pushButton_sqrt->setSizePolicy(sizePolicy2);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color:  rgb(255, 112, 36);\n"
"  color: white; \n"
"  border: 3px solid rgb(255, 112, 36);\n"
" border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(214, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(143, 0, 0);\n"
"}"));
        label_in = new QLabel(centralwidget);
        label_in->setObjectName(QString::fromUtf8("label_in"));
        label_in->setGeometry(QRect(9, 9, 661, 39));
        sizePolicy3.setHeightForWidth(label_in->sizePolicy().hasHeightForWidth());
        label_in->setSizePolicy(sizePolicy3);
        label_in->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 24pt \"Times New Roman\";\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10;\n"
"}"));
        label_in->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(560, 260, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy2);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: rgb(152, 143, 139);\n"
"  color: white; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(120, 200, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_asin->sizePolicy().hasHeightForWidth());
        pushButton_asin->setSizePolicy(sizePolicy2);
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color:  rgb(255, 112, 36);\n"
"  color: white; \n"
"  border: 3px solid rgb(255, 112, 36);\n"
" border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(214, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(143, 0, 0);\n"
"}"));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(450, 200, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy2);
        pushButton_back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: rgb(152, 143, 139);\n"
"  color: white; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(450, 380, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: white;\n"
"  color: black; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(450, 320, 108, 56));
        sizePolicy3.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy3);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: white;\n"
"  color: black; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_graph = new QPushButton(centralwidget);
        pushButton_graph->setObjectName(QString::fromUtf8("pushButton_graph"));
        pushButton_graph->setGeometry(QRect(10, 140, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_graph->sizePolicy().hasHeightForWidth());
        pushButton_graph->setSizePolicy(sizePolicy2);
        pushButton_graph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: rgb(152, 143, 139);\n"
"  color: white; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"	border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_del = new QPushButton(centralwidget);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setGeometry(QRect(560, 200, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_del->sizePolicy().hasHeightForWidth());
        pushButton_del->setSizePolicy(sizePolicy2);
        pushButton_del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: rgb(152, 143, 139);\n"
"  color: white; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_sub = new QPushButton(centralwidget);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        pushButton_sub->setGeometry(QRect(560, 320, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_sub->sizePolicy().hasHeightForWidth());
        pushButton_sub->setSizePolicy(sizePolicy2);
        pushButton_sub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: rgb(152, 143, 139);\n"
"  color: white; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(560, 440, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_div->sizePolicy().hasHeightForWidth());
        pushButton_div->setSizePolicy(sizePolicy2);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: rgb(152, 143, 139);\n"
"  color: white; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}background: purple;\n"
" border: outset;\n"
" border: 2px;\n"
" border: 10px;\n"
" border: beige;\n"
" font: bold 14px;\n"
" min-width: 10em;\n"
" padding:  6;"));
        pushButton_deposit = new QPushButton(centralwidget);
        pushButton_deposit->setObjectName(QString::fromUtf8("pushButton_deposit"));
        pushButton_deposit->setGeometry(QRect(570, 100, 91, 31));
        sizePolicy3.setHeightForWidth(pushButton_deposit->sizePolicy().hasHeightForWidth());
        pushButton_deposit->setSizePolicy(sizePolicy3);
        pushButton_deposit->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Verdana\";"));
        label_out = new QLabel(centralwidget);
        label_out->setObjectName(QString::fromUtf8("label_out"));
        label_out->setGeometry(QRect(9, 54, 661, 39));
        sizePolicy3.setHeightForWidth(label_out->sizePolicy().hasHeightForWidth());
        label_out->setSizePolicy(sizePolicy3);
        label_out->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 24pt \"Times New Roman\";\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10;\n"
"}\n"
"\n"
""));
        label_out->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(230, 440, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy2);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: white;\n"
"  color: black; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(10, 380, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_ln->sizePolicy().hasHeightForWidth());
        pushButton_ln->setSizePolicy(sizePolicy2);
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color:  rgb(255, 112, 36);\n"
"  color: white; \n"
"  border: 3px solid rgb(255, 112, 36);\n"
" border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(214, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(143, 0, 0);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(340, 260, 108, 56));
        sizePolicy3.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy3);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: white;\n"
"  color: black; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(10, 320, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_tan->sizePolicy().hasHeightForWidth());
        pushButton_tan->setSizePolicy(sizePolicy2);
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color:  rgb(255, 112, 36);\n"
"  color: white; \n"
"  border: 3px solid rgb(255, 112, 36);\n"
" border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(214, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(143, 0, 0);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(230, 320, 108, 56));
        sizePolicy3.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy3);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color: white;\n"
"  color: black; \n"
"  border: 2px solid rgb(84, 78, 74);\n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(116, 108, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(84, 78, 74);\n"
"}"));
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(120, 440, 108, 56));
        sizePolicy2.setHeightForWidth(pushButton_mod->sizePolicy().hasHeightForWidth());
        pushButton_mod->setSizePolicy(sizePolicy2);
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 600 14pt \"Verdana\";\n"
"  background-color:  rgb(255, 112, 36);\n"
"  color: white; \n"
"  border: 3px solid rgb(255, 112, 36);\n"
" border-radius: 10;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(214, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(143, 0, 0);\n"
"}"));
        doubleSpinBox_x = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_x->setObjectName(QString::fromUtf8("doubleSpinBox_x"));
        doubleSpinBox_x->setGeometry(QRect(230, 140, 216, 56));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(doubleSpinBox_x->sizePolicy().hasHeightForWidth());
        doubleSpinBox_x->setSizePolicy(sizePolicy4);
        doubleSpinBox_x->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Times New Roman\";\n"
"font: 700 12pt \"Verdana\";"));
        doubleSpinBox_x->setDecimals(6);
        doubleSpinBox_x->setMinimum(-9223372036854775808.000000000000000);
        doubleSpinBox_x->setMaximum(9223372036854775808.000000000000000);
        doubleSpinBox_x->setSingleStep(0.000001000000000);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_op_bracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_cl_bracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_credit->setText(QCoreApplication::translate("MainWindow", "credit", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_multi->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_res->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_exp->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        label_in->setText(QString());
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_back->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_graph->setText(QCoreApplication::translate("MainWindow", "graph", nullptr));
        pushButton_del->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_deposit->setText(QCoreApplication::translate("MainWindow", "deposit", nullptr));
        label_out->setText(QString());
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
