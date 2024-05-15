#include "authregform.h"
#include "ui_authregform.h"

#include "mainwindow.h"

#include <QString>

authregform::authregform(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::authregform)
{
    ui->setupUi(this);
}

authregform::~authregform()
{
    delete ui;
}

void authregform::on_btn_auth_clicked()
{
    QString login = ui->line_login->text();
    QString password = ui->line_password->text();

    // Проверяем, что поля не пустые
    if (!login.isEmpty() && !password.isEmpty()) {
        // Закрываем окно authregform
        this->close();

        // Открываем главное окно (mainwindow)
        mainwindow *mainwindow1 = new mainwindow;
        mainwindow1->show();
    }
}

void authregform::on_btn_reg_clicked()
{
    QString login = ui->line_login->text();
    QString password = ui->line_password->text();

    // Проверяем, что поля не пустые
    if (!login.isEmpty() && !password.isEmpty()) {
        // Закрываем окно authregform
        this->close();

        // Открываем главное окно (mainwindow)
        mainwindow *mainwindow1 = new mainwindow;
        mainwindow1->show();
    }
}
