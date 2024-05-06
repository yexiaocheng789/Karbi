#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <qwidget.h>
#include <QPainter>
#include <QPaintEvent>
#include <QTimer>
#include <vector>
#include <obstacle.h>
class Kirby;
class EX_Scene : public QWidget
{
    Q_OBJECT
private:
    bool pauseState=false;
    Kirby *r=NULL;
    std::vector<Obstacle*> curObstacle;//障碍数组
    bool gameIsRun=false,GameOver=false,GameWin=false;
    bool upKey=false,downKey=false,leftKey=false,rightKey=false;
    QTimer fps;
    int groundY;
    QPixmap pauseImg;
    QPixmap winImg;
    QPixmap groundImg;
    double groundImgSpeed=5;
    double curgroundImgX=0;
    QPixmap gameOverImg;
    enum obstacleSort{SORT_WALL=1,SORT_CIRCLE,SORT_Arrow};//枚举


public:
    EX_Scene();
    void paintEvent(QPaintEvent *);
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    void startOneGame();
    int getGroundY();
    void addObstacles();
    void addAObstacle();
    void gameIsOver();
    void gameIsWin();
    void pauseGame();
    void continueGame();

signals:

};

#endif // GAMEWIDGET_H
