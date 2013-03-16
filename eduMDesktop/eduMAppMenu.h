#ifndef EDUMAPPMENU_H
#define EDUMAPPMENU_H

#include <QMainWindow>
#include <QDir>
#include <QPushButton>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QMap>
#include <QSignalMapper>
#include <QProcess>
#include <QTimer>

namespace Ui {
class eduMAppMenu;
}

class eduMAppMenu : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit eduMAppMenu(QWidget *parent = 0);
    ~eduMAppMenu();

public slots:
    void categorySelected(QString);
    void appSelected(QString);
    void showTime();
    //void showOptions();
    
private:
    Ui::eduMAppMenu *ui;
    QTimer* timer;
    QDir currentDirectory;
    QStringList categoriesNames;
    QMap<QString, QPushButton*> categoriesButtons;
    QHBoxLayout* categories_layout;
    QPushButton* options_pushButton;
    QSignalMapper* categoryButtonToButtonName_signalMapper;
    QSignalMapper* appsButtonToButtonName_signalMapper;
    QStringList appsNames;
    QMap<QString, QPushButton*> appsButtons;
    QGridLayout* apps_layout;
    QProcess* appProcess;
    QWidget* categoriesWidget;
    QWidget* appsWidget;

};

#endif // eduMAppMenu_H
