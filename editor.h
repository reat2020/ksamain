#ifndef EDITOR_H
#define EDITOR_H

#include <QWidget>

namespace Ui {
class editor;
}

class editor : public QWidget
{
    Q_OBJECT

signals:
    void del();

public:
    explicit editor(QWidget *parent = 0);
    ~editor();

private slots:
    void on_pushButton_clicked();

private:
    Ui::editor *ui;
};

#endif // EDITOR_H
