#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "evaluator.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    qmlRegisterType<FactorialCalculator>("example", 1, 0, "FactorialCalculator");
    engine.load(QUrl("qrc:/main.qml"));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
