#include "playscene.h"
#include<QMenuBar>
#include<QPainter>
#include "mypushbutton.h"
#include <choosescene.h>
#include <QTimer>
#include "rule.h"
PlayScene::PlayScene(int index)
{
    this->levelIndex = index;
    //设置固定大小
    this->setFixedSize(1200,1200);
    //设置标题
    this->setWindowTitle(QString("星之卡比之恶魔城寻宝之旅"));
    //设置图片
    this->setWindowIcon(QIcon(":/res/icon.png"));
    //创建菜单栏
    mrule = new Rule(index);
    painter = new QPainter(this);
    QMenuBar *bar = menuBar();
    this->setMenuBar(bar);
    //创建开始菜单
    QMenu * startmenu = bar->addMenu("开始");
    //创建菜单项
    QAction * QuitAction = startmenu->addAction("返回选择关卡");
    connect(QuitAction,&QAction::triggered,[=]()
        {
            this->close();
            emit this->Chooseback();
        });

    //返回按钮
    MPushButton *back = new MPushButton(":/res/backbtn.png",":/res/backbtn1.png");
    back->setParent(this);
    back->move(this->width() - back->width(),this->height() - back->height());

    connect(back,&MPushButton::clicked,[=](){
        back->zoom1();
        back->zoom2();
        QTimer::singleShot(250,this,[=]{
            emit this->Chooseback();
        });
    });
}

void PlayScene::keyPressEvent(QKeyEvent *e)
{
    mrule->keyboard(e);
    mrule->step--;
}

void PlayScene::paintEvent(QPaintEvent *)
{
    painter->begin(this);
    mrule->drawmap(painter);
    if(mrule->gameover()==1){
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.setPen(Qt::NoPen);
        painter.setBrush(Qt::black);
        painter.drawRect(rect());

        QFont font("Arial", 64);
        painter.setFont(font);
        painter.setPen(Qt::white);
        painter.drawText(rect(), Qt::AlignCenter, "YOU WIN");
        mrule->step = 100;
        QTimer::singleShot(2000,this,[=](){

            emit this->Chooseback();
        });
    }
    if(mrule->step < 0){
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.setPen(Qt::NoPen);
        painter.setBrush(Qt::black);
        painter.drawRect(rect());

        QFont font("Arial", 64);
        painter.setFont(font);
        painter.setPen(Qt::white);
        painter.drawText(rect(), Qt::AlignCenter, "YOU LOSE");

        QTimer::singleShot(2000,this,[=](){
            emit this->Chooseback();
        });
    }
    painter->end();
    update();
}
