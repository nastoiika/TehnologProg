#include "reg.h"
#include "ui_reg.h"

#include "authregform.h"
#include "mainwindow.h"

reg::reg(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::reg)
{
    ui->setupUi(this);
}

reg::~reg()
{
    delete ui;
}

void reg::on_btn_reg_clicked()
{
    QString login1 = ui->line_login_2->text();
    QString password1 = ui->line_password_2->text();
    QString email1 = ui->line_email->text();
    QString confirm_password1 = ui->line_confirm_pass->text();

    // Проверяем, что поля не пустые
    if (!login1.isEmpty() && !password1.isEmpty() && !email1.isEmpty() && !confirm_password1.isEmpty() && password1 == confirm_password1)
    {
        // Закрываем окно authregform
        this->close();

        // Открываем mainwindow
        mainwindow *mainwindow1 = new mainwindow;
        mainwindow1->show();
    }
}

void reg::on_btn_login_2_clicked()
{
    // Закрываем окно authregform
    this->close();

    authregform *authregform1 = new authregform;
    authregform1->show();
}
