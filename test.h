#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);


public slots:
    void onFromC();
signals:

    void fromC();

};

#endif // TEST_H
