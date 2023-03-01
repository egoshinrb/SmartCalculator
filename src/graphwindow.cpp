#include "graphwindow.h"
#include "ui_graphwindow.h"

#include "graphwindow.h"

GraphWindow::GraphWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GraphWindow)
{
    ui->setupUi(this);
}

GraphWindow::~GraphWindow()
{
    delete ui;
}

void GraphWindow::on_pushButton_clicked()
{
    double x_min, x_max, y_min, y_max;
    x_min = ui->spinBox_x_min->value();
    x_max = ui->spinBox_x_max->value();
    y_min = ui->spinBox_y_min->value();
    y_max = ui->spinBox_y_max->value();

    QString str = ui->label_expr->text();

    if (x_max < x_min) {
        ui->label_error->setText("Ошибка области определения функции");
    } else if (y_max < y_min) {
        ui->label_error->setText("Ошибка области значений функции");
    } else if (str.isEmpty()) {
        ui->label_error->setText("Пустая функция");
    } else {
        QVector<double> x, y;
        x.clear();
        y.clear();

        QByteArray str2 = str.toLocal8Bit();
        char* in = str2.data();

        bool is_error = true;
        smart_calc(in, &is_error, 0.0);


        ui->widget->clearGraphs();
        ui->label_error->clear();


        if (is_error) {
            ui->label_error->setText("Ошибка в функции");
        } else {
            ui->label_error->setText("График функции успешно построен");

            ui->widget->xAxis->setRange(x_min, x_max);
            ui->widget->yAxis->setRange(y_min, y_max);

            double step = fabs(x_max - x_min) / 10000;
            double x_temp, y_temp;

            for (x_temp = x_min; x_temp <= x_max; x_temp += step) {

                y_temp = smart_calc(in, &is_error, x_temp);

                if (!isnan(y_temp) && y_temp >= y_min && y_temp <= y_max) {
                    x.push_back(x_temp);
                    y.push_back(y_temp);
                }
            }
            ui->widget->addGraph();
            ui->widget->graph(0)->setLineStyle(QCPGraph::lsNone);
            ui->widget->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 1));
            ui->widget->graph(0)->addData(x, y);
            ui->widget->replot();
            ui->widget->setInteraction(QCP::iRangeZoom, true);
            ui->widget->setInteraction(QCP::iRangeDrag, true);
        }
    }

}

void GraphWindow::get_str(QString in)
{
    ui->widget->clearGraphs();
    ui->widget->replot();

    ui->label_expr->setText(in);
    ui->label_error->clear();
}

