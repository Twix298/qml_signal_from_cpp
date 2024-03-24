#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    QObject::connect(this, &Test::fromC, &Test::onFromC);
}

void Test::onFromC()
{
    qDebug() << "onFromC";
}
