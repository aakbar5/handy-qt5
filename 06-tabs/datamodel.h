#ifndef DATAMODEL_H
#define DATAMODEL_H

#include <QObject>
#include <QStandardItemModel>
#include <QPair>
#include <QVector>

class DataModel : public QAbstractTableModel
{
public:
    DataModel(QObject *parent = nullptr);
    int rowCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;
    int columnCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;

private:
    QList<QPair<QString, QString> > m_data;
};

#endif // DATAMODEL_H
