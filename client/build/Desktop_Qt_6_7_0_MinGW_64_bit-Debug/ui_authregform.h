/********************************************************************************
** Form generated from reading UI file 'authregform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHREGFORM_H
#define UI_AUTHREGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_authregform
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *line_login;
    QLabel *label_2;
    QLineEdit *line_password;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_auth;
    QPushButton *btn_reg;

    void setupUi(QWidget *authregform)
    {
        if (authregform->objectName().isEmpty())
            authregform->setObjectName("authregform");
        authregform->resize(400, 300);
        authregform->setStyleSheet(QString::fromUtf8("background-color: rgb(40,49,59);"));
        verticalLayout_3 = new QVBoxLayout(authregform);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(authregform);
        label_3->setObjectName("label_3");
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(authregform);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));

        verticalLayout->addWidget(label);

        line_login = new QLineEdit(authregform);
        line_login->setObjectName("line_login");
        line_login->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));
        line_login->setMaxLength(1000);
        line_login->setFrame(true);

        verticalLayout->addWidget(line_login);

        label_2 = new QLabel(authregform);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));

        verticalLayout->addWidget(label_2);

        line_password = new QLineEdit(authregform);
        line_password->setObjectName("line_password");
        line_password->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));
        line_password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(line_password);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_auth = new QPushButton(authregform);
        btn_auth->setObjectName("btn_auth");
        btn_auth->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);\n"
"color: rgb(40,49,59);"));

        horizontalLayout->addWidget(btn_auth);

        btn_reg = new QPushButton(authregform);
        btn_reg->setObjectName("btn_reg");
        btn_reg->setStyleSheet(QString::fromUtf8("color: rgb(40,49,59);\n"
"background-color: rgb(117,174,93);"));

        horizontalLayout->addWidget(btn_reg);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(authregform);

        QMetaObject::connectSlotsByName(authregform);
    } // setupUi

    void retranslateUi(QWidget *authregform)
    {
        authregform->setWindowTitle(QCoreApplication::translate("authregform", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("authregform", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("authregform", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label_2->setText(QCoreApplication::translate("authregform", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        btn_auth->setText(QCoreApplication::translate("authregform", "\320\222\321\205\320\276\320\264", nullptr));
        btn_reg->setText(QCoreApplication::translate("authregform", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class authregform: public Ui_authregform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHREGFORM_H
