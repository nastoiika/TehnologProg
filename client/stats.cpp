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
