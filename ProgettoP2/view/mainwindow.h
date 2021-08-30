#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainwindowview.h"
#include "mainscene.h"
#include "addscene.h"
#include "viewscene.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    mainwindowview* view;
};
#endif // MAINWINDOW_H
