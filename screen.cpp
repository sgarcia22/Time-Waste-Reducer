#include "screen.h"
#include <QDesktopWidget>
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QRect>

screen::screen(int width, int height)
{

       scene = new QGraphicsScene();
       view = new QGraphicsView();

       widthApp = width;
       heightApp = height;

       setName();
       resize (width, height);
       setPosition(width, height);


}

void resize (int width, int height) {

   // view->setFixedSize(width, height);

}

void setPosition(int width, int height) {

    //Setting Position of Screen
   /* screenSize = QApplication::desktop()->screenGeometry();
    heightScreen = screenSize.height();
    widthScreen = screenSize.width();
    this->move(widthScreen - (widthApp * 2), heightScreen - (heightApp / 2)); */


}

void setName() {

    //Setting Name of Window
    //this->setWindowTitle("Foxis");

}
