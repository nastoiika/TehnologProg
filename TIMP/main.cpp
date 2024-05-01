#include <QCoreApplication> // подключение библиотек QT
#include "mytcpserver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv); //создает терминал
    MyTcpServer myserv; // переменная сервера
    return a.exec();
}
