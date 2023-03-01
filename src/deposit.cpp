#include "deposit.h"
#include "ui_deposit.h"

Deposit::Deposit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Deposit)
{
    ui->setupUi(this);
    ui->doubleSpinBox_sum_add->setEnabled(false);
    ui->doubleSpinBox_sum_get->setEnabled(false);

}

Deposit::~Deposit()
{
    delete ui;
}

void Deposit::on_pushButton_clear_clicked()
{
    ui->doubleSpinBox_sum_deposit->setValue(0);
    ui->spinBox_time->setValue(0);
    ui->doubleSpinBox_rate_deposit->setValue(0);
    ui->doubleSpinBox_rate_tax->setValue(0);
    ui->doubleSpinBox_rate_CB->setValue(0);
    ui->comboBox_type_capital->setCurrentIndex(0);
    ui->comboBox_type_add->setCurrentIndex(0);
    ui->comboBox_type_get->setCurrentIndex(0);

    ui->doubleSpinBox_sum_add->setValue(0);
    ui->doubleSpinBox_sum_get->setValue(0);

    ui->label_sum_rate_value->clear();
    ui->label_sum_all_value->clear();
    ui->label_sum_tax_value->clear();
}


void Deposit::on_pushButton_calc_clicked()
{
    double sum_deposit = ui->doubleSpinBox_sum_deposit->value();
    int time = ui->spinBox_time->value();
    double rate_deposit_month = ui->doubleSpinBox_rate_deposit->value() / 12 / 100;

    if (sum_deposit && time && rate_deposit_month) {
        double total = sum_deposit;
        double profit = 0;

        int time_capital = ui->comboBox_type_capital->currentIndex();
        int time_add = ui->comboBox_type_add->currentIndex();
        int time_get = ui->comboBox_type_get->currentIndex();
        double sum_add = ui->doubleSpinBox_sum_add->value();
        double sum_get = ui->doubleSpinBox_sum_get->value();

        double rate_CB_month = ui->doubleSpinBox_rate_CB->value() / 12 / 100;
        double profit_for_tax = 1000000 * rate_CB_month * time;

        for (int i = 1; i < time + 1; i++) {
            profit += total * rate_deposit_month;

            if (time_capital) {
                switch (time_capital) {
                    case 1:
                        total = sum_deposit + profit;
                        break;
                    case 2:
                        if (i % 3 == 0) {
                            total = sum_deposit + profit;
                        }
                        break;
                    case 3:
                        if (i % 6 == 0) {
                            total = sum_deposit + profit;
                        }
                        break;
                    case 4:
                        if (i % 12 == 0) {
                            total = sum_deposit + profit;
                        }
                        break;
                }
            }

            if (time_add && sum_add) {
                switch (time_add) {
                    case 1:
                        total += sum_add;
                        sum_deposit += sum_add;
                        break;
                    case 2:
                        if (i % 3 == 0) {
                            total += sum_add;
                            sum_deposit += sum_add;
                        }
                        break;
                    case 3:
                        if (i % 6 == 0) {
                            total += sum_add;
                            sum_deposit += sum_add;
                        }
                        break;
                    case 4:
                        if (i % 12 == 0) {
                            total += sum_add;
                            sum_deposit += sum_add;
                        }
                        break;
                }
            }

            if (time_get && sum_get && (total - sum_get) >= 0) {
                switch (time_get) {
                    case 1:
                        total -= sum_get;
                        sum_deposit -= sum_get;
                        break;
                    case 2:
                        if (i % 3 == 0) {
                            total -= sum_get;
                            sum_deposit -= sum_get;
                        }
                        break;
                    case 3:
                        if (i % 6 == 0) {
                            total -= sum_get;
                            sum_deposit -= sum_get;
                        }
                        break;
                    case 4:
                        if (i % 12 == 0) {
                            total -= sum_get;
                            sum_deposit -= sum_get;
                        }
                        break;
                }
            }
        }

        ui->label_sum_rate_value->setText(QString::number(profit, 'f', 2) + " рублей");
        ui->label_sum_all_value->setText(QString::number(sum_deposit + profit, 'f', 2) + " рублей");

        if (profit > profit_for_tax) {
            double tax_sum = (profit - profit_for_tax) * ui->doubleSpinBox_rate_tax->value() / 100;
            ui->label_sum_tax_value->setText(QString::number(tax_sum, 'f', 2) + " рублей");
        }
    }
}


void Deposit::on_comboBox_type_add_currentIndexChanged(int index)
{
    if (index) {
        ui->doubleSpinBox_sum_add->setEnabled(true);
    } else {
        ui->doubleSpinBox_sum_add->setEnabled(false);
    }
}


void Deposit::on_comboBox_type_get_currentIndexChanged(int index)
{
    if (index) {
        ui->doubleSpinBox_sum_get->setEnabled(true);
    } else {
        ui->doubleSpinBox_sum_get->setEnabled(false);
    }
}

