#include "stats.h"
#include "ui_stats.h"

#include <QDebug>

#include "mainwindow.h"

stats::stats(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::stats)
{
    ui->setupUi(this);
}

stats::~stats()
{
    delete ui;
}

void stats::on_btn_back_clicked()
{
    emit backToMainWindow();
    this->close();
}

void stats::setLogin(const QString &login)
{
    this->login = login;
}

void stats::on_btn_stat_clicked()
{
    QStringList res = stat(login);
    qDebug() << login; // Правильное использование qDebug()
    if (res[0] == "stat-")
    {
        ui->label_2->setText("Не удалось получить статистику");
    }
    else
    {
        ui->label_2->setText("Первое задание: " + res[1] + "; Второе задание: " + res[2]);
    }
}
