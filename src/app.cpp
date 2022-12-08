#include "MainApplication.hh"
#include <QApplication>

int main(int ac, char **argv) {

    QApplication a( ac, argv );
 
    MainApplication mainApp;

    mainApp.show();

    return a.exec();
}