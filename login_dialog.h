#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QMessageBox>
namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();
signals:
    void isClosed(bool);
private slots:
    void pushButton_Login_clicked();
    void pushButton_Cancel_clicked();
private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
