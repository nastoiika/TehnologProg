#include "mytcpserver.h"
#include "functionsforserver.h"
#include <QDebug>
#include <QCoreApplication>
#include <QString>
#include "database.h"

MyTcpServer::~MyTcpServer()
{

    mTcpServer->close();
    //server_status=0;
}

MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent){
    mTcpServer = new QTcpServer(this);

    connect(mTcpServer, &QTcpServer::newConnection,
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
        QTcpSocket *curr_mTcpSocket = mTcpServer->nextPendingConnection();
        curr_mTcpSocket->write("Hello, World!!! I am echo server!\r\n");
        connect(curr_mTcpSocket, &QTcpSocket::readyRead,this,&MyTcpServer::slotServerRead);
        connect(curr_mTcpSocket,&QTcpSocket::disconnected,this,&MyTcpServer::slotClientDisconnected);
        mTcpSockets[curr_mTcpSocket->socketDescriptor()] = curr_mTcpSocket;
   // }
}

void MyTcpServer::slotServerRead(){
    QTcpSocket *curr_mTcpSocket = qobject_cast<QTcpSocket*>(sender());

    QString res = "";
    while(curr_mTcpSocket->bytesAvailable()>0)
    {
        QByteArray array = curr_mTcpSocket->readAll();
        qDebug()<<array<<"\n";
        if(array=="\x01")
        {
            curr_mTcpSocket->write(res.toUtf8());
            res = "";
        }
        else
            res.append(array);
    }
    qDebug() << res.toUtf8();
    curr_mTcpSocket->write(parse(curr_mTcpSocket->socketDescriptor(),res));
}

void MyTcpServer::slotClientDisconnected(){
    QTcpSocket *curr_mTcpSocket = qobject_cast<QTcpSocket*>(sender());
    database *db = database::getInstance();
    db->userDisconnect(curr_mTcpSocket->socketDescriptor());
    curr_mTcpSocket->close();
    mTcpSockets.remove(mTcpServer->socketDescriptor());    
}
