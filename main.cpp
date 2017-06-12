#include "mainwindow.h"
#include "timer.h"
#include "state.h"
#include "selectionwindows.h"

#include <QApplication>
#include <QString>
#include <QLabel>
#include <QSizePolicy>
#include <QDebug>


///The main purpose of this application is to help computer users stop getting distracted
/// When doing a task or work. The pop up application will appear on the bottom right
/// and will signal an alarm when the user switches windows, encouraging them to stick
/// to their task.
/// To incentivize them the more time they spend on the specific window the more coins they
/// receive, allowing them to customize the gui pop-up.

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow* w = new MainWindow();
    w->bringToTop();

    //Make a new timer that shows the current time
    timer* displayTime = new timer();
    displayTime->displayTime(w);
    state * currentState = new state();
    //TODO: While the program is running -> timer?
    //Must destroy previous selection window and make another one if so
    if ((currentState->currentlyRunning) == false) {
          selectionWindows * currentWindows = new selectionWindows(w);
          currentWindows->addWindows();
          currentState->currentlyRunning = true;
    }

    return a.exec();
}
