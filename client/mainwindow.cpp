#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "authregform.h"
#include "metod_nuton.h"
#include "music_file.h"
#include "stats.h"
#include <QDebug>

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
    this->hide();

    // Открываем metod_nuton и передаем login
    metod_nuton *metod_nuton1 = new metod_nuton;
    connect(metod_nuton1, &metod_nuton::backToMainWindow, this, &mainwindow::showMainWindow);
    metod_nuton1->show();
}

void mainwindow::on_btn_msg_music_clicked()
{
    this->hide();

    // Открываем music_file
    music_file *music_file1 = new music_file;
    connect(music_file1, &music_file::backToMainWindow, this, &mainwindow::showMainWindow);
    music_file1->show();
}

void mainwindow::on_btn_stat_clicked()
{
    this->hide();

    // Открываем stats и передаем login
    stats *stats1 = new stats;
    stats1->setLogin(login); // Передача логина
    connect(stats1, &stats::backToMainWindow, this, &mainwindow::showMainWindow);
    stats1->show();
}

void mainwindow::showMainWindow()
{
    this->show();
}
