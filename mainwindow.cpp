#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_LoginDialog = new LoginDialog(this);
    connect (m_LoginDialog,SIGNAL(isClosed(bool)),this,SLOT(login_Canceled(bool)));
    m_LoginDialog->exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//SLOTS

void MainWindow::login_Canceled(bool isCanceled)
{
//    QMessageBox::information(NULL,"Warning","Path : Already Exist");
    if(isCanceled==true)
    {
//        QMessageBox::information(NULL,"Warning","Path : Already Exist");
//      QApplication::quit(); // Didn't worked.
        exit(0);
    }
}
