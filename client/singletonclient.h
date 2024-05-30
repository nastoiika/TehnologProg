#ifndef SINGLETONCLIENT_H
#define SINGLETONCLIENT_H



#include <QObject>
#include <QTcpSocket>
#include <QtNetwork>
#include <QByteArray>
#include <QDebug>
#include <iostream>

class SingletonClient;

class SingletonDestroyer
{
private:
    SingletonClient* p_instance;
public:
    ~SingletonDestroyer() {delete p_instance;}
    void initialize (SingletonClient* p) {p_instance = p;}
};

class SingletonClient: public QObject
{
    Q_OBJECT
private:
    static SingletonClient* p_instance;
    static SingletonDestroyer destroyer;
    QTcpSocket * mTcpSocket;

protected:
    explicit SingletonClient(QObject *parent = nullptr);
    SingletonClient(SingletonClient&) = delete;
    SingletonClient& operator = (SingletonClient&) = delete;
    ~SingletonClient(){mTcpSocket->close();}
    friend class SingletonDestroyer;

public:
    static SingletonClient* getInstance();
    QString send_msg_to_server(QString query);


};

#endif // SINGLETONCLIENT_H
