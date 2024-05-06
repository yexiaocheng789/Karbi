#ifndef CHOOSESCENE_H
#define CHOOSESCENE_H

#include <QMainWindow>
#include "playscene.h"
#include "ex_scene.h"
class ChooseScene : public QMainWindow
{
    Q_OBJECT
public:
    explicit ChooseScene(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);

    PlayScene *pScene;
    EX_Scene *exgame;
signals:
    void Chooseback();
public slots:

};

#endif // CHOOSESCENE_H
