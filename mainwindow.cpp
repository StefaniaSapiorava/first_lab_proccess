#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QColor>
#include <QColorDialog>
#include <QString>
#include <QSlider>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBox->addItem("1.RGB-LAB-CMYK");
    ui->comboBox->addItem("2.RGB-CMYK-HLS");
    ui->comboBox->addItem("3.RGB-XYZ-LAB");
    ui->comboBox->addItem("4.RGB-HSV-LAB");
    ui->comboBox->addItem("5.CMYK-LAB-HSV");
    ui->comboBox->addItem("6.CMYK-RGB-HLS");
    ui->comboBox->addItem("7.CMYK-RGB-HSV");
    ui->comboBox->addItem("8.RGB-XYZ-HSV");
    ui->comboBox->addItem("9.HSV-XYZ-LAB");
    ui->comboBox->addItem("10.CMYK-LAB-RGB");
    ui->comboBox->addItem("11.XYZ-LAB-HLS");
    ui->comboBox->addItem("12.RGB-XYZ-HLS");
    ui->comboBox->addItem("13.RGB-XYZ-CMYK");
    ui->comboBox->addItem("14.CMYK-LAB-XYZ");
    ui->comboBox->addItem("15.RGB-CMYK-HSV");
    ui->comboBox->addItem("16.CMYK-HLS-XYZ");
    ui->comboBox->addItem("17.RGB-HLS-LAB");
    ui->comboBox->addItem("18.CMYK-XYZ-RGB");

    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(indexChanged(int)));

    connect(ui->horizontalSlider_1,&QSlider::sliderMoved,this,[=]{changeLinesValues();});
    connect(ui->lineEdit_1,&QLineEdit::textChanged,this,[=]{changeSlidersValues();});
    connect(ui->horizontalSlider_2,&QSlider::sliderMoved,this,[=]{changeLinesValues();});
    connect(ui->lineEdit_2,&QLineEdit::textChanged,this,[=]{changeSlidersValues();});
    connect(ui->horizontalSlider_3,&QSlider::sliderMoved,this,[=]{changeLinesValues();});
    connect(ui->lineEdit_3,&QLineEdit::textChanged,this,[=]{changeSlidersValues();});

    connect(ui->horizontalSlider_4,&QSlider::sliderMoved,this,[=]{changeLinesValues();});
    connect(ui->lineEdit_4,&QLineEdit::textChanged,this,[=]{changeSlidersValues();});
    connect(ui->horizontalSlider_5,&QSlider::sliderMoved,this,[=]{changeLinesValues();});
    connect(ui->lineEdit_5,&QLineEdit::textChanged,this,[=]{changeSlidersValues();});
    connect(ui->horizontalSlider_6,&QSlider::sliderMoved,this,[=]{changeLinesValues();});
    connect(ui->lineEdit_6,&QLineEdit::textChanged,this,[=]{changeSlidersValues();});

    connect(ui->horizontalSlider_7,&QSlider::sliderMoved,this,[=]{changeLinesValues();});
    connect(ui->lineEdit_7,&QLineEdit::textChanged,this,[=]{changeSlidersValues();});
    connect(ui->horizontalSlider_8,&QSlider::sliderMoved,this,[=]{changeLinesValues();});
    connect(ui->lineEdit_8,&QLineEdit::textChanged,this,[=]{changeSlidersValues();});
    connect(ui->horizontalSlider_9,&QSlider::sliderMoved,this,[=]{changeLinesValues();});
    connect(ui->lineEdit_9,&QLineEdit::textChanged,this,[=]{changeSlidersValues();});
    connect(ui->horizontalSlider_10,&QSlider::sliderMoved,this,[=]{changeLinesValues();});
    connect(ui->lineEdit_10,&QLineEdit::textChanged,this,[=]{changeSlidersValues();});
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event){

    QPainter painter(this);
    painter.setPen(QColor(0, 0, 0));
    painter.setBrush(color);
    painter.drawRect(QRect(rectX, 10, 80, 80));
}
void MainWindow::indexChanged(int index)
{
}


void MainWindow::on_pushButton_clicked()
{
    QColorDialog *colordialog = new QColorDialog;
    color = QColorDialog::getColor();
    rValueRGB = color.red();
    gValueRGB = color.green();
    bValueRGB = color.blue();
    setRGBvalues();
}

void MainWindow::setRGBvalues()
{
    ui->lineEdit_1->setText(QString::number(rValueRGB));
    ui->lineEdit_2->setText(QString::number(gValueRGB));
    ui->lineEdit_3->setText(QString::number(bValueRGB));
    ui->horizontalSlider_1->setValue(rValueRGB);
    ui->horizontalSlider_2->setValue(gValueRGB);
    ui->horizontalSlider_3->setValue(bValueRGB);

}

void MainWindow::changeValues()
{
    ui->lineEdit_1->setText(QString::number(rValueRGB));
    ui->lineEdit_2->setText(QString::number(gValueRGB));
    ui->lineEdit_3->setText(QString::number(bValueRGB));
}

void MainWindow::changeLinesValues()
{
    rValueRGB =ui->horizontalSlider_1->value();

    gValueRGB =ui->horizontalSlider_2->value();

    bValueRGB=ui->horizontalSlider_3->value();


    changeValues();

    color = QColor(rValueRGB, gValueRGB, bValueRGB);

    int val4=ui->horizontalSlider_4->value();
    ui->lineEdit_4->setText(QString::number(val4));
    int val5=ui->horizontalSlider_5->value();
    ui->lineEdit_5->setText(QString::number(val5));
    int val6=ui->horizontalSlider_6->value();
    ui->lineEdit_6->setText(QString::number(val6));

    int val7=ui->horizontalSlider_7->value();
    ui->lineEdit_7->setText(QString::number(val7));
    int val8=ui->horizontalSlider_8->value();
    ui->lineEdit_8->setText(QString::number(val8));
    int val9=ui->horizontalSlider_9->value();
    ui->lineEdit_9->setText(QString::number(val9));
    int val10=ui->horizontalSlider_10->value();
    ui->lineEdit_10->setText(QString::number(val10));
}

void MainWindow::changeSlidersValues()
{
    int val1=ui->lineEdit_1->text().toInt();
    ui->horizontalSlider_1->setValue(val1);
    int val2=ui->lineEdit_2->text().toInt();
    ui->horizontalSlider_2->setValue(val2);
    int val3=ui->lineEdit_3->text().toInt();
    ui->horizontalSlider_3->setValue(val3);

    color = QColor(val1, val2, val3);

    int val4=ui->lineEdit_4->text().toInt();
    ui->horizontalSlider_4->setValue(val4);
    int val5=ui->lineEdit_5->text().toInt();
    ui->horizontalSlider_5->setValue(val5);
    int val6=ui->lineEdit_6->text().toInt();
    ui->horizontalSlider_6->setValue(val6);

    int val7=ui->lineEdit_7->text().toInt();
    ui->horizontalSlider_7->setValue(val7);
    int val8=ui->lineEdit_8->text().toInt();
    ui->horizontalSlider_8->setValue(val8);
    int val9=ui->lineEdit_9->text().toInt();
    ui->horizontalSlider_9->setValue(val9);
    int val10=ui->lineEdit_10->text().toInt();
    ui->horizontalSlider_10->setValue(val10);
}


