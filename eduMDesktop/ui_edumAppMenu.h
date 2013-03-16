/********************************************************************************
** Form generated from reading UI file 'edumAppMenu.ui'
**
** Created: Mon Jul 30 00:20:54 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDUMAPPMENU_H
#define UI_EDUMAPPMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_eduMAppMenu
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *categoriesTitle_label;
    QSpacerItem *horizontalSpacer_4;
    QScrollArea *apps_scrollArea;
    QWidget *apps_scrollAreaWidgetContents;
    QScrollArea *categories_scrollArea;
    QWidget *categories_scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QLabel *appsTitle_label;
    QSpacerItem *horizontalSpacer_3;
    QLabel *clock_label;

    void setupUi(QMainWindow *eduMAppMenu)
    {
        if (eduMAppMenu->objectName().isEmpty())
            eduMAppMenu->setObjectName(QString::fromUtf8("eduMAppMenu"));
        eduMAppMenu->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(eduMAppMenu->sizePolicy().hasHeightForWidth());
        eduMAppMenu->setSizePolicy(sizePolicy);
        eduMAppMenu->setMinimumSize(QSize(800, 480));
        eduMAppMenu->setMaximumSize(QSize(800, 480));
        centralWidget = new QWidget(eduMAppMenu);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        categoriesTitle_label = new QLabel(centralWidget);
        categoriesTitle_label->setObjectName(QString::fromUtf8("categoriesTitle_label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(categoriesTitle_label->sizePolicy().hasHeightForWidth());
        categoriesTitle_label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(8);
        categoriesTitle_label->setFont(font);
        categoriesTitle_label->setAlignment(Qt::AlignCenter);
        categoriesTitle_label->setWordWrap(true);

        gridLayout->addWidget(categoriesTitle_label, 2, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 2, 1, 1);

        apps_scrollArea = new QScrollArea(centralWidget);
        apps_scrollArea->setObjectName(QString::fromUtf8("apps_scrollArea"));
        apps_scrollArea->setMinimumSize(QSize(0, 0));
        apps_scrollArea->setFont(font);
        apps_scrollArea->setWidgetResizable(true);
        apps_scrollAreaWidgetContents = new QWidget();
        apps_scrollAreaWidgetContents->setObjectName(QString::fromUtf8("apps_scrollAreaWidgetContents"));
        apps_scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, 320));
        apps_scrollArea->setWidget(apps_scrollAreaWidgetContents);

        gridLayout->addWidget(apps_scrollArea, 1, 0, 1, 3);

        categories_scrollArea = new QScrollArea(centralWidget);
        categories_scrollArea->setObjectName(QString::fromUtf8("categories_scrollArea"));
        categories_scrollArea->setMinimumSize(QSize(0, 0));
        categories_scrollArea->setMaximumSize(QSize(16777215, 80));
        categories_scrollArea->setFont(font);
        categories_scrollArea->setWidgetResizable(true);
        categories_scrollAreaWidgetContents = new QWidget();
        categories_scrollAreaWidgetContents->setObjectName(QString::fromUtf8("categories_scrollAreaWidgetContents"));
        categories_scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, 78));
        categories_scrollArea->setWidget(categories_scrollAreaWidgetContents);

        gridLayout->addWidget(categories_scrollArea, 3, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        appsTitle_label = new QLabel(centralWidget);
        appsTitle_label->setObjectName(QString::fromUtf8("appsTitle_label"));
        sizePolicy1.setHeightForWidth(appsTitle_label->sizePolicy().hasHeightForWidth());
        appsTitle_label->setSizePolicy(sizePolicy1);
        appsTitle_label->setFont(font);
        appsTitle_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        appsTitle_label->setWordWrap(true);

        horizontalLayout->addWidget(appsTitle_label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        clock_label = new QLabel(centralWidget);
        clock_label->setObjectName(QString::fromUtf8("clock_label"));
        clock_label->setFont(font);

        horizontalLayout->addWidget(clock_label);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 3);

        eduMAppMenu->setCentralWidget(centralWidget);

        retranslateUi(eduMAppMenu);

        QMetaObject::connectSlotsByName(eduMAppMenu);
    } // setupUi

    void retranslateUi(QMainWindow *eduMAppMenu)
    {
        eduMAppMenu->setWindowTitle(QApplication::translate("eduMAppMenu", "eduMAppMenu", 0, QApplication::UnicodeUTF8));
        categoriesTitle_label->setText(QApplication::translate("eduMAppMenu", "Categories", 0, QApplication::UnicodeUTF8));
        appsTitle_label->setText(QString());
        clock_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class eduMAppMenu: public Ui_eduMAppMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDUMAPPMENU_H
