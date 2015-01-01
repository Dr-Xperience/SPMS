#include "login_dialog.h"
#include "ui_login_dialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent,Qt::FramelessWindowHint),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    connect(ui->pushButton_Login,SIGNAL(clicked()),this,SLOT(pushButton_Login_clicked()));
    connect(ui->pushButton_Cancel,SIGNAL(clicked()),this,SLOT(pushButton_Cancel_clicked()));
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::pushButton_Login_clicked()
{
//    else
//    {
        QMessageBox::information(NULL,"Warning","Path : Already Exist");
//    }
}

void LoginDialog::pushButton_Cancel_clicked()
{
//    else
//    {
//        MainWindow::close();
       isClosed(this->close());
//    }
}
