// #include "mainwindow.h"
#include "authregform.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    authregform w;
    w.show();
    return a.exec();
}
