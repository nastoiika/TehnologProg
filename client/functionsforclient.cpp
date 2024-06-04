#include "functionsforclient.h"


// functionsforclient::functionsforclient() {}

bool is_auth(QString login, QString password)
{
    QString res = SingletonClient::getInstance()->send_msg_to_server("auth&" + login + "&" + password);
    qDebug() << res;
    if (res == "auth+&" + login)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool on_reg(QString login, QString password, QString email)
{
    QString res = SingletonClient::getInstance()->send_msg_to_server("reg&" + login + "&" + password + "&" + email);
    qDebug() << res;
    if (res == "reg+&" + login)
    {
        return true;
    }
    else
    {
        return false;
    }
}

QStringList stat(QString login)
{
    QString res = SingletonClient::getInstance()->send_msg_to_server("stat&" + login);
    qDebug() << res;
    QStringList parts = res.split('&');

    return parts;

}

bool func_nuton(QString login, QString answer, int a, int b, int c, double x1, double x2)
{
    QString res = SingletonClient::getInstance()->send_msg_to_server("task1&" + login + "&" + QString::number(a) + "&" \
                                                                + QString::number(b) + "&" + QString::number(c) + "&" + QString::number(x1) + \
                                                                "&" + QString::number(x2) + "&" + answer);
    qDebug() << res;
    if (res == "task-")
    {
        return false;
    }
    else
    {
        return true;
    }
}



