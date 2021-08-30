#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainwindowview.h"
#include "mainscene.h"
#include "addscene.h"
#include "viewscene.h"
#include "controller/addcontroller.h"
//#include "controller/listcontroller.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    mainwindowview* view;
    //Assicurati* m;
    //addcontroller* ac;
    //listcontroller* lc;
    controller* c;

public slots:
    void updateScene(char);

};
#endif // MAINWINDOW_H
