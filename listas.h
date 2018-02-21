#ifndef LISTAS_H
#define LISTAS_H

#include <QMainWindow>

namespace Ui {
class Listas;
}

class Listas : public QMainWindow
{
    Q_OBJECT

public:
    explicit Listas(QWidget *parent = 0);
    ~Listas();

private slots:
    void on_btn_add_clicked();

    void on_btn_del_clicked();

    void on_btn_select_clicked();

    void on_btn_list_clicked();

private:
    Ui::Listas *ui;
};

#endif // LISTAS_H
