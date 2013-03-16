#include "eduMDesktop.h"
#include "ui_eduMDesktop.h"

eduMDesktop::eduMDesktop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::eduMDesktop)
{
    ui->setupUi(this);
}

eduMDesktop::~eduMDesktop()
{
    delete ui;
}
