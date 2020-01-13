#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);

    ui->quitB->setIcon(QIcon(":images/BBack.png"));
    ui->quitB->setText("Exit");

    QPixmap bitmap = QPixmap( ":images/FirmLogo.png" );
    ui->LabelR->setPixmap(bitmap.scaledToWidth(200, Qt::FastTransformation));
    ui->label->setText("Menu");

    ui->quitB_5->setIcon(QIcon(":images/BTU.png"));
    ui->quitB_5->setText("Proverka po TU");
    ui->quitB_5->setStyleSheet("text-align: left;");

    ui->pushButton_2->setIcon(QIcon(":images/BTech.png"));
    ui->pushButton_2->setText("Technologichesky");
    ui->pushButton_2->setStyleSheet("text-align: left;");

    ui->pushButton->setIcon(QIcon(":images/BLearn.png"));
    ui->pushButton->setText("Uchebny");
    ui->pushButton->setStyleSheet("text-align: left;");

    ui->quitB_2->setIcon(QIcon(":images/Indication.png"));
    ui->quitB_2->setText("Indikatorny");
    ui->quitB_2->setStyleSheet("text-align: left;");

    ui->quitB_7->setIcon(QIcon(":images/BTools.png"));
    ui->quitB_7->setText("Nastroyka (U)");
    ui->quitB_7->setStyleSheet("text-align: left;");

    ui->quitB_6->setIcon(QIcon(":images/BTools.png"));
    ui->quitB_6->setText("Nastroyka (I)");
    ui->quitB_6->setStyleSheet("text-align: left;");
  /*  ui->quitB_6->setEnabled(false); */
}

menu::~menu()
{
    delete ui;
}

void menu::on_pushButton_pressed()
{
    ui->pushButton->setCheckable(false);
    ui->pushButton_2->setCheckable(true);
}

void menu::on_quitB_2_pressed()
{
    ui->pushButton->setCheckable(true);
    ui->pushButton_2->setCheckable(false);
}

void menu::on_quitB_clicked()
{
    Q_EMIT del();
}

void menu::on_quitB_7_clicked()
{
    Q_EMIT u_editor_start();
}
