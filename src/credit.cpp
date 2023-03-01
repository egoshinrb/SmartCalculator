#include "credit.h"
#include "ui_credit.h"

Credit::Credit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Credit)
{
    ui->setupUi(this);
}

Credit::~Credit()
{
    delete ui;
}

void Credit::on_pushButton_clear_clicked()
{
    ui->doubleSpinBox_sum->setValue(0);
    ui->spinBox_time->setValue(0);
    ui->doubleSpinBox_rate->setValue(0);
    ui->comboBox_payment_type->setCurrentIndex(0);

    ui->label_sum_payment_first->clear();
    ui->label_sum_payment_last->clear();
    ui->label_sum_rate->clear();
    ui->label_sum_all->clear();
}
void Credit::on_pushButton_calc_clicked()
{
    double sum = ui->doubleSpinBox_sum->value();
    int time = ui->spinBox_time->value();
    double rate = ui->doubleSpinBox_rate->value();

    double rate_month = rate / 12 / 100;

    if (sum && time && rate) {
        double sum_rate = 0;

        if (ui->comboBox_payment_type->currentIndex()) { // дифф
           double debt = sum;
           double sum_part = debt / time;
           double payment_first = sum_part + debt * rate_month;
           double payment_last = 0;

           for (; time; time--) {
               sum_rate += debt * rate_month;
               if (time == 1) {
                   payment_last = sum_part + debt * rate_month;
               }
               debt -= sum_part;
           }

           ui->label_sum_payment_first->setText("от " + QString::number(payment_first, 'f', 2) + " рублей");
           ui->label_sum_payment_last->setText("до " + QString::number(payment_last, 'f', 2) + " рублей");
        } else { // аннуитет
           double payment_month = sum * ((rate_month * pow(1 + rate_month, time)) / (pow(1 + rate_month, time) - 1));
           sum_rate = payment_month * time - sum;

           ui->label_sum_payment_first->setText(QString::number(payment_month, 'f', 2) + " рублей");
           ui->label_sum_payment_last->clear();
        }

        ui->label_sum_rate->setText(QString::number(sum_rate, 'f', 2) + " рублей");
        ui->label_sum_all->setText(QString::number(sum + sum_rate, 'f', 2) + " рублей");
    }
}

