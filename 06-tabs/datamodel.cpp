#include "datamodel.h"
#include <QPair>

DataModel::DataModel(QObject *parent) {

    Q_UNUSED(parent);

    m_data.append(qMakePair(QString("Afghanistan"),             QString("Kabul")));
    m_data.append(qMakePair(QString("Aland Islands"),           QString("Mariehamn")          ));
    m_data.append(qMakePair(QString("Albania"),                 QString("Tirana")             ));
    m_data.append(qMakePair(QString("Algeria"),                 QString("Algiers")            ));
    m_data.append(qMakePair(QString("American Samoa"),          QString("Pago Pago")          ));
    m_data.append(qMakePair(QString("Andorra"),                 QString("Andorra la Vella")   ));
    m_data.append(qMakePair(QString("Angola"),                  QString("Luanda")             ));
    m_data.append(qMakePair(QString("Anguilla"),                QString("The Valley")         ));
    m_data.append(qMakePair(QString("Antarctica"),              QString("")                   ));
    m_data.append(qMakePair(QString("Antigua and Barbuda"),     QString("Saint John's")       ));
    m_data.append(qMakePair(QString("Argentina"),               QString("Buenos Aires")       ));
    m_data.append(qMakePair(QString("Armenia"),                 QString("Yerevan")            ));
    m_data.append(qMakePair(QString("Aruba"),                   QString("Oranjestad")         ));
    m_data.append(qMakePair(QString("Australia"),               QString("Canberra")           ));
}

int DataModel::rowCount(const QModelIndex &parent) const {
    Q_UNUSED(parent);

    return m_data.count();
}

int DataModel::columnCount(const QModelIndex &parent) const {
    Q_UNUSED(parent);

    return 2;
}

QVariant DataModel::data(const QModelIndex &index, int role) const {
    if (index.isValid() && role == Qt::DisplayRole) {

        if (index.column() == 0)
            return m_data.at(index.row()).first;

        else if (index.column() == 1)
            return m_data.at(index.row()).second;
    }

    return QVariant();
}

QVariant DataModel::headerData(int section, Qt::Orientation orientation, int role) const {

    if (orientation == Qt::Horizontal && role == Qt::DisplayRole) {
        if (section == 0)
            return QString("Country Name");
        else if (section == 1)
            return QString("Capital");
    }

    return QVariant();
}
