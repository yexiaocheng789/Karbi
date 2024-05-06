#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H
#include<QDebug>
#include <QPushButton>
#include<QString>
#include <QObject>

class MPushButton : public QPushButton
{
    Q_OBJECT
public:
    //explicit MPushButton(QObject *parent = nullptr);
    MPushButton(QString normalImag,QString pressImg = "");
    QString normalPath;//正常图片路径
    QString pressPath;//按下图片路径
    //向下跳跃
    void zoom1();
    //向上跳跃
    void zoom2();

    void mousePressEvent(QMouseEvent *e);

    void moousePrleaseEvent(QMouseEvent *e);
signals:

};

#endif // MYPUSHBUTTON_H
