#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include<QIcon>
#include<QPalette>
#include<QBrush>
#include<QPushButton>
#include<QPainter>
#include<QImage>
#include<QTimer>
#include<QMessageBox>
class mainWidget : public QWidget
{
    Q_OBJECT

public:
    mainWidget(QWidget *parent = nullptr);
    ~mainWidget();
    void paintEvent(QPaintEvent *);
private:
    QPushButton *exitbtn;
private:
    QPushButton *startbtn;
    QPushButton *leftbtn;
    QPushButton *rightbtn;
    QPushButton *upbtn;
    QPushButton *downbtn;

    int direction;
    QTimer *timer;
    int snake[100][2];
    int x;
    int y;
    int count;
    int x1;
    int y1;



public slots:
    void exitbtn_click();
    void leftbtn_click();
    void rightbtn_click();
    void upbtn_click();
    void downbtn_click();
    void startbtn_click();
    void timeoutslot();
};

#endif // MAINWIDGET_H
