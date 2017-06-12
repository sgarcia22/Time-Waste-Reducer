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

    int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR pCmdLine, int iCmdShow);
    BOOL CALLBACK EnumWindowsProc(HWND hwnd, LPARAM lparam);

    ~selectionWindows();

    MainWindow* wCombo;
    QComboBox * comboBox;

private:

    int height = 25;
    int width = 200;

    int placementX = 100;
    int placementY = 25;


};

#endif // SELECTIONWINDOWS_H
