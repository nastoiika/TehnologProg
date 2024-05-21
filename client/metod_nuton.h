#ifndef METOD_NUTON_H
#define METOD_NUTON_H

#include <QWidget>

namespace Ui {
class metod_nuton;
}

class metod_nuton : public QWidget
{
    Q_OBJECT

public:
    explicit metod_nuton(QWidget *parent = nullptr);
    ~metod_nuton();

private slots:
    void on_btn_back_clicked();

private:
    Ui::metod_nuton *ui;
};

#endif // METOD_NUTON_H
