/********************************************************************************
** Form generated from reading UI file 'music_file.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSIC_FILE_H
#define UI_MUSIC_FILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_music_file
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *btn_back;
    QLabel *label;
    QPushButton *btn_choose_music;

    void setupUi(QWidget *music_file)
    {
        if (music_file->objectName().isEmpty())
            music_file->setObjectName("music_file");
        music_file->resize(400, 300);
        music_file->setStyleSheet(QString::fromUtf8("background-color: rgb(40,49,59);"));
        verticalLayout = new QVBoxLayout(music_file);
        verticalLayout->setObjectName("verticalLayout");
        btn_back = new QPushButton(music_file);
        btn_back->setObjectName("btn_back");
        btn_back->setMaximumSize(QSize(60, 16777215));
        btn_back->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);\n"
"color: rgb(40,49,59);"));

        verticalLayout->addWidget(btn_back);

        label = new QLabel(music_file);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        btn_choose_music = new QPushButton(music_file);
        btn_choose_music->setObjectName("btn_choose_music");
        btn_choose_music->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);\n"
"color: rgb(40,49,59);"));

        verticalLayout->addWidget(btn_choose_music);


        retranslateUi(music_file);

        QMetaObject::connectSlotsByName(music_file);
    } // setupUi

    void retranslateUi(QWidget *music_file)
    {
        music_file->setWindowTitle(QCoreApplication::translate("music_file", "Form", nullptr));
        btn_back->setText(QCoreApplication::translate("music_file", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label->setText(QCoreApplication::translate("music_file", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\321\217 \320\262 \320\274\321\203\320\267\321\213\320\272\320\260\320\273\321\214\320\275\321\213\320\271 \321\204\320\260\320\271\320\273", nullptr));
        btn_choose_music->setText(QCoreApplication::translate("music_file", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\274\321\203\320\267\321\213\320\272\320\260\320\273\321\214\320\275\321\213\320\271 \321\204\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class music_file: public Ui_music_file {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSIC_FILE_H
