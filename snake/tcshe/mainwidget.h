#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include<QIcon>
#include<QPalette>
#include<QBrush>
#include<QPushButton>


class mainWidget : public QWidget
{
    Q_OBJECT

public:
    mainWidget(QWidget *parent = nullptr);
    ~mainWidget();
private:
    QPushButton *exitbtn;
private:
    QPushButton *startbtn;
    QPushButton *leftbtn;
    QPushButton *rightbtn;
    QPushButton *upbtn;
    QPushButton *downbtn;
public slots:
    void exitbtn_click();
};

#endif // MAINWIDGET_H
