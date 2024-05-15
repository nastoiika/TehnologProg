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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_metodN_2;
    QPushButton *btn_msg_music_2;
    QPushButton *btn_stat_2;
    QPushButton *pushButton;
    QFrame *frame;
    QLabel *label;

    void setupUi(QWidget *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName("mainwindow");
        mainwindow->resize(488, 335);
        mainwindow->setStyleSheet(QString::fromUtf8("background-color: rgb(40,49,59);"));
        layoutWidget = new QWidget(mainwindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 140, 301, 139));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_metodN_2 = new QPushButton(layoutWidget);
        btn_metodN_2->setObjectName("btn_metodN_2");
        btn_metodN_2->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);\n"
"color: rgb(40,49,59);"));

        verticalLayout_2->addWidget(btn_metodN_2);

        btn_msg_music_2 = new QPushButton(layoutWidget);
        btn_msg_music_2->setObjectName("btn_msg_music_2");
        btn_msg_music_2->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);\n"
"color: rgb(40,49,59);"));

        verticalLayout_2->addWidget(btn_msg_music_2);

        btn_stat_2 = new QPushButton(layoutWidget);
        btn_stat_2->setObjectName("btn_stat_2");
        btn_stat_2->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);\n"
"color: rgb(40,49,59);"));

        verticalLayout_2->addWidget(btn_stat_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);\n"
"color: rgb(40,49,59);"));

        verticalLayout_2->addWidget(pushButton);

        frame = new QFrame(mainwindow);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-30, -20, 301, 61));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 261, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Lucida Sans Unicode")});
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(200, 200, 200);"));
        frame->raise();
        layoutWidget->raise();

        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QWidget *mainwindow)
    {
        mainwindow->setWindowTitle(QCoreApplication::translate("mainwindow", "Form", nullptr));
        btn_metodN_2->setText(QCoreApplication::translate("mainwindow", "\320\234\320\265\321\202\320\276\320\264 \320\235\321\214\321\216\321\202\320\276\320\275\320\260", nullptr));
        btn_msg_music_2->setText(QCoreApplication::translate("mainwindow", "\320\241\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265 \320\262 \320\274\321\203\320\267\321\213\320\272\320\276\320\273\321\214\320\275\320\276\320\274 \321\204\320\260\320\271\320\273\320\265", nullptr));
        btn_stat_2->setText(QCoreApplication::translate("mainwindow", "\320\243\320\267\320\275\320\260\321\202\321\214 \321\201\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\321\203", nullptr));
        pushButton->setText(QCoreApplication::translate("mainwindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label->setText(QCoreApplication::translate("mainwindow", "\320\244\321\203\320\275\320\272\321\206\320\270\320\276\320\275\320\260\320\273 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
