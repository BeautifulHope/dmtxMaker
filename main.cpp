#include "widget.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QString text = argv[1];

    QApplication a(argc, argv);
    Widget w;

    if(text.isEmpty())
    {
        w.show();
    }
    else
    {
        w.moduleSize = -1;
        w.marginSize = -1;

        w.GenerImage(text);
        w.SaveImage(0);

        return 0;
    }

    return a.exec();
}
