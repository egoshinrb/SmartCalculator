#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    graph_window = new GraphWindow();

    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_point, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_mod, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_op_bracket, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_cl_bracket, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_x, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_sub, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_multi, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_div, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_exp, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));

    connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(on_pushButton_func_clicked()));
    connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(on_pushButton_func_clicked()));
    connect(ui->pushButton_tan, SIGNAL(clicked()), this, SLOT(on_pushButton_func_clicked()));
    connect(ui->pushButton_asin, SIGNAL(clicked()), this, SLOT(on_pushButton_func_clicked()));
    connect(ui->pushButton_acos, SIGNAL(clicked()), this, SLOT(on_pushButton_func_clicked()));
    connect(ui->pushButton_atan, SIGNAL(clicked()), this, SLOT(on_pushButton_func_clicked()));
    connect(ui->pushButton_ln, SIGNAL(clicked()), this, SLOT(on_pushButton_func_clicked()));
    connect(ui->pushButton_log, SIGNAL(clicked()), this, SLOT(on_pushButton_func_clicked()));
    connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(on_pushButton_func_clicked()));

    connect(ui->pushButton_graph, SIGNAL(clicked()), graph_window, SLOT(show()));
    connect(ui->pushButton_graph, SIGNAL(clicked()), this, SLOT(send_signal_str()));
    connect(this, SIGNAL(sendData(QString)), graph_window, SLOT(get_str(QString)));



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QPushButton *button = (QPushButton *) sender();
    QString in = ui->label_in->text() + button->text();
    ui->label_in->setText(in);
}

void MainWindow::on_pushButton_func_clicked()
{
    QPushButton *button = (QPushButton *) sender();
    QString in = ui->label_in->text() + button->text() + "(";
    ui->label_in->setText(in);
}


void MainWindow::on_pushButton_del_clicked()
{
    ui->label_in->clear();
    ui->label_out->clear();
    ui->doubleSpinBox_x->setValue(0);
}


void MainWindow::on_pushButton_res_clicked()
{
    bool is_error = 0;
    QString str_in = ui->label_in->text();
    QString str_out;

    if (str_in.isEmpty()) {
        str_out = "Пустое выражение";
    } else {
        QByteArray in = str_in.toLocal8Bit();
        char* str_in = in.data();

        double x = ui->doubleSpinBox_x->value();

        double res = smart_calc(str_in, &is_error, x);

        if (is_error) {
            str_out = "Ошибка выражения";
        } else {
            str_out = QString::number(res, 'f', 7);
        }
    }

    ui->label_out->setText(str_out);
}

void MainWindow::send_signal_str()
{
    emit sendData(ui->label_in->text());
}

void MainWindow::on_pushButton_graph_clicked()
{
    graph_window->setModal(true);

}


void MainWindow::on_pushButton_credit_clicked()
{
    Credit credit_window;
    credit_window.exec();
}


void MainWindow::on_pushButton_deposit_clicked()
{
    Deposit deposit_window;
    deposit_window.exec();
}

void MainWindow::on_pushButton_back_clicked()
{
    QString str = ui->label_in->text();

    str = str.left(str.size() - 1);
    int size = str.size();
    int i = 1;
    for(; (size - i) > -1 && str[size - i].isLetter(); i++) {
        if (str[size - i] == 'x' || str[size - i] == 'd') {
            break;
        }
    }
    if (i > 1) {
        str = str.left(size - i + 1);
    }
    ui->label_in->setText(str);
}
