#ifndef STATS_H
#define STATS_H

#include <QWidget>
#include <QStringList>
#include "functionsforclient.h"
#include "authregform.h"
#include <QDebug>
#include "mainwindow.h"

namespace Ui {
class stats;
}

class stats : public QWidget
{
    Q_OBJECT

public:
    explicit stats(QWidget *parent = nullptr);
    ~stats();
    QString login;
    void setLogin(const QString &login);

private slots:
    void on_btn_back_clicked();
    void on_btn_stat_clicked();

signals:
    void backToMainWindow();

private:
    Ui::stats *ui;
};

#endif // STATS_H
