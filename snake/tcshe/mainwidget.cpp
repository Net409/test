#include "mainwidget.h"



mainWidget::mainWidget(QWidget *parent)
    : QWidget(parent)
{
    this->resize(960,540);
    this->setWindowIcon(QIcon("D:/snake/back.jpg"));
    this->setWindowTitle("Gluttonous Snake");

    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap("D:/snake/white.jpg").scaled(this->size())));
    this->setPalette(palette);


    exitbtn=new QPushButton(this);
    exitbtn->setIcon(QIcon("D:/snake/exit.png"));
    exitbtn->setIconSize(QSize(50,50));
    exitbtn->setGeometry(QRect(900,40,40,40));
    exitbtn->setFlat(true);


    this->connect(exitbtn,SIGNAL(clicked()),this,SLOT(exitbtn_click()));

    leftbtn=new QPushButton(this);
    leftbtn->setIcon(QIcon("D:/snake/left.jpg"));
    leftbtn->setIconSize(QSize(50,50));
    leftbtn->setGeometry(QRect(800,260,50,40));
    leftbtn->setFlat(true);

    rightbtn=new QPushButton(this);
    rightbtn->setIcon(QIcon("D:/snake/right.jpg"));
    rightbtn->setIconSize(QSize(70,70));
    rightbtn->setGeometry(QRect(900,260,50,40));
    rightbtn->setFlat(true);

    upbtn=new QPushButton(this);
    upbtn->setIcon(QIcon("D:/snake/up.jpg"));
    upbtn->setIconSize(QSize(50,50));
    upbtn->setGeometry(QRect(850,200,50,40));
    upbtn->setFlat(true);

    downbtn=new QPushButton(this);
    downbtn->setIcon(QIcon("D:/snake/down.jpg"));
    downbtn->setIconSize(QSize(50,50));
    downbtn->setGeometry(QRect(850,320,50,40));
    downbtn->setFlat(true);





}

mainWidget::~mainWidget()
{



}

void mainWidget::exitbtn_click()
{
     exit(0);
}
