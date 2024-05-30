/* #ifndef FUNCTIONSFORCLIENT_H
#define FUNCTIONSFORCLIENT_H

#include "mainwindow.h"
#include "singletonclient.h"


#include <QObject>
#include <QString>
#include "singletonclient.h"

class functionsforclient: public QObject
{
    Q_OBJECT
public:
    bool is_auth(QString login, QString password);
    bool on_reg(QString login, QString password, QString email);
    functionsforclient();
};

#endif // FUNCTIONSFORCLIENT_H
*/
#ifndef FUNCTIONSFORCLIENT_H
#define FUNCTIONSFORCLIENT_H

#include <QString>
#include <QStringList>
#include "singletonclient.h"

bool is_auth(QString login, QString password);

bool on_reg(QString login, QString password, QString email);

QStringList stat(QString login);

bool func_nuton(QString login);


#endif // FUNCTIONSFORCLIENT_H
