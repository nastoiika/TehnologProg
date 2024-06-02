#include "metod_nuton.h"
#include "build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/ui_metod_nuton.h"
#include "ui_metod_nuton.h"

#include "mainwindow.h"
#include <random>

using namespace std;

metod_nuton::metod_nuton(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::metod_nuton)
{
    ui->setupUi(this);
}

metod_nuton::~metod_nuton()
{
    delete ui;
}

void metod_nuton::on_btn_back_clicked()
{
    this->close();

    // Открываем mainwindow
    mainwindow *mainwindow1 = new mainwindow;
    mainwindow1->show();
}

void metod_nuton::on_btn_answer_clicked()
{
    authregform authRegFormInstance;
    QString login = authRegFormInstance.login;
    bool res = func_nuton(login, ui->lineEdit->text());
    if (res)
    {
        ui->label_3->setText("Вы решили правильно");
    }
    else
    {
        ui->label_3->setText("Вы решили НЕправильно");
    }
}

// Генерация случайного целого числа в заданном диапазоне
int random_int(int min, int max) {
    static random_device rd;
    static mt19937 gen(rd());
    uniform_int_distribution<int> dis(min, max);
    return dis(gen);
}

void metod_nuton::on_btn_change_func_clicked()
{
    // Генерация случайных коэффициентов
    int a = random_int(-10, 10);
    int b = random_int(-10, 10);
    int c = random_int(-10, 10);

    // Формирование строки с функцией
    QString func = "Функция: " + QString::number(a) + "x^2 + " +
                   QString::number(b) + "x + " +
                   QString::number(c);

    ui->label_func->setText(func);
}
