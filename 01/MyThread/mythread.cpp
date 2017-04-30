#include "mythread.h"
#include <QThread>
#include <QDebug>

MyThread::MyThread()
{
}

void MyThread::run()
{
    qDebug() << "Running";
}
