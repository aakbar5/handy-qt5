#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>

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

void MainWindow::on_pushButton_browseFolder_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"), "/", QFileDialog::ShowDirsOnly);
    ui->label_folderName->setText(dir);
}

void MainWindow::on_pushButton_browseFile_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Image"), "/", tr("Image Files (*.png *.jpg *.bmp)"));
    ui->label_fileName->setText(fileName);
}
