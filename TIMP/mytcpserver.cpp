#include "mytcpserver.h"
#include <QDebug>
#include <QCoreApplication>
#include<QString>

MyTcpServer::~MyTcpServer()
{

    mTcpServer->close(); //если мы заканчиваем работу то сервер закрывается
    //server_status=0;
}

MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent){
    mTcpServer = new QTcpServer(this); //выделяем память под сервер

    connect(mTcpServer, &QTcpServer::newConnection, //миханизм сигналов слотов
            this, &MyTcpServer::slotNewConnection);

    if(!mTcpServer->listen(QHostAddress::Any, 33333)){
        qDebug() << "server is not started";
    } else {
        //server_status=1;
        qDebug() << "server is started";
    }
}

void MyTcpServer::slotNewConnection(){
 //   if(server_status==1){
        mTcpSocket = mTcpServer->nextPendingConnection();
        Sockets.push_back(mTcpSocket);
        mTcpSocket->write("Hello, World!!! I am echo server!\r\n");
        connect(mTcpSocket, &QTcpSocket::readyRead,this,&MyTcpServer::slotServerRead);
        connect(mTcpSocket,&QTcpSocket::disconnected,this,&MyTcpServer::slotClientDisconnected);
   // }
}

void MyTcpServer::slotServerRead(){
    QString res = "";
    for (QTcpSocket *socket : Sockets) {
        if (socket->bytesAvailable() > 0) {
            QByteArray array = socket->readAll();
            qDebug() << array << "\n";
            if (array == "123\r\n") {
                socket->write("Correctly\r\n");
            } else {
                socket->write("Error\r\n");
            }
            if (array == "\x01") {
                // Handle end of message here
                socket->write(res.toUtf8());
                res = "";
            } else {
                res.append(array);
            }
        }
    }
}

void MyTcpServer::slotClientDisconnected(){
    QTcpSocket *disconnectedSocket = qobject_cast<QTcpSocket*>(sender());
    if (!disconnectedSocket)
        return;

    disconnectedSocket->close();
    Sockets.removeOne(disconnectedSocket);
}
