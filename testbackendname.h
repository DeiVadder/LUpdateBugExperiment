#ifndef TESTBACKENDNAME_H
#define TESTBACKENDNAME_H

#include <QObject>

class TestBackend : public QObject
{
    Q_OBJECT
public:
    explicit TestBackend(QObject *parent = nullptr);

    const QString getSomeText() const noexcept;
    const QString getSomeText2() const noexcept;


};

#endif // TESTBACKENDNAME_H
