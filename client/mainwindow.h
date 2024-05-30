#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "metod_nuton.h"
#include "music_file.h"
#include "stats.h"

namespace Ui {
class mainwindow;
}

class mainwindow : public QWidget
{
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);
    ~mainwindow();

private slots:
    void on_btn_exit_clicked();
    void on_btn_metodN_clicked();
    void on_btn_msg_music_clicked();
    void on_btn_stat_clicked();

private:
    Ui::mainwindow *ui;
};

#endif // MAINWINDOW_H
