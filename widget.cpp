#include "widget.h"
#include "ui_widget.h"

using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_ProductADDpushButton_clicked()
{
    QString produto = ui->ProductAddLineEdit->text();


    if(ui->ProductListWidget->findItems(produto, Qt::MatchExactly).isEmpty())
    {
        ui->ProductListWidget->addItem(produto);
        ui->ProductAddLineEdit->clear();
    }else
    {


    }
}
