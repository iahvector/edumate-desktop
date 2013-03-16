#include "eduMAppMenu.h"
#include "ui_eduMAppMenu.h"
#include "QDateTime"

eduMAppMenu::eduMAppMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::eduMAppMenu)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start(1000);

    showTime();

    //currentDirectory = QDir::current();
    currentDirectory = QDir(qApp->applicationDirPath());
    categoriesNames = currentDirectory.entryList(QDir::Dirs | QDir::NoDotAndDotDot);
    categories_layout = new QHBoxLayout;
    apps_layout= new QGridLayout;
    categoryButtonToButtonName_signalMapper = new QSignalMapper(this);
    appsButtonToButtonName_signalMapper = new QSignalMapper(this);
    categoriesWidget = new QWidget;
    appsWidget = new QWidget;
    appProcess = new QProcess(this);

    QString categoryName;
    QPushButton* button;
    if(!categoriesNames.isEmpty())
        for(int i=0; i<categoriesNames.size(); i++)
        {
            categoryName = categoriesNames.value(i);

            if(categoryName.startsWith("."))
                continue;

            categoriesButtons[categoryName]= new QPushButton(categoryName);

            button = categoriesButtons.value(categoriesNames.value(i));
            button->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
            categories_layout->addWidget(button);

            categoryButtonToButtonName_signalMapper->setMapping(button, QString(categoryName));
            QObject::connect(button, SIGNAL(clicked()), categoryButtonToButtonName_signalMapper, SLOT(map()));
        }

    //options_pushButton = new QPushButton("Options");
    //options_pushButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
    //categories_layout->addWidget(options_pushButton);

    //QObject::connect(options_pushButton, SIGNAL(clicked()), this, SLOT(showOptions()));

    QObject::connect(categoryButtonToButtonName_signalMapper, SIGNAL(mapped(QString)), this, SLOT(categorySelected(QString)));
    QObject::connect(appsButtonToButtonName_signalMapper, SIGNAL(mapped(QString)), this, SLOT(appSelected(QString)));

    categoriesWidget->setLayout(categories_layout);
    ui->categories_scrollArea->setWidget(categoriesWidget);

}

eduMAppMenu::~eduMAppMenu()
{
    delete ui;

    for(int i=0; i<categoriesNames.size(); i++)
        delete categoriesButtons.value(categoriesNames.value(i));

    for(int i=0; i<appsNames.size(); i++)
        delete appsButtons.value(appsNames.value(i));

}

void eduMAppMenu::categorySelected(QString category)
{
    ui->appsTitle_label->setText(category);

    QDir categoryDir;
    categoryDir.cd(QDir::currentPath()+"/"+category);
    appsNames.clear();
    appsNames = categoryDir.entryList(QDir::Files | QDir::Executable);
    appsButtons.clear();

    if(!appsNames.isEmpty())
        for(int i=0; i<appsNames.size(); i++)
        {
            delete appsButtons.value(appsNames.value(i));
        }

        QLayoutItem* item;
        while ( ( item = apps_layout->takeAt(0) ) )
        {
            delete item->widget();
            delete item;
        }

    delete apps_layout;
    apps_layout = new QGridLayout;
    QString appName;
    QPushButton* button;
    int column = 0, row = 0;
    if(!appsNames.isEmpty())
        for(int i=0; i<appsNames.size(); i++)
        {
            appName = appsNames.value(i);

            appsButtons[appName] = new QPushButton(appName);

            button = appsButtons.value(appsNames.value(i));
            button->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
            button->setMinimumSize(143, 100);
            button->setMaximumSize(143, 100);
            apps_layout->addWidget(button, row, column);
            apps_layout->setAlignment(button, Qt::AlignTop);
            if((i+1) % 5 == 0)
            {
                column =  0;
                row    += 1;
            } else column++;

            appsButtonToButtonName_signalMapper->setMapping(button, QString(category + "/" + appName));
            QObject::connect(button, SIGNAL(clicked()), appsButtonToButtonName_signalMapper, SLOT(map()));
        }

    appsWidget->setLayout(apps_layout);
    ui->apps_scrollArea->setWidget(appsWidget);
}

void eduMAppMenu::appSelected(QString selectedApp)
{
    if(appProcess)
        appProcess->terminate();

    QStringList arguments;
    arguments << "-geometry" << "800x480+0+0";
    appProcess->startDetached(QDir::currentPath() + "/" + selectedApp, arguments);
}

void eduMAppMenu::showTime()
{
    ui->clock_label->setText(QDateTime::currentDateTime().toString("ddd MMMM dd yyyy, hh:mm:ss ap"));
}

//void eduMAppMenu::showOptions()
//{
//    ui->appsTitle_label->setText("Options");
//}
