#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

double MainWindow::calculateMillingTime(double lengthOfCut, double numberOfPasses, double feed, double rpm)
{
    return (lengthOfCut * numberOfPasses) / (feed * rpm);
}

double MainWindow::calculateRPM(double cuttingSpeed, double diameter)
{
    return (1000 * cuttingSpeed) / (M_PI * diameter);
}

double MainWindow::calculateTurningTime(double length, double numberOfPasses, double feed, double rpm)
{
    return (length * numberOfPasses) / (feed * rpm);
}

void MainWindow::on_pushButton_clicked()
{
    double cuttingSpeed = ui->cuttingSpeed->text().toDouble();
    double diameter = ui->diameter->text().toDouble();
    double lengthOfCut = ui->lengthOfCut->text().toDouble();
    double numberOfPasses = ui->numberOfPasses->text().toDouble();
    double feedPerTooth = ui->feedPerTooth->text().toDouble();
    int numberOfTeeth = ui->numberOfTeeth->text().toInt();

    double rpm = calculateRPM(cuttingSpeed, diameter);

    double feed = numberOfTeeth * feedPerTooth;

    double millingTime = calculateMillingTime(lengthOfCut, numberOfPasses, feed, rpm);

    QString resultText = QString("Milling Machining Time: %1 minutes\n").arg(millingTime);

    ui->textBrowser->setText(resultText);


}


void MainWindow::on_pushButton_2_clicked()
{
    double cuttingSpeed = ui->cuttingSpeed->text().toDouble();
    double diameter = ui->diameter->text().toDouble();
    double lengthOfCut = ui->lengthOfCut->text().toDouble();
    double numberOfPasses = ui->numberOfPasses->text().toDouble();
    double feedPerTooth = ui->feedPerTooth->text().toDouble();
    int numberOfTeeth = ui->numberOfTeeth->text().toInt();

    double rpm = calculateRPM(cuttingSpeed, diameter);

    double feed = numberOfTeeth * feedPerTooth;
    double length = ui->turningLength->text().toDouble();
    double turningTime = calculateTurningTime(length, numberOfPasses, feed, rpm);
    QString resultText = QString("Turning Machining Time: %1 minutes").arg(turningTime);
    ui->textBrowser->setText(resultText);
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("The document has been modified.");
    msgBox.setInformativeText("on the milling time button:"
                             " // Step 1: Retrieve input values from the user interface (UI)"
                              "- Get cutting speed from ui->cuttingSpeed"
                                 " - Get diameter from ui->diameter\n"
                                  "- Get length of cut from ui->lengthOfCut\n"
                                  "- Get number of passes from ui->numberOfPasses\n"
                                  "- Get feed per tooth from ui->feedPerTooth\n"
                                  "- Get number of teeth from ui->numberOfTeeth"

                              "// Step 2: Calculate RPM"
                                  "- Calculate RPM using the formula: RPM = (1000 * Cutting Speed) / (π * Diameter)"

                              "// Step 3: Calculate Feed rate"
                                  "- Feed rate = Number of Teeth * Feed Per Tooth"

                              "// Step 4: Calculate Milling Time"
                                  "- Milling Time = (Length of Cut * Number of Passes) / (Feed * RPM)"

                              "// Step 5: Format the result text"
                                  "- Create a string with the result: Milling Machining Time: [millingTime] minutes"

                              "// Step 6: Set the result text in the text browser"
                                  "- Display the result in ui->textBrowser"
                                                                                                        "End Function"

                              "on_pushButton_2_clicked():"
                              "// Step 1: Retrieve input values from the user interface (UI)"
                              "- Get cutting speed from ui->cuttingSpeed"
                                  "- Get diameter from ui->diameter"
                                  "- Get length of cut from ui->lengthOfCut"
                                  "- Get number of passes from ui->numberOfPasses"
                                  "- Get feed per tooth from ui->feedPerTooth"
                                  "- Get number of teeth from ui->numberOfTeeth"

                               "// Step 2: Calculate RPM"
                                  "- Calculate RPM using the formula: RPM = (1000 * Cutting Speed) / (π * Diameter)"

                               "// Step 3: Calculate Feed rate"
                                                                            "- Feed rate = Number of Teeth * Feed Per Tooth"

                                                                        "// Step 4: Get turning length from the UI"
                                                                        "- Get turning length from ui->turningLength"

                                                                        "// Step 5: Calculate Turning Time"
                                                                        "- Turning Time = (Turning Length * Number of Passes) / (Feed * RPM)"

                                                                        "// Step 6: Format the result text"
                                                                        "- Create a string with the result: Turning Machining Time: [turningTime] minutes"

                                                                                                                "// Step 7: Set the result text in the text browser"
                                                                                                                "- Display the result in ui->textBrowser"
                                                                                                                     " End Function"
);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Ok);
    int ret = msgBox.exec();
}

