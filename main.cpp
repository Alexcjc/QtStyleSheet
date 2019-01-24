#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QFile styleFile("normal.qss");
    if (styleFile.open(QFile::ReadOnly))
    {
        app.setStyleSheet(styleFile.readAll());
        styleFile.close();
    }

    MainWindow w;
    w.show();

    return app.exec();
}
