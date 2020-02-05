#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionAbout, SIGNAL(triggered()), this, SLOT(actionAbout()));
 }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::actionAbout()
{
    QMessageBox msgBox;
    msgBox.setText("Qt - A simple message box.");
    msgBox.exec();
}

void MainWindow::on_pushButton_clear_clicked()
{
    ui->statusBar->clearMessage();
}

void MainWindow::on_pushButton_setMsg_2_clicked()
{
    ui->statusBar->showMessage("Hello world - fixed message");
}

void MainWindow::on_pushButton_setMsg_1_clicked()
{
    ui->statusBar->showMessage("Hello world - time out message", 1500);
}

void MainWindow::on_pushButton_addCustomWidget_clicked()
{
    static bool isAdded = false;
    if (!isAdded) {
        ui->statusBar->clearMessage();
        label = new QLabel("Dynamically added widget");
        label->setAlignment(Qt::AlignRight);
        label->setStyleSheet("QLabel { background-color: yellow }");
        ui->statusBar->addWidget(label);
        ui->pushButton_addCustomWidget->setText("Remove custom widget");
    }
    else {
        ui->statusBar->removeWidget(label);
        ui->pushButton_addCustomWidget->setText("Add custom widget");
    }

    isAdded = !isAdded;
}
