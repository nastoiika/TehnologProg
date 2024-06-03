#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class mainwindow; }
QT_END_NAMESPACE

class mainwindow : public QWidget
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = nullptr);
    ~mainwindow();
    QString login;

private slots:
    void on_btn_exit_clicked();
    void on_btn_metodN_clicked();
    void on_btn_msg_music_clicked();
    void on_btn_stat_clicked();
    void showMainWindow();

private:
    Ui::mainwindow *ui;
};

#endif // MAINWINDOW_H
