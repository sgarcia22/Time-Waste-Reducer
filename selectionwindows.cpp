#include "selectionwindows.h"

#include <QComboBox>
#include <QLineEdit>
#include <QDebug>
#include <windows.h>
#include <iostream>

selectionWindows::selectionWindows(MainWindow * w)
{
    //Make a drop down button with open windows
    wCombo = w;

    comboBox = new QComboBox(w);
    comboBox->setEditable(true);
    comboBox->lineEdit()->setReadOnly(true);
    comboBox->lineEdit()->setAlignment(Qt::AlignHCenter);
    comboBox->lineEdit()->setAlignment(Qt::AlignCenter);
    comboBox->resize(width, height);
    comboBox->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
    comboBox->move(placementX, placementY);
    comboBox->setStyleSheet("QComboBox { background-color: azure; }");
    comboBox->addItem("Add/Remove Programs");
}

//To get the list of open windows
//Take in handle to the window and a 64-bit signed value
BOOL CALLBACK selectionWindows::EnumWindowsProc(HWND hWnd, long lParam) {

   /* TCHAR class_name[80];
    TCHAR title[80];

    GetClassName(hwnd, class_name, sizeof(class_name));
    GetWindowText(hwnd, title, sizeof(title));
    qDebug()<<"Window title: "<<title;
    qDebug()<<"Class name: "<<class_name;

    return true;*/

    if (IsWindowVisible(hWnd))
        GetWindowText(hWnd, (LPWSTR) buff, 254);
    return true;

}

/*int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR pCmdLine, int iCmdShow)
{
    EnumWindows(EnumWindowsProc, 0);


    return 0;
}*/


void selectionWindows::addWindows() {

    //Loop that adds items in ComboBox until all  windows put on
   EnumWindows(EnumWindowsProc, 0);
               //EnumWindowsProc());

    for (int i = 0; i  != 254; ++i) {
        qDebug() << buff[i];
    }



    //Aligns all data to the center
    for (int i = 0 ; i < comboBox->count() ; ++i) {
        comboBox->setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole);
    }
    wCombo->show();

    // getch();


}

selectionWindows::~selectionWindows()
{

}


