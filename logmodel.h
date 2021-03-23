#ifndef LOGMODEL_H
#define LOGMODEL_H

#include <QObject>
#include <QString>
#include <QStringListModel>
#include <qqml.h>

class LogModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QStringList list READ data);

    //QML_ELEMENT

public:
    LogModel();
    QStringList data(){return _data;};
    QString test(){return _data.first();}
private:
    QStringList _data;
    QString t;
};

#endif // LOGMODEL_H
