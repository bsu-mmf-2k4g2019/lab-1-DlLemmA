#include "widget.h"
#include "ui_widget.h"


#include <QSpinBox>
#include <QLabel>
#include <QVBoxLayout>
#include <QFile>
#include <QtGlobal>



Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->spinbox__lab_1->setRange(1,10);
    ui->spinbox__lab_2->setRange(1,10);
    ui->spinbox__lab_3->setRange(1,10);
    ui->spinbox__exam->setRange(1,10);
}

Widget::~Widget()
{
    delete ui;
}

int lab_1, lab_2, lab_3, exam = 0;

void Widget::on_spinbox__lab_1_valueChanged(int arg1)
{
    lab_1 = arg1;
    ui->Sessional->display(0);
    ui->Total->display(0);
}

void Widget::on_spinbox__lab_2_valueChanged(int arg1)
{
    lab_2 = arg1;
    ui->Sessional->display(0);
    ui->Total->display(0);
}

void Widget::on_spinbox__lab_3_valueChanged(int arg1)
{
    lab_3 = arg1;
    ui->Sessional->display(0);
    ui->Total->display(0);
}


void Widget::on_spinbox__exam_valueChanged(int arg1)
{
    exam = arg1;
    ui->Sessional->display(0);
    ui->Total->display(0);
}



void Widget::on_pushButton_clicked()
{
    ui->Sessional->display(qRound((double)(lab_1+lab_2+lab_3)/3));
    ui->Total->display(qRound((double)(lab_1+lab_2+lab_3)/3*0.4+ exam * 0.6));
}
