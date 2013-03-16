#ifndef EDUMDESKTOP_H
#define EDUMDESKTOP_H

#include <QMainWindow>

namespace Ui {
class eduMDesktop;
}

class eduMDesktop : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit eduMDesktop(QWidget *parent = 0);
    ~eduMDesktop();
    
private:
    Ui::eduMDesktop *ui;
};

#endif // EDUMDESKTOP_H
