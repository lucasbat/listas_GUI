#include "listas.h"
#include "ui_listas.h"

//add biblioteca QMessageBox
#include "QMessageBox"


Listas::Listas(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Listas)
{
    ui->setupUi(this);
}

Listas::~Listas()
{
    delete ui;
}

//adicionar itens a uma lista
void Listas::on_btn_add_clicked()
{
    QString dado = ui->lineEdit->text();
    ui->lista->addItem(dado);
    ui->lineEdit->clear();
}

//botao delete
void Listas::on_btn_del_clicked()
{
    ui->lista->takeItem(ui->lista->row(ui->lista->currentItem()));
}

void Listas::on_btn_select_clicked()
{
    QString sele=ui->lista->currentItem()->text();
    QMessageBox::information(NULL,"Item","Item Selecionado: \n" +sele);
}
