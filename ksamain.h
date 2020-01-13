#ifndef KSAMAIN_H
#define KSAMAIN_H

#include <QMainWindow>
#include <QTimer>
#include "menu.h"
#include "editor.h"

namespace Ui {
class ksamain;
}

namespace Ui2 {
class menu;
}

class ksamain : public QMainWindow
{
    Q_OBJECT

public:
    explicit ksamain(QWidget *parent = 0);
    ~ksamain();

private:
    Ui::ksamain *ui;
    QTimer * timer1;
    quint8 quit_flag;
    bool half;
    quint8 quit_cnt;
    quint8 quit_timer;
    menu * menu_m;
    editor * u_editor;
 //   editor * i_editor;




private slots:
    void clockproc();
    void menu_quit();
    void on_menuButton_clicked();
    void exit_slot();
    void u_editor_start();
};

#endif // KSAMAIN_H
