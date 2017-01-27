#include "objectcolorpicker.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    objectColorPicker w;
    w.show();

    return app.exec();
}

