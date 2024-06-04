#include "mytcpserver.h"
#include "functionsforserver.h"
#include <QDebug>
#include <QCoreApplication>
#include <QString>
#include <string>

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
    Des d1;
    QStringList parts = res.split('&');
    res = QString::fromStdString(d1.decrypt(parts[0].toStdString(), parts[1].toStdString()));
    qDebug() << res;
    string key = d1.generateRandomString();
    curr_mTcpSocket->write((QString::fromStdString(d1.encrypt((parse(curr_mTcpSocket->socketDescriptor(), res)).toStdString(), key)) + "&" + QString::fromStdString(key)).toUtf8());
}

void MyTcpServer::slotClientDisconnected(){
    QTcpSocket *curr_mTcpSocket = qobject_cast<QTcpSocket*>(sender());
    int sock_Descr = mTcpSockets.key(curr_mTcpSocket);
    user_disconnect(sock_Descr);
    curr_mTcpSocket->close();
    mTcpSockets.remove(mTcpServer->socketDescriptor());
}
