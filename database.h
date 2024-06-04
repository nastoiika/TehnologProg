#ifndef DATABASE_H
#define DATABASE_H

#include <QCoreApplication>
#include <QByteArray>
#include <QString>

#include <QDebug>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QVariant>

#include"sha1.h"

class database;

class databaseDestroyer
{
private:
    database *p_instance;
public:
    ~databaseDestroyer() { delete p_instance; }
    void initialize(database *p) { p_instance = p; }
};

class database
{
private:
    static database *p_instance;
    static databaseDestroyer destroyer;
    QSqlDatabase db;
protected:
    database();
    database(const database &) = delete;
    database &operator=(const database &) = delete;
    ~database() { db.close(); }
    friend class databaseDestroyer;
public:
    static database *getInstance();
    bool reg(QString log, QString pass, QString email);
    bool auth(int sockDescr, QString log, QString pass);
    QString stat(int socketDescr, QString log);
    void check(int socketDescr, QString login, int task_number, bool result);
    bool userDisconnect(int sockDescr);
};


#endif // DATABASE_H
