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
    if (db->reg(login, password, email)){
        return "reg+&" + login.toUtf8();
    } else{
        return "reg-";
    }
}


QByteArray stat(int Sock_Descriptor, QString login){
    database *db = database::getInstance();
    return db->stat(Sock_Descriptor, login).toUtf8();
}

QByteArray task1(int Sock_Descriptor, QString login, QString a, QString b, QString c, QString x1, QString x2, QString answer){
    database *db = database::getInstance();
    double solution_of_equation = newton(x1.toDouble(), x2.toDouble(), a.toInt(), b.toInt(), c.toInt());
    qDebug() << solution_of_equation;
    bool result = answer == QString::number(solution_of_equation);
    db->check(Sock_Descriptor, login, 1, result);
    if (result){
        return "check+";
    } else {
        return "check-";
    }
}


QByteArray task2(int Sock_Descriptor, QString login, QString answer){
    database *db = database::getInstance();
    bool result = true;
    db->check(Sock_Descriptor, login, 2, result);
    if (result){
        return "check+";
    } else {
        return "check-";
    }
}

int func_number (QString name_of_func){
    if (name_of_func == "reg") {return 1;}
    if (name_of_func == "auth") {return 2;}
    if (name_of_func == "stat") {return 3;}
    if (name_of_func == "task1") {return 4;}
    if (name_of_func == "task2") {return 5;}
    return 6;
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
        result = task1(Sock_Descriptor, data_list[1], data_list[2], data_list[3], data_list[4], data_list[5], data_list[6], data_list[7]);
        break;
    }
    case 5:{
        result = task2(Sock_Descriptor, data_list[1], data_list[2]);
        break;
    }
    case 6:{
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

