#ifndef METOD_NUTON_H
#define METOD_NUTON_H

#include <QWidget>
#include <QString>
#include "authregform.h"
#include "functionsforclient.h"
#include "mainwindow.h"

namespace Ui {
class metod_nuton;
}

class metod_nuton : public QWidget
{
    Q_OBJECT

public:
    explicit metod_nuton(QWidget *parent = nullptr);
    ~metod_nuton();
    QString func;
    void setLogin(const QString &login);
    QString login;

private slots:
    void on_btn_back_clicked();
    void on_btn_answer_clicked();
    void on_btn_change_func_clicked();

signals:
    void backToMainWindow();

private:
    Ui::metod_nuton *ui;

    double x1;
    double x2;
    int a;
    int b;
    int c;
};

#endif // METOD_NUTON_H
