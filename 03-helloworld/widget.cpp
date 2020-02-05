#include <QDebug>
#include <QMessageBox>
#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

// Hint: Goto widget.ui and do right click on the GUI element
// to add new signal
void Widget::on_pushButton_msgBox_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Qt - A simple message box.");
    msgBox.exec();
}

void Widget::on_pushButton_errorBox_clicked()
{
    QMessageBox msgBox;
    msgBox.setStandardButtons(QMessageBox::Abort);
    msgBox.setText("Qt - An error message box.");
    msgBox.exec();
}
