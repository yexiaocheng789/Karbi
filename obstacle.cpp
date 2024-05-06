#include "obstacle.h"
#include <QDebug>

Obstacle::Obstacle(int x,int y,int width,int height){
    this->x=x;
    this->y=y;
    this->width=width;
    this->height=height;
}
int Obstacle::getX(){
    return this->x;
}
int Obstacle::getY(){
    return this->y;
}
void Obstacle::setX(int x){
    this->x=x;
}
void Obstacle::setY(int y){
    this->y=y;
}
void Obstacle::executeMove(int dx,int dy){
    this->x+=dx;
    this->y+=dy;
}
int Obstacle::getWidth(){
    return this->width;
}
int Obstacle::getHeight(){
    return this->height;
}
bool Obstacle::isCollision(int px,int py,int pwidth,int pheight){return false;}
void Obstacle::move(){}
bool Obstacle::done(){return false;}
QPixmap Obstacle::getImg(){QPixmap a;return a;}

//////////////////////  墙体 /////////////////////

Wall::Wall(int x,int y,int width,int height)
    :Obstacle(x,y,width,height){
    srand(time(NULL));
    this->img.load(QString(":/res/wall%1.png").arg(rand()%2+1));//随机选择墙体
}

QPixmap Wall::getImg(){
    return this->img;
}

//碰撞检测
bool Wall::isCollision(int px,int py,int pwidth,int pheight){
    QRect rect1(this->getX(),this->getY(),this->getWidth(),this->getHeight());
    QRect rect2(px,py,pwidth,pheight);
    return rect1.intersects(rect2);//相交
}

//墙体向左移动
void Wall::move(){
    this->executeMove(-5,0);
}

//移动到左边后消失
bool Wall::done(){
    if(this->getX()<=-this->getWidth())
        return true;
    else return false;
}



//////////////////////齿轮/////////////////////
Circle::Circle(int x,int y,int width,int height)
    :Obstacle(x,y,width,width){     //此处的xy表示左上角坐标
    this->img.load(":/res/circle.png");
    img.scaled(width,width);
    this->r=width/2;//设置半径
    this->CollisionWidth=width*0.7;
    this->CollisionDX=width*0.15;
}
QPixmap Circle::getImg(){
    QMatrix m;//用于进行图像的变换操作
    degree+=2;//角度每次+2
    if(degree>=360) degree=0;//当角度大于360时候，角度归零
    m.rotate(degree);//添加角度变换
    return this->img.transformed(m, Qt::FastTransformation);//返回变换后的图像
}
//碰撞检测
bool Circle::isCollision(int px,int py,int pwidth,int pheight){
    QRect rect1(this->getX()+CollisionDX,this->getY()+CollisionDX,CollisionWidth,CollisionWidth);
    QRect rect2(px,py,pwidth,pheight);
    return rect1.intersects(rect2);
}

//向左移动
void Circle::move(){
    this->executeMove(-7,0);
}

//清除
bool Circle::done(){
    if(this->getX()<=-this->getWidth()) return true;
    else return false;
}

////////////////////// 箭 /////////////////////
Arrow::Arrow(int x,int y,int width,int height)
    :Obstacle(x,y,width,height){
    this->arrowImg.load(":/res/fire.png");
    this->warningImg.load(":/res/arrowWarning.png");
    arrowImg.scaled(width,height);
}

QPixmap Arrow::getImg(){
    if(liveFrame<=occurFrame)
        return this->warningImg;
    else
        return this->arrowImg;
}

bool Arrow::isCollision(int px,int py,int pwidth,int pheight){
    QRect rect1(this->getX(),this->getY()-20,256,120);
    QRect rect2(px,py,pwidth,pheight);
    return liveFrame>=occurFrame && rect1.intersects(rect2);
}

void Arrow::move(){
    this->liveFrame++;
    if(this->liveFrame==this->occurFrame) this->setX(-arrowImg.width());
    if(this->liveFrame>=this->occurFrame) this->executeMove(20,0);
}
bool Arrow::done(){
    return this->getX()>1200;       //改窗口大小时候注意这里哦
}

