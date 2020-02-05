#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QInputDialog>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionAbout, SIGNAL(triggered()), this, SLOT(actionAbout()));

    // populdate list widget
    on_pushButton_listWidget_populate_clicked();

    model = new DataModel();
    ui->tableView->setModel(model);

    // As per docs, If you want a table that uses your own data model you
    // should use QTableView rather than this class.
    ui->tableView->showGrid();
    ui->tableView->setGridStyle(Qt::SolidLine);
    ui->tableView->resizeColumnsToContents();
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

void MainWindow::on_pushButton_listWidget_add_clicked()
{
    bool ok;
    QString text = QInputDialog::getText(this, "Add new item", "Enter text: ",
                                         QLineEdit::Normal,
                                         "Test", &ok);
    if (ok && !text.isEmpty())
        ui->listWidget->addItem(text);
}

void MainWindow::on_pushButton_listWidget_remove_clicked()
{
    int index = ui->listWidget->currentRow();
    if (index != -1) {
        ui->listWidget->takeItem(index);
    }
    else {
        QMessageBox::information(this, "Remove an item", "Nothing is selected", QMessageBox::Ok);
    }
}

void MainWindow::on_pushButton_listWidget_rename_clicked()
{
    qDebug() << "on_pushButton_listWidget_rename_clicked";
}

void MainWindow::on_pushButton_listWidget_removeAll_clicked()
{
    ui->listWidget->clear();
}

void MainWindow::on_pushButton_listWidget_populate_clicked()
{
    ui->listWidget->addItem("Tyrannosaurus");
    ui->listWidget->addItem("Diplodocus");
    ui->listWidget->addItem("Spinosaurus");
    ui->listWidget->addItem("Velociraptor");
    ui->listWidget->addItem("Argentinosaurus");
    ui->listWidget->addItem("Apatosaurus");
    ui->listWidget->addItem("Brachiosaurus");
    ui->listWidget->addItem("Carnotaurus");
    ui->listWidget->addItem("Allosaurus");
}
