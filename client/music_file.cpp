#include "music_file.h"
#include "ui_music_file.h"

#include "mainwindow.h"

#include <QFileDialog>
#include <QDebug>
#include <QString>

music_file::music_file(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::music_file)
{
    ui->setupUi(this);
}

music_file::~music_file()
{
    delete ui;
}

void music_file::on_btn_back_clicked()
{
    this->close();

    // Открываем mainwindow
    mainwindow *mainwindow1 = new mainwindow;
    mainwindow1->show();
}

void music_file::on_btn_choose_music_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Music File"), "", tr("Music Files (*.mp3 *.wav *.ogg)"));

    if (!fileName.isEmpty()) {
        qDebug() << "Selected file:" << fileName;

    } else {
        qDebug() << "No file selected";
    }
}
