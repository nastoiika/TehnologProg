#include "stats.h"
#include "ui_stats.h"

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
    this->close();

    // Открываем mainwindow
    mainwindow *mainwindow1 = new mainwindow;
    mainwindow1->show();
}

void stats::on_btn_stat_clicked()
{
    QStringList res = stat(login);
    if (res[0] == "stat-")
    {
        ui->label_2->setText("Не удалось получить статистику");
    }
    else
    {
        ui->label_2->setText("Первое задание: " + res[1] + "; Второе задание: " + res[2]);
    }
}
