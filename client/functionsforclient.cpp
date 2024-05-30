#include "functionsforclient.h"


// functionsforclient::functionsforclient() {}

bool is_auth(QString login, QString password)
{
    QString res = SingletonClient::getInstance()->send_msg_to_server("auth&" + login + "&" + password + "\r\n");
    qDebug() << res;
    if (res == "auth+"+ login)
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
    QString res = SingletonClient::getInstance()->send_msg_to_server("reg&" + login + "&" + password + "&" + email + "\r\n");
    qDebug() << res;
    if (res == "reg+")
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
    QString res = SingletonClient::getInstance()->send_msg_to_server("stat&" + login + "\r\n");
    qDebug() << res;
    QStringList parts = res.split('&');

    return parts;

}

bool func_nuton(QString login)
{
    QString res = SingletonClient::getInstance()->send_msg_to_server("task1&" + login + "\r\n");
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


