#include "ksamain.h"
#include "ui_ksamain.h"
#include <QTime>
#include <QDate>
#include <QDebug>

ksamain::ksamain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ksamain)
{
    ui->setupUi(this);
    ui->menuButton->setText("");
    ui->menuButton->setStyleSheet("QPushButton { background: none; border: none; outline: none; color: transparent; } ");

    timer1 = new QTimer(this);

    connect(timer1, SIGNAL(timeout()), this, SLOT(clockproc()));

    menu_m = new menu(this);

    connect(menu_m, SIGNAL(del()), this, SLOT(menu_quit()));

    menu_m->close();

    u_editor = new editor(this);

    connect(u_editor, SIGNAL(del()), this, SLOT(exit_slot()));
    connect(menu_m, SIGNAL(u_editor_start()), this, SLOT(u_editor_start()));

    u_editor->close();

    half = false;

    quit_cnt = 0;
    quit_flag = 0;
    quit_timer = 0;

    timer1->start(500);
}

ksamain::~ksamain()
{
    delete ui;
}

void ksamain::clockproc()
{
    half ^= true;
    if(half)
    {
        QTime time = QTime::currentTime();
        QDate date = QDate::currentDate();

        ui->Time->setText(time.toString("hh:mm:ss"));
        ui->Date->setText(date.toString("dd:MM:yyyy"));

        if(quit_flag == 1)
        {
            quit_timer ++;
            if (quit_timer > 2)
            {
                quit_cnt = 0;
                quit_flag = 0;
                quit_timer = 0;
            }
        }
    }

}

void ksamain::on_menuButton_clicked()
{
    quit_flag = 1;
    quit_cnt++;
    quit_timer = 0;
    if(quit_cnt >= 5)
    {
       // QApplication::instance()->quit();
        menu_m->show();
    }
}

void ksamain::menu_quit()
{
    menu_m->close();
    menu_m->setParent(NULL);
   // delete menu_m;
}

void ksamain::exit_slot()
{
    u_editor->close();
    u_editor->setParent(NULL);
}

void ksamain::u_editor_start()
{
 //   qDebug() << "Ueditor show";
    u_editor->show();
}
