#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "datamodel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void actionAbout();

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_listWidget_add_clicked();

    void on_pushButton_listWidget_remove_clicked();

    void on_pushButton_listWidget_rename_clicked();

    void on_pushButton_listWidget_removeAll_clicked();

    void on_pushButton_listWidget_populate_clicked();

private:
    Ui::MainWindow *ui;
    DataModel *model;
};

#endif // MAINWINDOW_H
