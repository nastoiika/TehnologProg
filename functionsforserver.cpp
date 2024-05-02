#include "functionsforserver.h"



QByteArray auth(QString login, QString password){
    if (login == "user" && password == "123"){
        return "авторизация прошла успешно!\r\n";
    } else{
        return "неверный логин или пароль\r\n";
    }
}

QByteArray reg(QString login, QString password){
    if (login == "user" && password == "123"){
        return "регистрация прошла успешно!\r\n";
    } else{
        return "неверный логин или пароль\r\n";
    }
}


QByteArray parse(QString data_from_user){
    QByteArray result;
    QString login = "user";
    QString password = "123";
    if (data_from_user == "auth&user&123\r\n"){
        result = auth(login, password);
    } else if (data_from_user == "reg&user&123\r\n"){
        result = reg(login, password);
    } else{
        result = "нераспознанная команда, повторите попытку\r\n";
    }
    return result;
}
