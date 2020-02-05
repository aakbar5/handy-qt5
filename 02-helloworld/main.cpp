#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    qDebug() << "Hello world -- Qt";
    qDebug() << "C++ version: " << __cplusplus;
    qDebug() << "Qt version: " << QT_VERSION_STR;
    qDebug() << "Qt version - major: " << QT_VERSION_MAJOR;
    qDebug() << "Qt version - minor: " << QT_VERSION_MINOR;
    qDebug() << "Qt version - patch: " << QT_VERSION_PATCH;

    // Initiate The Qt event loop without UI
    QCoreApplication app(argc, argv);

    qDebug() << "Press ctrl+c to quit from Qt event loop..";

    // Remains in event loop
    return app.exec();
}
