#include "authregform.h"
#include "ui_authregform.h"

#include "mainwindow.h"

#include <QString>

authregform::authregform(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::authregform)
{
    ui->setupUi(this);
    ui->label_2->setVisible(false);
    ui->line_email->setVisible(false);
    ui->label_4->setVisible(false);
    ui->line_confirm->setVisible(false);
    ui->btn_reg->setVisible(false);
}


authregform::~authregform()
{
    delete ui;
}

void authregform::on_btn_auth_clicked()
{
    login = ui->line_login->text();
    QString password = ui->line_password->text();

    // Проверяем, что поля не пустые
    if (!login.isEmpty() && !password.isEmpty() && is_auth(login, password))
    {

        // Закрываем окно authregform
        this->close();

        // Открываем mainwindow
        mainwindow *mainwindow1 = new mainwindow;
        mainwindow1->show();
    }
    else
    {
        qDebug() << "Ошибка";
    }
}

void authregform::on_btn_reg_clicked()
{
    QString login = ui->line_login->text();
    QString password = ui->line_password->text();
    QString email = ui->line_email->text();
    QString confirm = ui->line_confirm->text();

    // Проверяем, что поля не пустые
    if (!login.isEmpty() && !password.isEmpty() && !email.isEmpty() && !confirm.isEmpty() && confirm == password && on_reg(login, password, email))
    {
        emit on_btn_login_clicked();
    }
    else
    {
        qDebug() << "Ошибка";
    }
}

void authregform::on_btn_login_clicked()
{
    ui->label_2->setVisible(false);
    ui->line_email->setVisible(false);
    ui->label_4->setVisible(false);
    ui->line_confirm->setVisible(false);
    ui->btn_reg->setVisible(false);
    ui->btn_auth->setVisible(true);

    // Изменение нижней границы кнопки btn_login
    QString style = "QPushButton { border: none; border-bottom: 3px solid rgb(97, 190, 46); color: rgb(220, 220, 220);}";
    ui->btn_login->setStyleSheet(style);

    // Изменение нижней границы кнопки btn_registr
    style = "QPushButton { border: none; color: rgb(220, 220, 220);}";
    ui->btn_registr->setStyleSheet(style);

}

void authregform::on_btn_registr_clicked()
{

    ui->label_2->setVisible(true);
    ui->line_email->setVisible(true);
    ui->label_4->setVisible(true);
    ui->line_confirm->setVisible(true);
    ui->btn_reg->setVisible(true);
    ui->btn_auth->setVisible(false);

    // Изменение нижней границы кнопки btn_registr
    QString style = "QPushButton { border: none; border-bottom: 3px solid rgb(97, 190, 46); color: rgb(220, 220, 220);}";
    ui->btn_registr->setStyleSheet(style);

    // Изменение нижней границы кнопки btn_login
    style = "QPushButton { border: none; color: rgb(220, 220, 220);}";
    ui->btn_login->setStyleSheet(style);


}
