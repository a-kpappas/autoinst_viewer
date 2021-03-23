#include "logmodel.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <iostream>

LogModel::LogModel()
{
    // This is temporary. The plan is to wget the file from a host.
    QFile file("/home/apappas/autoinst/autoinst-log.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        return;
    }

    QTextStream reader(&file);
    while (!reader.atEnd()) {
        _data << reader.readLine();
    }
    std::cout<< "test\n";
    //model.setStringList(_data);
    if (!_data.isEmpty()){
        qDebug()<< _data.first()<<t;
    }
}
