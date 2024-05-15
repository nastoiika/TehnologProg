#ifndef AUTHREGFORM_H
#define AUTHREGFORM_H

#include <QWidget>

namespace Ui {
class authregform;
}

class authregform : public QWidget
{
    Q_OBJECT

public:
    explicit authregform(QWidget *parent = nullptr);
    ~authregform();

private slots:
    void on_btn_auth_clicked();
    void on_btn_reg_clicked();

private:
    Ui::authregform *ui;
};

#endif // AUTHREGFORM_H
