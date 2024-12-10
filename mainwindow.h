#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;

    double calculateMillingTime(double lengthofCut, double numberOfPasses, double feed, double rpm);
    double calculateRPM(double cuttingSpeed, double diameter);
    double calculateTurningTime(double lenght, double numberOfPasses, double feed, double rpm);
};
#endif // MAINWINDOW_H
