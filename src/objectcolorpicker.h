#ifndef OBJECTCOLORPICKER_H
#define OBJECTCOLORPICKER_H

#include <QMainWindow>

namespace Ui {
class objectColorPicker;
}

class objectColorPicker : public QMainWindow
{
    Q_OBJECT

public:
    explicit objectColorPicker(QWidget *parent = 0);
    ~objectColorPicker();

private:
    Ui::objectColorPicker *ui;
};

#endif // OBJECTCOLORPICKER_H
