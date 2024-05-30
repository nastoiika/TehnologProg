#ifndef FUNCTIONSFORSERVER_H
#define FUNCTIONSFORSERVER_H

#include <QByteArray>
#include <QDebug>
#include <QString>
#include <QStringList>
#include "database.h"

QByteArray auth(int Sock_Descriptor, QString login, QString password);

QByteArray reg(int Sock_Descriptor, QString login, QString password, QString email);

QByteArray stat(int Sock_Descriptor, QString login);

QByteArray check(int Sock_Descriptor, QString task_number, QString variant, QString answer);

QByteArray parse(int Sock_Descriptor, QString data_from_user);

bool user_disconnect(int Sock_Descriptor);

#endif // FUNCTIONSFORSERVER_H
