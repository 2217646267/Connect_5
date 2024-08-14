#include "MyObject.h"
#include <QApplication>
#include <QThread>
#include <QDebug>
#include "MyObject.h"
#include "TestThread.h"

void TestConnect()
{
    static TestThread t;
    static MyObject obj;

   // QObject::connect(&t, &TestThread::testSignal, &obj, &MyObject::testSlot, Qt::AutoConnection);

     QObject::connect(&t, &TestThread::testSignal, &obj, [&]()
     {
            obj.testSlot();
     }, Qt::DirectConnection);

    t.start();

    t.wait(5 * 1000);

    t.quit();
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MyObject w;
//    w.show();
     qDebug() << "main tid = " <<QThread::currentThreadId();
    TestConnect();
    return a.exec();
}
