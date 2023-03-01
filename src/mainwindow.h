#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QInputDialog>
#include <QVector>

#include "graphwindow.h"
#include "credit.h"
#include "deposit.h"

extern "C" {
    #include "calc.h"
}

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_func_clicked();

    void on_pushButton_del_clicked();

    void on_pushButton_res_clicked();

    void send_signal_str();

    void on_pushButton_graph_clicked();

    void on_pushButton_credit_clicked();

    void on_pushButton_deposit_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::MainWindow *ui;
    GraphWindow *graph_window;

signals:
    void sendData(QString in);
};

#endif // MAINWINDOW_H
