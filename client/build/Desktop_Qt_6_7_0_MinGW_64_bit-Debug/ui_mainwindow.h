/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_metodN_2;
    QPushButton *btn_msg_music_2;
    QPushButton *btn_stat_2;
    QPushButton *btn_exit;

    void setupUi(QWidget *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName("mainwindow");
        mainwindow->resize(488, 335);
        mainwindow->setStyleSheet(QString::fromUtf8("background-color: rgb(40,49,59);"));
        verticalLayout_4 = new QVBoxLayout(mainwindow);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(mainwindow);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Lucida Sans Unicode")});
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));

        verticalLayout_3->addWidget(label);


        horizontalLayout->addWidget(widget);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        btn_metodN_2 = new QPushButton(mainwindow);
        btn_metodN_2->setObjectName("btn_metodN_2");
        btn_metodN_2->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);\n"
"color: rgb(40,49,59);"));

        verticalLayout_2->addWidget(btn_metodN_2);

        btn_msg_music_2 = new QPushButton(mainwindow);
        btn_msg_music_2->setObjectName("btn_msg_music_2");
        btn_msg_music_2->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);\n"
"color: rgb(40,49,59);"));

        verticalLayout_2->addWidget(btn_msg_music_2);

        btn_stat_2 = new QPushButton(mainwindow);
        btn_stat_2->setObjectName("btn_stat_2");
        btn_stat_2->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);\n"
"color: rgb(40,49,59);"));

        verticalLayout_2->addWidget(btn_stat_2);

        btn_exit = new QPushButton(mainwindow);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);\n"
"color: rgb(40,49,59);"));

        verticalLayout_2->addWidget(btn_exit);


        verticalLayout_4->addLayout(verticalLayout_2);

        widget->raise();

        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QWidget *mainwindow)
    {
        mainwindow->setWindowTitle(QCoreApplication::translate("mainwindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("mainwindow", "\320\244\321\203\320\275\320\272\321\206\320\270\320\276\320\275\320\260\320\273 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
        btn_metodN_2->setText(QCoreApplication::translate("mainwindow", "\320\234\320\265\321\202\320\276\320\264 \320\235\321\214\321\216\321\202\320\276\320\275\320\260", nullptr));
        btn_msg_music_2->setText(QCoreApplication::translate("mainwindow", "\320\241\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265 \320\262 \320\274\321\203\320\267\321\213\320\272\320\276\320\273\321\214\320\275\320\276\320\274 \321\204\320\260\320\271\320\273\320\265", nullptr));
        btn_stat_2->setText(QCoreApplication::translate("mainwindow", "\320\243\320\267\320\275\320\260\321\202\321\214 \321\201\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\321\203", nullptr));
        btn_exit->setText(QCoreApplication::translate("mainwindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
