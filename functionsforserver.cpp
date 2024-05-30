#include "functionsforserver.h"



QByteArray auth(int Sock_Descriptor, QString login, QString password){
    database *db = database::getInstance();
    if(db->auth(Sock_Descriptor, login, password)){
        return "auth+&" + login.toUtf8();
    } else {
        return "auth-";
    }
}

QByteArray reg(int Sock_Descriptor, QString login, QString password, QString email){
    database *db = database::getInstance();
    if (db->reg(Sock_Descriptor, login, password, email)){
        return "reg+&" + login.toUtf8();
    } else{
        return "reg-";
    }
}


QByteArray stat(int Sock_Descriptor, QString login){
    database *db = database::getInstance();
    return db->stat(Sock_Descriptor, login).toUtf8();
}

QByteArray check(int Sock_Descriptor, QString task_number, QString variant, QString answer){
    database *db = database::getInstance();
    if (db->check(Sock_Descriptor, task_number, variant, answer)){
        return "check+";
    }
    return "check-";
}


int func_number (QString name_of_func){
    if (name_of_func == "reg") {return 1;}
    if (name_of_func == "auth") {return 2;}
    if (name_of_func == "stat") {return 3;}
    if (name_of_func == "check") {return 4;}
    return 5;
}


QByteArray parse(int Sock_Descriptor, QString data_from_user){
    qDebug() << Sock_Descriptor;
    QByteArray result;
    QStringList data_list = data_from_user.split('&');
    int number_of_func = func_number(data_list[0]);
    switch (number_of_func) {
    case 1:{
        result = reg(Sock_Descriptor, data_list[1], data_list[2], data_list[3]);
        break;
    }
    case 2:{
        result = auth(Sock_Descriptor, data_list[1], data_list[2]);
        break;
    }
    case 3:{
        result = stat(Sock_Descriptor, data_list[1]);
        break;
    }
    case 4:{
        result = check(Sock_Descriptor, data_list[1], data_list[2], data_list[3]);
        break;
    }
    case 5:{
        result = "incorrect command";
        break;
    }
    }
    return result;
}

bool user_disconnect(int Sock_Descriptor){
    qDebug() << Sock_Descriptor;
    return database::getInstance()->userDisconnect(Sock_Descriptor);
}

