/********************************************************************************
** Form generated from reading UI file 'stats.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATS_H
#define UI_STATS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stats
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *btn_back;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *stats)
    {
        if (stats->objectName().isEmpty())
            stats->setObjectName("stats");
        stats->resize(400, 300);
        stats->setStyleSheet(QString::fromUtf8("background-color: rgb(40,49,59);"));
        verticalLayout = new QVBoxLayout(stats);
        verticalLayout->setObjectName("verticalLayout");
        btn_back = new QPushButton(stats);
        btn_back->setObjectName("btn_back");
        btn_back->setMaximumSize(QSize(60, 16777215));
        btn_back->setStyleSheet(QString::fromUtf8("background-color: rgb(117,174,93);\n"
"color: rgb(40,49,59);"));

        verticalLayout->addWidget(btn_back);

        label = new QLabel(stats);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(stats);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);


        retranslateUi(stats);

        QMetaObject::connectSlotsByName(stats);
    } // setupUi

    void retranslateUi(QWidget *stats)
    {
        stats->setWindowTitle(QCoreApplication::translate("stats", "Form", nullptr));
        btn_back->setText(QCoreApplication::translate("stats", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label->setText(QCoreApplication::translate("stats", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class stats: public Ui_stats {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATS_H
