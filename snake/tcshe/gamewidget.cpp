#include "gamewidget.h"
#include<QIcon>
#include<QBrush>
#include<QPalette>
#include<QPushButton>
gamewidget::gamewidget(QWidget *parent) : QWidget(parent)
{
    this->resize(658,558);
    this->setWindowIcon(QIcon("D:/snake/back.jpg"));
    this->setWindowTitle("Gluttonous Snake");

    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap("D:/snake/white.jpg").scaled(this->size())));
    this->setPalette(palette);

}
