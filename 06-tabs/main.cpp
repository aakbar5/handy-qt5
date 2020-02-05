#include "mainwindow.h"
#include <QApplication>
#include <QScreen>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QScreen *screen = app.primaryScreen();

    qDebug() << "Screen # " << screen->name() << " is of " << screen->size();
    int w = screen->size().width() / 2;
    int h = screen->size().height() / 2;

    MainWindow win;
    win.setWindowTitle("06-window");
    win.setGeometry(w/2, h/2, w, h); // Place the window in the centre of screen
    win.show();

    return app.exec();
}
