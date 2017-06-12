#ifndef SCREEN_H
#define SCREEN_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QRect>

class screen : public QGraphicsView
{


public:

    screen(int width, int height);

    QGraphicsScene * scene;
    QGraphicsView * view;

    void setName();
    void resize (int width, int height);
    void setPosition(int width, int height);




private:

    int widthApp;
    int heightApp;
    int widthScreen;
    int heightScreen;
    QRect screenSize;
    //string nameOfApp = "Foxis";

};

#endif // SCREEN_H
