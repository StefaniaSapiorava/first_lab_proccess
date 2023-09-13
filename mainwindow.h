#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPainter>
#include<QComboBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void paintEvent(QPaintEvent *event);

private slots:
    void indexChanged(int index);
    void on_pushButton_clicked();
    void setRGBvalues();
    void changeValues();
    void changeLinesValues();
    void changeSlidersValues();

private:
    QColor color = QColor(255, 255, 255);

    int rectX = 10;

    double rValueRGB = 255;
    double gValueRGB = 255;
    double bValueRGB = 255;

    double cValueCMYK = 0;
    double mValueCMYK = 0;
    double yValueCMYK = 0;
    double kValueCMYK = 0;

    double lValueLAB = 100;
    double aValueLAB = 0;
    double bValueLAB = 0;

    double hValueHSL = 100;
    double sValueHSL = 0;
    double lValueHSL = 0;

    double hValueHSV = 0;
    double sValueHSV = 0;
    double vValueHSV = 100;

    double xValueXYZ = 0;
    double yValueXYZ = 0;
    double zValueXYZ = 100;


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
