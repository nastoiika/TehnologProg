/********************************************************************************
** Form generated from reading UI file 'metod_nuton.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METOD_NUTON_H
#define UI_METOD_NUTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_metod_nuton
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *btn_back;
    QLabel *label_2;
    QLabel *label_func;
    QPushButton *btn_change_func;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *btn_answer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;

    void setupUi(QWidget *metod_nuton)
    {
        if (metod_nuton->objectName().isEmpty())
            metod_nuton->setObjectName("metod_nuton");
        metod_nuton->resize(529, 394);
        metod_nuton->setStyleSheet(QString::fromUtf8("background-color: rgb(40,49,59);"));
        verticalLayout = new QVBoxLayout(metod_nuton);
        verticalLayout->setObjectName("verticalLayout");
        btn_back = new QPushButton(metod_nuton);
        btn_back->setObjectName("btn_back");
        btn_back->setMaximumSize(QSize(60, 16777215));
        btn_back->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);\n"
"color: rgb(40,49,59);"));

        verticalLayout->addWidget(btn_back);

        label_2 = new QLabel(metod_nuton);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(11);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(label_2);

        label_func = new QLabel(metod_nuton);
        label_func->setObjectName("label_func");
        label_func->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));

        verticalLayout->addWidget(label_func);

        btn_change_func = new QPushButton(metod_nuton);
        btn_change_func->setObjectName("btn_change_func");
        btn_change_func->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);\n"
"color: rgb(40,49,59);"));

        verticalLayout->addWidget(btn_change_func);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit = new QLineEdit(metod_nuton);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));

        horizontalLayout_2->addWidget(lineEdit);

        btn_answer = new QPushButton(metod_nuton);
        btn_answer->setObjectName("btn_answer");
        btn_answer->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);\n"
"color: rgb(40,49,59);"));

        horizontalLayout_2->addWidget(btn_answer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(metod_nuton);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));

        horizontalLayout->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(metod_nuton);

        QMetaObject::connectSlotsByName(metod_nuton);
    } // setupUi

    void retranslateUi(QWidget *metod_nuton)
    {
        metod_nuton->setWindowTitle(QCoreApplication::translate("metod_nuton", "Form", nullptr));
        btn_back->setText(QCoreApplication::translate("metod_nuton", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_2->setText(QCoreApplication::translate("metod_nuton", "\320\235\320\260\321\205\320\276\320\266\320\264\320\265\320\275\320\270\320\265 \320\275\321\203\320\273\320\265\320\262\320\276\320\263\320\276 \320\272\320\276\321\200\320\275\321\217 \321\204\321\203\320\275\320\272\321\206\320\270\320\270 \320\277\320\276 \320\234\320\265\321\202\320\276\320\264\321\203 \320\235\321\214\321\216\321\202\320\276\320\275\320\260", nullptr));
        label_func->setText(QCoreApplication::translate("metod_nuton", "\320\244\321\203\320\275\320\272\321\206\320\270\321\217: ", nullptr));
        btn_change_func->setText(QCoreApplication::translate("metod_nuton", "\320\237\320\276\320\274\320\265\320\275\321\217\321\202\321\214 \321\204\321\203\320\275\320\272\321\206\320\270\321\216", nullptr));
        btn_answer->setText(QCoreApplication::translate("metod_nuton", "\320\240\320\265\321\210\320\270\321\202\321\214", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class metod_nuton: public Ui_metod_nuton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METOD_NUTON_H
