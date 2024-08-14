#include "MyObject.h"
#include <QDebug>
#include <QThread>

MyObject::MyObject(QObject *parent)
    : QObject(parent)
{
}

MyObject::~MyObject()
{

}

void MyObject::testSlot()
{
    qDebug() << "void MyObject::testSlot() tid = " << QThread::currentThreadId();
}
