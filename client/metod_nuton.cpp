#include "metod_nuton.h"
#include "ui_metod_nuton.h"

#include "mainwindow.h"

metod_nuton::metod_nuton(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::metod_nuton)
{
    ui->setupUi(this);
}

metod_nuton::~metod_nuton()
{
    delete ui;
}

void metod_nuton::on_btn_back_clicked()
{
    this->close();

    // Открываем mainwindow
    mainwindow *mainwindow1 = new mainwindow;
    mainwindow1->show();
}
