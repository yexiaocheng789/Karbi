#ifndef RULE_H
#define RULE_H
#include <QPainter>
#include <QEvent>
#include <QKeyEvent>
#include <QString>
#include <QRect>
#include <QImage>
#include <QPixmap>
#include "gamedata.h"
#include "config.h"

class Rule
{
public:
    Rule(int index);
    void drawmap(QPainter *pDraw);

    void keyboard(QKeyEvent *e);

    void updata(int x0, int y0, int x1, int y1, int x2, int y2);

    int gameover();

    int manX;
    int manY;
    int step;
    int levelindex;
protected:
    int mMap[12][12];
signals:

};

#endif // RULE_H
