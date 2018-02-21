//teste
#include "listas.h"
#include "ui_listas.h"

//add biblioteca QMessageBox
#include "QMessageBox"

//add biblioteca QString
#include "QString"


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

QString matriz[10];
int i=0;

//adicionar itens a uma lista
void Listas::on_btn_add_clicked()
{

    matriz[i] = ui->lineEdit->text();
    i++;

    ui->lineEdit->clear();
}

//listar os itens
void Listas::on_btn_list_clicked()
{
    ui->lista->clear();
    for(int i=0; i<10; i++)
    ui->lista->addItem(matriz[i]);
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
