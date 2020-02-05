#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Widget wid;
    wid.setWindowTitle("Hello world - Qt5 widget");
    wid.show();

    return app.exec();
}
