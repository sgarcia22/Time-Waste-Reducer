#ifndef SELECTIONWINDOWS_H
#define SELECTIONWINDOWS_H

#include <windows.h>
#include "mainwindow.h"

#include <QComboBox>
#include <QWidget>
#include <iostream>



class selectionWindows : public QWidget
{
    Q_OBJECT

public:

    selectionWindows(MainWindow * w);
    void selectionWindows::addWindows();

  // int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR pCmdLine, int iCmdShow);
   static BOOL CALLBACK EnumWindowsProc(HWND hWnd, long lparam);

    ~selectionWindows();

    MainWindow* wCombo;
    QComboBox * comboBox;

private:

    int height = 25;
    int width = 200;

    int placementX = 100;
    int placementY = 25;

    char buff[255];


};

#endif // SELECTIONWINDOWS_H
