#include "testbackendname.h"

TestBackend::TestBackend(QObject *parent) : QObject(parent)
{

}

const QString TestBackend::getSomeText() const noexcept
{
    return tr("Some text to translate");
}

const QString TestBackend::getSomeText2() const noexcept
{
    return QObject::tr("Some text to translate 2");
}
