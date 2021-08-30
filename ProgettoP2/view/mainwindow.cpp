#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), view(new mainwindowview()), /*m(new Assicurati()), ac(new addController(m)), lc(new listcontroller(m)),*/ c(new addController)
{
    setMinimumSize(QSize(1280,720));
    resize(QSize(1280,720));
    setCentralWidget(view);
    view->setScene(c->getScene());
}

MainWindow::~MainWindow()
{
}

void MainWindow::updateScene(char ch)
{
    if(c)
        delete c;
    switch(ch){
        case 'm':
        break;
        case 'a':
        break;
        case 'v':
        break;
    }
    view->setScene(c->getScene());
    connect(c, &controller::changeScene, this, &MainWindow::updateScene);
}

