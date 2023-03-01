#ifndef CREDIT_H
#define CREDIT_H

#include <QDialog>
#include <QtMath>

namespace Ui {
class Credit;
}

class Credit : public QDialog
{
    Q_OBJECT

public:
    explicit Credit(QWidget *parent = nullptr);
    ~Credit();

private slots:
    void on_pushButton_clear_clicked();

    void on_pushButton_calc_clicked();

private:
    Ui::Credit *ui;
};

#endif // CREDIT_H
