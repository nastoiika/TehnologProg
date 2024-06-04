#include "database.h"
#include "QDebug"
/*
CREATE TABLE user(
id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
username VARCHAR(20) NOT NULL UNIQUE,
password VARCHAR(100) NOT NULL,
email VARCHAR(256) NOT NULL UNIQUE,
stat1 INTEGER NOT NULL,
stat2 INTEGER NOT NULL,
id_connection INTEGER NOT NULL);
*/

database *database::p_instance = nullptr;
databaseDestroyer database::destroyer;


database::database() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\\Users\\artem\\WorkDir\\TIMP\\TehnologProg\\sqlite.db");
    if (!db.open()) {
        qDebug() << "Error opening database: " << db.lastError().text();
    }
}

database* database::getInstance() {
    if (!p_instance) {
        p_instance = new database();
        destroyer.initialize(p_instance);
    }
    return p_instance;
}



bool database::userDisconnect(int socketDescr) {
    QSqlQuery query(db);
    query.prepare("UPDATE user SET id_connection = 0 WHERE id_connection = :sockDesc");
    query.bindValue(":sockDesc", socketDescr);
    return query.exec();
}



bool database::reg(QString login, QString password, QString email) {
    QSqlQuery query(db);
    std::string hash_pass = sha1(password.toStdString());
    qDebug() << hash_pass;
    query.prepare("INSERT INTO user (username, password, email, stat1, stat2, id_connection)"
                  "VALUES (:log, :pass, :mail, 0, 0, 0)");

    query.bindValue(":log", login);
    query.bindValue(":pass", QString::fromStdString(hash_pass));
    query.bindValue(":mail", email);
    if (query.exec()){ // если удалось выполнить запрос
        return true;
    }
    return false;
}

bool database::auth(int socketDescr, QString login, QString password) {
    QSqlQuery query(db);
    //проверяем что пользователь есть и не в сети
    query.prepare("SELECT * FROM user WHERE username = :login AND id_connection = 0");
    query.bindValue(":login", login);
    query.exec();
    QSqlRecord rec = query.record();
    if(query.next()){ // если нашлась такая запись
        // проверяем пароль
        std::string hash_pass = sha1(password.toStdString());
        const int passwordIndex = rec.indexOf("password");
        QString pass = query.value(passwordIndex).toString();
        qDebug() << pass;
        // если пароли совпали
        if (pass == QString::fromStdString(hash_pass)) {
            QSqlQuery query1(db);
            query1.prepare("UPDATE user SET id_connection = :sockDesc WHERE username = :log");
            query1.bindValue(":sockDesc", socketDescr);
            query1.bindValue(":log", login);
            query1.exec();
            return true;
        }
    }
    return false;
}


QString database::stat(int socketDescr, QString login) {
    QSqlQuery query(db);
    query.prepare("SELECT stat1, stat2 FROM user WHERE username = :login AND id_connection = :sockDesc");
    query.bindValue(":login", login);
    query.bindValue(":sockDesc", socketDescr);
    query.exec();
    QSqlRecord rec = query.record();
    const int stat1Index = rec.indexOf("stat1");//номер "столбца"
    const int stat2Index = rec.indexOf("stat2");
    if(query.next()){
        QString res = "stat&";
        res += query.value(stat1Index).toString();
        res += "&";
        res += query.value(stat2Index).toString();
        return res;
    }
    return "stat-";
}


void database::check(int socketDescr, QString login, int task_number, bool result){
     QSqlQuery query(db);
    switch (task_number){
     case 1:{
        if (result){
             query.prepare("UPDATE user SET stat1 = stat1 + 1 WHERE username = :login AND id_connection = :sockDesc");
             query.bindValue(":login", login);
             query.bindValue(":sockDesc", socketDescr);
             query.exec();
        }
        else {
            query.prepare("UPDATE user SET stat1 = stat1 - 1 WHERE username = :login AND id_connection = :sockDesc");
            query.bindValue(":login", login);
            query.bindValue(":sockDesc", socketDescr);
            query.exec();
        }
        break;
     }
     case 2:{
         if (result){
             query.prepare("UPDATE user SET stat2 = stat2 + 1 WHERE username = :login AND id_connection = :sockDesc");
             query.bindValue(":login", login);
             query.bindValue(":sockDesc", socketDescr);
             query.exec();
         }
         else {
             query.prepare("UPDATE user SET stat2 = stat2 - 1 WHERE username = :login AND id_connection = :sockDesc");
             query.bindValue(":login", login);
             query.bindValue(":sockDesc", socketDescr);
             query.exec();
         }
         break;
     }
    }
}
