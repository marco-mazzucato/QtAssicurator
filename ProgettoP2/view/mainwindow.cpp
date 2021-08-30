#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setMinimumSize(QSize(1280,720));
    resize(QSize(1280,720));
    view=new mainwindowview;
    setCentralWidget(view);
    view->setScene(new viewScene());
}

MainWindow::~MainWindow()
{
}

