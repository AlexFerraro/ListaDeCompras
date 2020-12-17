#include "widget.h"
#include "ui_widget.h"

using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->ProductAddLineEdit->setStyleSheet("QLineEdit { border : 1px solid #79d1ff;}");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_ProductADDpushButton_clicked()
{
    QString produto = ui->ProductAddLineEdit->text().trimmed();

    if(ui->ProductListWidget->findItems(produto, Qt::MatchExactly).isEmpty() && produto != "")
    {
        ui->ProductListWidget->addItem("   " + produto);
        ui->ProductAddLineEdit->setStyleSheet("QLineEdit { border : 1px solid #79d1ff;}");
        ui->ProductAddLineEdit->clear();

    }
    else
    {
        ui->ProductAddLineEdit->setStyleSheet("QLineEdit { border : 1px solid red;}");
        ui->ProductAddLineEdit->setFocus();
    }
}
