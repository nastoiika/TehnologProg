#ifndef FUNCTIONSFORCLIENT_H
#define FUNCTIONSFORCLIENT_H

#include "mainwindow.h"
#include "authregform.h"

#include <QObject>

class functionsforclient: public QObject
{
    Q_OBJECT
public:
    static void is_auth();
    static void on_reg();
    functionsforclient();

signals:
         //void on_auth_ok();
private:
    static mainwindow *mainForm;
    static authregform * authregForm;
};

#endif // FUNCTIONSFORCLIENT_H
