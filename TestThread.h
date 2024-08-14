#ifndef TESTTHREAD_H
#define TESTTHREAD_H

#include <QObject>
#include <QThread>

class TestThread : public QThread
{
    Q_OBJECT
public:
    explicit TestThread(QObject *parent = nullptr);

signals:
    void testSignal();
protected:
    void run();
public slots:
};

#endif // TESTTHREAD_H
