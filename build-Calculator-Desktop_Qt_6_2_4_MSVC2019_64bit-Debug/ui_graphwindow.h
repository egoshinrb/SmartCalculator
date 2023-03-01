/********************************************************************************
** Form generated from reading UI file 'graphwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHWINDOW_H
#define UI_GRAPHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_GraphWindow
{
public:
    QCustomPlot *widget;
    QSpinBox *spinBox_x_min;
    QSpinBox *spinBox_y_min;
    QSpinBox *spinBox_x_max;
    QSpinBox *spinBox_y_max;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_error;
    QLabel *label_5;
    QLabel *label_expr;

    void setupUi(QDialog *GraphWindow)
    {
        if (GraphWindow->objectName().isEmpty())
            GraphWindow->setObjectName(QString::fromUtf8("GraphWindow"));
        GraphWindow->resize(500, 549);
        GraphWindow->setMinimumSize(QSize(500, 549));
        GraphWindow->setMaximumSize(QSize(500, 549));
        widget = new QCustomPlot(GraphWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 220, 501, 331));
        spinBox_x_min = new QSpinBox(GraphWindow);
        spinBox_x_min->setObjectName(QString::fromUtf8("spinBox_x_min"));
        spinBox_x_min->setGeometry(QRect(110, 60, 121, 22));
        spinBox_x_min->setMinimum(-1000000);
        spinBox_x_min->setMaximum(1000000);
        spinBox_x_min->setValue(-10);
        spinBox_y_min = new QSpinBox(GraphWindow);
        spinBox_y_min->setObjectName(QString::fromUtf8("spinBox_y_min"));
        spinBox_y_min->setGeometry(QRect(360, 60, 121, 22));
        spinBox_y_min->setMinimum(-1000000);
        spinBox_y_min->setMaximum(1000000);
        spinBox_y_min->setValue(-10);
        spinBox_x_max = new QSpinBox(GraphWindow);
        spinBox_x_max->setObjectName(QString::fromUtf8("spinBox_x_max"));
        spinBox_x_max->setGeometry(QRect(110, 90, 121, 22));
        spinBox_x_max->setMinimum(-1000000);
        spinBox_x_max->setMaximum(1000000);
        spinBox_x_max->setValue(10);
        spinBox_y_max = new QSpinBox(GraphWindow);
        spinBox_y_max->setObjectName(QString::fromUtf8("spinBox_y_max"));
        spinBox_y_max->setGeometry(QRect(360, 90, 121, 22));
        spinBox_y_max->setMinimum(-1000000);
        spinBox_y_max->setMaximum(1000000);
        spinBox_y_max->setValue(10);
        label = new QLabel(GraphWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 49, 16));
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_2 = new QLabel(GraphWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 60, 49, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_3 = new QLabel(GraphWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 90, 49, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_4 = new QLabel(GraphWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 90, 49, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        pushButton = new QPushButton(GraphWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 130, 161, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_error = new QLabel(GraphWindow);
        label_error->setObjectName(QString::fromUtf8("label_error"));
        label_error->setGeometry(QRect(20, 180, 461, 20));
        label_error->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";\n"
"color: rgb(255, 0, 0);"));
        label_error->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(GraphWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 10, 101, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_expr = new QLabel(GraphWindow);
        label_expr->setObjectName(QString::fromUtf8("label_expr"));
        label_expr->setGeometry(QRect(130, 10, 351, 21));
        label_expr->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));

        retranslateUi(GraphWindow);

        QMetaObject::connectSlotsByName(GraphWindow);
    } // setupUi

    void retranslateUi(QDialog *GraphWindow)
    {
        GraphWindow->setWindowTitle(QCoreApplication::translate("GraphWindow", "Graph", nullptr));
        label->setText(QCoreApplication::translate("GraphWindow", "X_min", nullptr));
        label_2->setText(QCoreApplication::translate("GraphWindow", "Y_min", nullptr));
        label_3->setText(QCoreApplication::translate("GraphWindow", "Y_max", nullptr));
        label_4->setText(QCoreApplication::translate("GraphWindow", "X_max", nullptr));
        pushButton->setText(QCoreApplication::translate("GraphWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        label_error->setText(QString());
        label_5->setText(QCoreApplication::translate("GraphWindow", "\320\244\321\203\320\275\320\272\321\206\320\270\321\217: y  = ", nullptr));
        label_expr->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GraphWindow: public Ui_GraphWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHWINDOW_H
