#ifndef MUSIC_FILE_H
#define MUSIC_FILE_H

#include <QWidget>

namespace Ui {
class music_file;
}

class music_file : public QWidget
{
    Q_OBJECT

public:
    explicit music_file(QWidget *parent = nullptr);
    ~music_file();

private slots:
    void on_btn_back_clicked();
    void on_btn_choose_music_clicked();

signals:
    void backToMainWindow();

private:
    Ui::music_file *ui;
};

#endif // MUSIC_FILE_H
