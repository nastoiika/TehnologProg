#include "singletonclient.h"

SingletonClient* SingletonClient::p_instance = nullptr;
SingletonDestroyer SingletonClient::destroyer;

SingletonClient::SingletonClient(QObject* parent) : QObject(parent)
{
    mTcpSocket = new QTcpSocket(this);
    mTcpSocket->connectToHost("127.0.0.1", 33333);

    connect(mTcpSocket, SIGNAL(readyRead()),
            this, SLOT(slotServerRead()));
}


SingletonClient* SingletonClient::getInstance()
{
    if (!p_instance)
    {
        p_instance = new SingletonClient();
        destroyer.initialize(p_instance);
    }
    return p_instance;
}

QString SingletonClient::send_msg_to_server(QString query)
{
    Des d1;
    std::string key = d1.generateRandomString();
    query = QString::fromStdString(d1.encrypt(query.toStdString(), key));

    // Преобразование объединённой строки в QByteArray
    QByteArray dataToSend = query.toUtf8() + "&" + QString::fromStdString(key).toUtf8();
    mTcpSocket->write(dataToSend);

    mTcpSocket->waitForReadyRead();
    QString msg = "";
    while (mTcpSocket->bytesAvailable() > 0)
    {
        QByteArray array = mTcpSocket->readAll();
        msg.append(array);
    }

    QStringList parts = msg.split('&');
    if (parts.size() < 2) {
        qWarning() << "Invalid response format. Expected at least two parts separated by '&'.";
        return "";
    }

    msg = QString::fromStdString(d1.decrypt(parts[0].toStdString(), parts[1].toStdString()));
    return msg;
}


