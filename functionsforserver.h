#ifndef FUNCTIONSFORSERVER_H
#define FUNCTIONSFORSERVER_H

#include <QByteArray>
#include <QDebug>
#include <QString>
#include <QStringList>

QByteArray auth(QString login, QString password);

QByteArray reg(QString login, QString password, QString email);

QByteArray stat(QString login);

QByteArray check(QString task_number, QString variant, QString answer);

QByteArray parse(QString data_from_user);


#endif // FUNCTIONSFORSERVER_H
