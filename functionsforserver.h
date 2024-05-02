#ifndef FUNCTIONSFORSERVER_H
#define FUNCTIONSFORSERVER_H

#include <QByteArray>
#include <QDebug>
#include <QString>


QByteArray auth(QString login, QString password);

QByteArray reg(QString login, QString password);

QByteArray parse(QString data_from_user);


#endif // FUNCTIONSFORSERVER_H
