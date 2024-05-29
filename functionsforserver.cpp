#include "functionsforserver.h"



QByteArray auth(QString login, QString password){
    if (login == "user" && password == "123"){
        return "auth+&" + login.toUtf8();
    } else{
        return "auth-";
    }
}

QByteArray reg(QString login, QString password, QString email){
    if (login == "user" && password == "123"){
        return "reg+" + login.toUtf8();
    } else{
        return "reg-";
    }
}


QByteArray stat(QString login){
    return "stat&0&3&";
}

QByteArray check(QString task_number, QString variant, QString answer){
    return "check+";
}

int func_number (QString name_of_func){
    if (name_of_func == "reg") {return 1;}
    if (name_of_func == "auth") {return 2;}
    if (name_of_func == "stat") {return 3;}
    if (name_of_func == "check") {return 4;}
    return 5;
}



QByteArray parse(QString data_from_user){
    QByteArray result;
    QStringList data_list = data_from_user.split('&');
    int number_of_func = func_number(data_list[0]);
    switch (number_of_func) {
    case 1:{
        result = reg(data_list[1], data_list[2], data_list[3]);
        break;
    }
    case 2:{
        result = auth(data_list[1], data_list[2]);
        break;
    }
    case 3:{
        result = stat(data_list[1]);
        break;
    }
    case 4:{
        result = check(data_list[1], data_list[2], data_list[3]);
        break;
    }
    case 5:{
        result = "incorrect command";
        break;
    }
    }
    return result;
}
