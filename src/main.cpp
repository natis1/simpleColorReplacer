#include "objectcolorpicker.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "It compiled successfully. We are good to go" << std::endl;
    QApplication app(argc, argv);
    objectColorPicker w;
    w.show();

    return app.exec();
}

