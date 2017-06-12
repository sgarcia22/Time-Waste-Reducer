#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDesktopWidget>
#include <QRect>
#include <QLabel>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setStyleSheet("background-color: black;");

    this->setFixedSize(uiWidth, uiHeight);

    //Setting Position of Screen
    screenSize = QApplication::desktop()->screenGeometry();
    height = screenSize.height();
    width = screenSize.width();
    this->move(width - (uiWidth) - 5, height - (uiHeight) - 45);

    //Setting Name of Window
    this->setWindowTitle("Foxis");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::bringToTop()
{

    Qt::WindowFlags flags = this->windowFlags();
    this->setWindowFlags (flags | Qt::WindowStaysOnTopHint);

}
