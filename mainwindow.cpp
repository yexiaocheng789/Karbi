#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qpainter.h>
#include <mypushbutton.h>
#include <qtimer.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionquit,&QAction::triggered,[=](){
        this->close();
    });

    this->setFixedSize(1200,1200);
    this->setWindowTitle("星之卡比之恶魔城寻宝之旅");
    this->setWindowIcon(QPixmap(":/res/icon.png"));

    //选关场景
    this->choosescene = new ChooseScene;

    MPushButton *StartBtn = new MPushButton(QString(":/res/normalbtn.png"));
    StartBtn->setParent(this);
    StartBtn->move(this->width()*0.5-StartBtn->width()*0.5,this->height()*0.7);

    connect(StartBtn,&MPushButton::clicked,[=](){
        StartBtn->zoom1();
        StartBtn->zoom2();
        QTimer::singleShot(150,this,[=](){
            this->choosescene->show();
            this->hide();
        });
    });

    //监听选关场景中的返回按钮信号
    connect(this->choosescene,&ChooseScene::Chooseback,[=](){

        this->show();
        this->choosescene->hide();
    });

}


void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(QString(":/res/back.png"));
    painter.drawPixmap(0,0,this->width(),this->height(),pix);


}

MainWindow::~MainWindow()
{
    delete ui;
}

