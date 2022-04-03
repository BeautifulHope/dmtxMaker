#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QImage>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    void GenerImage(QString str);
    void SaveImage(int mode);

public:
    QImage globalImg;//存储图片用
    QImage globalImg2;//存储图片用
    QString globastr;//保存str信息

    int moduleSize = 0;
    int marginSize = 0;


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
