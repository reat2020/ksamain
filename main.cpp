#include "ksamain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ksamain w;
    w.setFixedSize(1280, 768);
    QBrush br;//(Qt::TexturePattern);
    br.setTextureImage(QImage(":images/Wallpaper.png"));
    QPalette plt = w.palette();
    plt.setBrush(QPalette::Background, br);
    w.setPalette(plt);
    w.show();

    return a.exec();
}
