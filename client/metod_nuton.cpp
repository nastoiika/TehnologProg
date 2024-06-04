#include "metod_nuton.h"
#include "build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/ui_metod_nuton.h"
#include "ui_metod_nuton.h"

#include "mainwindow.h"
#include <random>
#include <ctime>
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
    emit backToMainWindow();
    this->close();
}

void metod_nuton::on_btn_answer_clicked()
{
    bool res = func_nuton(login, ui->lineEdit->text(), a, b, c, x1, x2);
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

double f(double x, int a1, int b1, int c1) {
    return a1 * x * x + b1 * x + c1;
}

void metod_nuton::on_btn_change_func_clicked()
{
    // Генерация случайных коэффициентов
    while (true){
        a = random_int(-10, 10);
        b = random_int(-10, 10);
        c = random_int(-10, 10);
        if (b*b - 4*a*c >= 0){
            break;
        }
    }
    for (int i = 0; i < 100; i++) {
        double k = i / 1.0;
        double k1 = (i+1) / 1.0;
        if (f(k, a, b, c)* f(k1, a, b, c) < 0) {
            x1 = k;
            x2 = k1;
            break;
        }
    }

    // Формирование строки с функцией
    QString func = "Функция: " + QString::number(a) + "x^2 + " +
                   QString::number(b) + "x + " +
                   QString::number(c) + " На отрезке от " + QString::number(x1) + " до " + QString::number(x2) + " eps = 0.01";

    ui->label_func->setText(func);
}

void metod_nuton::setLogin(const QString &login)
{
    this->login = login;
}
