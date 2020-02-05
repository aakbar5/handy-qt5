#include <QDebug>

int main()
{
    qDebug() << "Hello world -- Qt";
    qDebug() << "C++ version: " << __cplusplus;
    qDebug() << "Qt version: " << QT_VERSION_STR;
    qDebug() << "Qt version - major: " << QT_VERSION_MAJOR;
    qDebug() << "Qt version - minor: " << QT_VERSION_MINOR;
    qDebug() << "Qt version - patch: " << QT_VERSION_PATCH;

    return 0;
}
