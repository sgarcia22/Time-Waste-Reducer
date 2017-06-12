#ifndef TIMER_H
#define TIMER_H

#include "mainwindow.h"

#include <QWidget>
#include <QString>
#include <QLabel>
#include <mainwindow.h>
#include <QPalette>

class timer: public QWidget
{
    Q_OBJECT

    public:

        void displayTime(MainWindow* w);

        MainWindow* openW;
        QLabel* currentTimeDisplay;

    public Q_SLOTS:
         void calculateTime();

    private:

         int uiHeight = 200;
         int uiWidth = 400;

         QPalette colorOfText;


};

#endif // TIMER_H
