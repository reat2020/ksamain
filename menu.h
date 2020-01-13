#ifndef MENU_H
#define MENU_H

#include <QDialog>

namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = 0);
    ~menu();

signals:
    void del();
    void u_editor_start();

private slots:
    void on_pushButton_pressed();

    void on_quitB_2_pressed();

    void on_quitB_clicked();

    void on_quitB_7_clicked();

private:
    Ui::menu *ui;
};

#endif // MENU_H
