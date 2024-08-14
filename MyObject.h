#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QObject>

class MyObject : public QObject
{
    Q_OBJECT

public:
    MyObject(QObject *parent = 0);
    ~MyObject();
public slots:
    void testSlot();
};

#endif // MYOBJECT_H
