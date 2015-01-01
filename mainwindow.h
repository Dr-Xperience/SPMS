#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <login_dialog.h>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
     void login_Canceled(bool);
private:
    Ui::MainWindow *ui;

protected:
    LoginDialog *m_LoginDialog;

};

#endif // MAINWINDOW_H
