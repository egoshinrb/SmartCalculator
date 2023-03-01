#ifndef DEPOSIT_H
#define DEPOSIT_H

#include <QDialog>

namespace Ui {
class Deposit;
}

class Deposit : public QDialog
{
    Q_OBJECT

public:
    explicit Deposit(QWidget *parent = nullptr);
    ~Deposit();

private slots:
    void on_pushButton_clear_clicked();

    void on_pushButton_calc_clicked();

    void on_comboBox_type_add_currentIndexChanged(int index);

    void on_comboBox_type_get_currentIndexChanged(int index);

private:
    Ui::Deposit *ui;
};

#endif // DEPOSIT_H
