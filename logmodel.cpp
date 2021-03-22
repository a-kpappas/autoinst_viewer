#include "logmodel.h"
#include <QFile>
#include <QTextStream>
LogModel::LogModel()
{
    QFile log("autoinst.txt");
    if (!log.open(QIODevice::ReadOnly | QIODevice::Text)){
        return;
    }
    QTextStream reader(&log);
    while (!reader.atEnd()) {
        data << reader.readLine();
    }
}
