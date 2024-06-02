#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "authregform.h"

#include "metod_nuton.h"
#include "music_file.h"
#include "stats.h"

mainwindow::mainwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mainwindow)
{
    ui->setupUi(this);
}

mainwindow::~mainwindow()
{
    delete ui;
}

void mainwindow::on_btn_exit_clicked()
{
    this->close();

    // Открываем authregform
    authregform *authregform1 = new authregform;
    authregform1->show();
}

void mainwindow::on_btn_metodN_clicked()
{
    this->close();

    // Открываем metod_nuton
    metod_nuton *metod_nuton1 = new metod_nuton;
    metod_nuton1->show();
}

void mainwindow::on_btn_msg_music_clicked()
{
    this->close();

    // Открываем music_file
    music_file *music_file1 = new music_file;
    music_file1->show();
}

void mainwindow::on_btn_stat_clicked()
{
    this->close();

    // Открываем stats
    stats *stats1 = new stats;
    stats1->login = login;
    stats1->show();
}
