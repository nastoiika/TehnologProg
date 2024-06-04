#include <QtTest>
#include "../client/des.h"
// add necessary includes here

class FuncForServer_Test : public QObject
{
    Q_OBJECT

public:
    FuncForServer_Test();
    ~FuncForServer_Test();

private slots:
    void test_case_des();

};

FuncForServer_Test::FuncForServer_Test()
{

}

FuncForServer_Test::~FuncForServer_Test()
{

}

void FuncForServer_Test::test_case_des()
{
    Des d1;
    string key = d1.generateRandomString();
    string text = "heloo?";
    string cipher_text = d1.encrypt(text, key);
    string decrypted_text = d1.decrypt(cipher_text, key);

    QVERIFY2(text == decrypted_text, "text != decrypted_text, с рандомным ключом.");

    key = "keyOFkey";
    cipher_text = d1.encrypt("Its me, right?", key);
    QVERIFY2(cipher_text == "11010110101010001011111011100111110001101100010110100110110100000000000111101100110010110000111110100010110101000000101100111101", "cipher_text неверный, с  ключом keyOFkey.");


}

QTEST_APPLESS_MAIN(FuncForServer_Test)

#include "tst_funcforserver_test.moc"
