/********************************************************************************
** Form generated from reading UI file 'reg.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REG_H
#define UI_REG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reg
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_login_2;
    QPushButton *btn_registr;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label1;
    QLineEdit *line_login_2;
    QLabel *label2;
    QLineEdit *line_email;
    QLabel *label3;
    QLineEdit *line_password_2;
    QLabel *label4;
    QLineEdit *line_confirm_pass;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_reg;

    void setupUi(QWidget *reg)
    {
        if (reg->objectName().isEmpty())
            reg->setObjectName("reg");
        reg->resize(400, 300);
        reg->setStyleSheet(QString::fromUtf8("background-color: rgb(40,49,59);"));
        verticalLayout_5 = new QVBoxLayout(reg);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(7);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        btn_login_2 = new QPushButton(reg);
        btn_login_2->setObjectName("btn_login_2");
        btn_login_2->setAutoFillBackground(false);
        btn_login_2->setStyleSheet(QString::fromUtf8("border: none; \n"
"color: rgb(220, 220, 220);"));

        horizontalLayout_3->addWidget(btn_login_2);

        btn_registr = new QPushButton(reg);
        btn_registr->setObjectName("btn_registr");
        btn_registr->setStyleSheet(QString::fromUtf8("\n"
"border: none; \n"
"border-bottom: 3px solid rgb(97, 190, 46); \n"
"color: rgb(220, 220, 220);\n"
""));

        horizontalLayout_3->addWidget(btn_registr);


        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(7);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        label1 = new QLabel(reg);
        label1->setObjectName("label1");
        label1->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));

        verticalLayout_4->addWidget(label1);

        line_login_2 = new QLineEdit(reg);
        line_login_2->setObjectName("line_login_2");
        line_login_2->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));
        line_login_2->setMaxLength(1000);
        line_login_2->setFrame(true);

        verticalLayout_4->addWidget(line_login_2);

        label2 = new QLabel(reg);
        label2->setObjectName("label2");
        label2->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));

        verticalLayout_4->addWidget(label2);

        line_email = new QLineEdit(reg);
        line_email->setObjectName("line_email");
        line_email->setMaxLength(32768);

        verticalLayout_4->addWidget(line_email);

        label3 = new QLabel(reg);
        label3->setObjectName("label3");
        label3->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));

        verticalLayout_4->addWidget(label3);

        line_password_2 = new QLineEdit(reg);
        line_password_2->setObjectName("line_password_2");
        line_password_2->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));
        line_password_2->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(line_password_2);

        label4 = new QLabel(reg);
        label4->setObjectName("label4");
        label4->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));

        verticalLayout_4->addWidget(label4);

        line_confirm_pass = new QLineEdit(reg);
        line_confirm_pass->setObjectName("line_confirm_pass");
        line_confirm_pass->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(line_confirm_pass);


        verticalLayout_3->addLayout(verticalLayout_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        btn_reg = new QPushButton(reg);
        btn_reg->setObjectName("btn_reg");
        btn_reg->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);\n"
"color: rgb(40,49,59);"));

        horizontalLayout_4->addWidget(btn_reg);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_5->addLayout(verticalLayout_3);


        retranslateUi(reg);

        QMetaObject::connectSlotsByName(reg);
    } // setupUi

    void retranslateUi(QWidget *reg)
    {
        reg->setWindowTitle(QCoreApplication::translate("reg", "Form", nullptr));
        btn_login_2->setText(QCoreApplication::translate("reg", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        btn_registr->setText(QCoreApplication::translate("reg", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label1->setText(QCoreApplication::translate("reg", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label2->setText(QCoreApplication::translate("reg", "\320\255\320\273. \320\277\320\276\321\207\321\202\320\260:", nullptr));
        label3->setText(QCoreApplication::translate("reg", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        label4->setText(QCoreApplication::translate("reg", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265:", nullptr));
        btn_reg->setText(QCoreApplication::translate("reg", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reg: public Ui_reg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REG_H
