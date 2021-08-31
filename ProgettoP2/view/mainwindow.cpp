#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), view(new mainwindowview()), m(new Assicurati()), ac(new addController(m)), cc(new contractController(m)), mc(new mainController()), c(mc)
{
    setMinimumSize(QSize(1280,720));
    resize(QSize(1280,720));
    setCentralWidget(view);
    view->setScene(c->getScene());
    connect(ac, &addController::changeScene, this, &MainWindow::updateScene);
    connect(mc, &mainController::changeScene, this, &MainWindow::updateScene);
    connect(cc, &contractController::changeScene, this, &MainWindow::updateScene);
}

MainWindow::~MainWindow()
{
}

void MainWindow::updateScene(char ch)
{
    switch(ch){
        case 'm':
            c=mc;
        break;
        case 'a':
            c=ac;
        break;
        case 'v':
            c=cc;
        break;
    }
    view->setScene(c->getScene());
}

