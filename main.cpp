#include "mainwindow.h"
#include <QApplication>
#include <ctime>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    srand(time(0));
    w.show();

    return a.exec();
}
