#ifndef GRAPHWINDOW_H
#define GRAPHWINDOW_H

#include <QDialog>
#include <QVector>
#include <QtMath>

extern "C" {
    #include "calc.h"
}

namespace Ui {
class GraphWindow;
}

class GraphWindow : public QDialog
{
    Q_OBJECT

public:
    explicit GraphWindow(QWidget *parent = nullptr);
    ~GraphWindow();

 private slots:
    void on_pushButton_clicked();
    void get_str(QString in);

private:
    Ui::GraphWindow *ui;
};

#endif // GRAPHWINDOW_H
