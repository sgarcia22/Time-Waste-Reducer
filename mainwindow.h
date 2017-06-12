#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRect>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void bringToTop();

    int uiHeight = 200;
    int uiWidth = 400;

private:
    Ui::MainWindow *ui;
    int height;
    int width;
    QRect screenSize;
};

#endif // MAINWINDOW_H
