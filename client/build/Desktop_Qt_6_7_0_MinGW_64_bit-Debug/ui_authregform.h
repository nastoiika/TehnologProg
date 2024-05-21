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
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_login;
    QPushButton *btn_registr;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *line_login;
    QLabel *label_2;
    QLineEdit *line_email;
    QLabel *label_3;
    QLineEdit *line_password;
    QLabel *label_4;
    QLineEdit *line_confirm;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_auth;
    QPushButton *btn_reg;

    void setupUi(QWidget *authregform)
    {
        if (authregform->objectName().isEmpty())
            authregform->setObjectName("authregform");
        authregform->resize(465, 273);
        authregform->setMaximumSize(QSize(16777215, 1000));
        authregform->setStyleSheet(QString::fromUtf8("background-color: rgb(40,49,59);"));
        verticalLayout_3 = new QVBoxLayout(authregform);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        btn_login = new QPushButton(authregform);
        btn_login->setObjectName("btn_login");
        btn_login->setAutoFillBackground(false);
        btn_login->setStyleSheet(QString::fromUtf8("border: none; \n"
"border-bottom: 3px solid rgb(97, 190, 46); \n"
"color: rgb(220, 220, 220);\n"
""));

        horizontalLayout_2->addWidget(btn_login);

        btn_registr = new QPushButton(authregform);
        btn_registr->setObjectName("btn_registr");
        btn_registr->setStyleSheet(QString::fromUtf8("border: none; \n"
"color: rgb(220, 220, 220);"));

        horizontalLayout_2->addWidget(btn_registr);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(7);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
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

        line_email = new QLineEdit(authregform);
        line_email->setObjectName("line_email");
        line_email->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));

        verticalLayout->addWidget(line_email);

        label_3 = new QLabel(authregform);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));

        verticalLayout->addWidget(label_3);

        line_password = new QLineEdit(authregform);
        line_password->setObjectName("line_password");
        line_password->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));
        line_password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(line_password);

        label_4 = new QLabel(authregform);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));

        verticalLayout->addWidget(label_4);

        line_confirm = new QLineEdit(authregform);
        line_confirm->setObjectName("line_confirm");
        line_confirm->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));
        line_confirm->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(line_confirm);


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
        btn_reg->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);\n"
"color: rgb(40,49,59);"));

        horizontalLayout->addWidget(btn_reg);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(authregform);

        QMetaObject::connectSlotsByName(authregform);
    } // setupUi

    void retranslateUi(QWidget *authregform)
    {
        authregform->setWindowTitle(QCoreApplication::translate("authregform", "Form", nullptr));
        btn_login->setText(QCoreApplication::translate("authregform", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        btn_registr->setText(QCoreApplication::translate("authregform", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("authregform", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label_2->setText(QCoreApplication::translate("authregform", "\320\255\320\273. \320\277\320\276\321\207\321\202\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("authregform", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        label_4->setText(QCoreApplication::translate("authregform", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265:", nullptr));
        btn_auth->setText(QCoreApplication::translate("authregform", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        btn_reg->setText(QCoreApplication::translate("authregform", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class authregform: public Ui_authregform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHREGFORM_H
