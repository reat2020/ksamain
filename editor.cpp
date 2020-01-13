/* Uchebny editor */

#include "editor.h"
#include "ui_editor.h"

editor::editor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editor)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(QIcon(":images/BBack.png"));
    ui->pushButton_2->setIcon(QIcon(":images/Save.png"));
    ui->pushButton_3->setIcon(QIcon(":images/Grenade.png"));
    ui->pushButton_4->setIcon(QIcon(":images/Door1.png"));
    ui->pushButton_5->setIcon(QIcon(":images/Door.png"));
//    ui->pushButton_6->setIcon(QIcon(":images/Sign.png"));
    ui->pushButton_7->setIcon(QIcon(":images/Rotate.png"));
    ui->pushButton_8->setIcon(QIcon(":images/Delete.png"));
    ui->pushButton_9->setIcon(QIcon(":images/B524-2_s.png"));
    ui->pushButton_10->setIcon(QIcon(":images/9960_s.png"));
    ui->pushButton_11->setIcon(QIcon(":images/2AP.png"));
    ui->pushButton_12->setIcon(QIcon(":images/APTK.png"));
    /* Vitya */
}

editor::~editor()
{
    delete ui;
}

void editor::on_pushButton_clicked()
{
    Q_EMIT del();
}
