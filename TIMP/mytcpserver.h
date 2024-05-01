#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H
#include <QObject> // миханизм сигналов и слотов
#include <QTcpServer>
#include <QTcpSocket>

#include <QtNetwork>
#include <QByteArray>
#include <QDebug>

#include <QVector>

class MyTcpServer : public QObject //для взаимодействия сигналов и слотов
{
    Q_OBJECT //для коректной работы
public:
    explicit MyTcpServer(QObject *parent = nullptr); // инициализирующий конструктор со знач.род. объекта по умолчанию пустым
    ~MyTcpServer(); //деструктор
public slots:
    void slotNewConnection();
    void slotClientDisconnected();
    void slotServerRead();
private:
    QVector <QTcpSocket*> Sockets;
    QTcpServer * mTcpServer;
    QTcpSocket * mTcpSocket;
    //int server_status;
};
#endif // MYTCPSERVER_H







