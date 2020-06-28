#include "mainwidget.h"
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

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




    startbtn=new QPushButton("start",this);
    startbtn->setGeometry(QRect(900,120,50,40));

    connect(leftbtn,SIGNAL(clicked()),this,SLOT(leftbtn_click()));
    connect(rightbtn,SIGNAL(clicked()),this,SLOT(rightbtn_click()));
    connect(upbtn,SIGNAL(clicked()),this,SLOT(upbtn_click()));
    connect(downbtn,SIGNAL(clicked()),this,SLOT(downbtn_click()));
    connect(startbtn,SIGNAL(clicked()),this,SLOT(startbtn_click()));

    snake[0][0]=qrand()%16;
    snake[0][1]=qrand()%13;
    direction=qrand()%4;

    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeoutslot()));

    x=qrand()%13;
    y=qrand()%16;
    x1=qrand()%13;
    y1=qrand()%16;
    count=0;



}

mainWidget::~mainWidget()
{



}

void mainWidget::paintEvent(QPaintEvent *)
{
    int i,j;
    QPainter painter(this);
    for(i=0;i<13;i++)
    {
        for(j=0;j<16;j++)
        {
            painter.drawRect(QRect(40*j,40*i,40,40));
        }
    }
    //food


    painter.drawImage(QRectF(x*40,y*40,40,40),QImage("D:/snake/food.jpg"));

    painter.drawImage(QRectF(x1*40,y1*40,40,40),QImage("D:/snake/poison.jpg"));


    switch(direction)
    {
     case UP:
        painter.drawImage(QRectF(snake[0][0]*40,snake[0][1]*40,40,40),QImage("D:/snake/U.jpg"));
        break;
    case DOWN:
       painter.drawImage(QRectF(snake[0][0]*40,snake[0][1]*40,40,40),QImage("D:/snake/D.jpg"));
       break;

     case RIGHT:
        painter.drawImage(QRectF(snake[0][0]*40,snake[0][1]*40,40,40),QImage("D:/snake/R.jpg"));
        break;
     case LEFT:
        painter.drawImage(QRectF(snake[0][0]*40,snake[0][1]*40,40,40),QImage("D:/snake/L.jpg"));
        break;
     default:
        break;

    };
    for(i=1;i<=count;i++)
    {
        painter.drawImage(QRectF(snake[i][0]*40,snake[i][1]*40,40,40),QImage("D:/snake/green.jpg"));
    }


}
//timeout
void mainWidget::timeoutslot()
{
    int i=0;
    if(snake[0][0]==x&&snake[0][1]==y)
    {
        x=qrand()%13;
        y=qrand()%16;
        count++;
    }

    if(snake[0][0]==x1&&snake[0][1]==y1)
    {
        x1=qrand()%13;
        y1=qrand()%16;
        count-=2;
    }


    //body
    for(i=count;i>0;i--)
    {
        snake[i][0]=snake[i-1][0];
        snake[i][1]=snake[i-1][1];
    }
    switch(direction)
    {
     case UP:
        snake[0][1]--;

        break;
    case DOWN:
       snake[0][1]++;

       break;
     case RIGHT:
        snake[0][0]++;

        break;
     case LEFT:
        snake[0][0]--;

        break;
     default:
        break;

    }
    //自杀程序
    for(i=count;i>0;i--)
    {
        for(int j=i-1;j>0;j--)
        {
            if(snake[i][0]==snake[j][0]&&snake[i][1]==snake[j][1])
            {
                delete this;
            }
        }
    }
    if(count<0)
    {
        delete this;
    }
    //撞墙程序
    if(snake[0][0]<0||snake[0][0]>=16||snake[0][1]<0||snake[0][1]>=13)
    {
        delete this;
    }
    this->update();


}
void mainWidget::exitbtn_click()
{
     exit(0);
}

void mainWidget::upbtn_click()
{
    direction=UP;

}
void mainWidget::downbtn_click()
{
    direction=DOWN;

}


void mainWidget::leftbtn_click()
{
    direction=LEFT;

}
void mainWidget::rightbtn_click()
{
    direction=RIGHT;

}
void mainWidget::startbtn_click()
{
    timer->start(500);

}
