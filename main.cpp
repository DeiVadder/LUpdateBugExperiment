#include <QCoreApplication>
#include <QLocale>
#include <QTranslator>

#include <QDebug>

#include "testbackendname.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "LUpdateBugExperiment_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    qDebug() << QObject::tr("Some main.cpp text to translate");

    TestBackend testBackend;
    qDebug() << testBackend.getSomeText();
    qDebug() << testBackend.getSomeText2();

    return a.exec();
}
