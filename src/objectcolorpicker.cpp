#include "objectcolorpicker.h"
#include "ui_objectcolorpicker.h"

objectColorPicker::objectColorPicker(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::objectColorPicker)
{
    ui->setupUi(this);
}

objectColorPicker::~objectColorPicker()
{
    delete ui;
}
