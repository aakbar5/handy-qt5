#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

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

    void on_pushButton_clear_clicked();

    void on_pushButton_setMsg_2_clicked();

    void on_pushButton_setMsg_1_clicked();

    void on_pushButton_addCustomWidget_clicked();

private:
    Ui::MainWindow *ui;
    QLabel *label;
};

#endif // MAINWINDOW_H
