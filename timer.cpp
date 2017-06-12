#include "timer.h"

#include <QLabel>
#include <time.h>
#include <QTimer>
#include <QString>
#include <QDebug>
#include <QPalette>
#include <QHBoxLayout>

void timer::displayTime(MainWindow *w)
{
    openW = w;

    //Change the color of the text
    colorOfText.setColor(QPalette::WindowText, Qt::white);

    //Label to show the time
    currentTimeDisplay = new QLabel(openW);
    //Timer so that the time updates
    QTimer* timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(calculateTime()));
    timer->start(1000);

}

void timer::calculateTime()
{

    //Calculates Local Time
    time_t rawTime;
    struct tm * timeInfo;
    time (&rawTime);
    timeInfo = localtime (&rawTime);

    QString currentTime = "Current Time: ";
    currentTime += asctime(timeInfo);
    //This is to remove the \n that appears in the QString
    currentTime.chop(1);
    qDebug() << currentTime;

    currentTimeDisplay->resize(uiWidth, uiHeight);
    currentTimeDisplay->setText(currentTime);
    currentTimeDisplay->setPalette(colorOfText);
    currentTimeDisplay->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
    currentTimeDisplay->setAlignment(Qt::AlignTop);
    currentTimeDisplay->setAlignment(Qt::AlignHCenter);
    openW->show();


}
