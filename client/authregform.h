#ifndef AUTHREGFORM_H
#define AUTHREGFORM_H

#include <QWidget>
#include <QString>
#include "functionsforclient.h"

namespace Ui {
class authregform;
}

class authregform : public QWidget
{
    Q_OBJECT

public:
    explicit authregform(QWidget *parent = nullptr);
    ~authregform();
    QString login;
    QString getLogin() const;

private slots:
    void on_btn_auth_clicked();
    void on_btn_registr_clicked();
    void on_btn_login_clicked();
    void on_btn_reg_clicked();

private:
    Ui::authregform *ui;
};

#endif // AUTHREGFORM_H