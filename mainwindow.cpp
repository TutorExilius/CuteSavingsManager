#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow( QWidget *parent )
: QMainWindow{ parent }
, ui{ new Ui::MainWindow }
{
    this->ui->setupUi( this );
}

MainWindow::~MainWindow()
{
    delete this->ui;
}

