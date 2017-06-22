#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;               // Declare main window
    w.setWindowTitle("Libpro"); // Set title for the main window
    w.show();                   // Show the main window

    return a.exec();
}
