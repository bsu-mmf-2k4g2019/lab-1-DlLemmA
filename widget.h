#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void on_pushButton_clicked();

    void on_spinbox__lab_1_valueChanged(int arg1);

    void on_spinbox__lab_2_valueChanged(int arg1);

    void on_spinbox__lab_3_valueChanged(int arg1);

    void on_spinbox__exam_valueChanged(int arg1);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
