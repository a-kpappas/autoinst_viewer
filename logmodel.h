#ifndef LOGMODEL_H
#define LOGMODEL_H

#include <QObject>
#include <QString>
#include <qqml.h>
class LogModel
{
    Q_OBJECT
    Q_PROPERTY(QStringList data READ);
    QML_ELEMENT

public:
    LogModel();
private:
    QStringList data;
};

#endif // LOGMODEL_H
