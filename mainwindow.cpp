#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_pushButton_2_clicked()
{
  ui->label_2->setText("Here's the solved sudoku!");
}
void MainWindow::on_Check_clicked()
{
int arr[4][4];
arr[0][0]=ui->b00->text().toInt();
arr[0][1]=ui->b01->text().toInt();
arr[0][2]=ui->b02->text().toInt();
arr[0][3]=ui->b03->text().toInt();

arr[1][0]=ui->b10->text().toInt();
arr[1][1]=ui->b11->text().toInt();
arr[1][2]=ui->b12->text().toInt();
arr[1][3]=ui->b13->text().toInt();

arr[2][0]=ui->b20->text().toInt();
arr[2][1]=ui->b21->text().toInt();
arr[2][2]=ui->b22->text().toInt();
arr[2][3]=ui->b23->text().toInt();

arr[3][0]=ui->b30->text().toInt();
arr[3][1]=ui->b31->text().toInt();
arr[3][2]=ui->b32->text().toInt();
arr[3][3]=ui->b33->text().toInt();


}/*
Grid = new QGridLayout;
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        Matrix[i][j]=new QLineEdit;
       //
        Matrix[i][j]->setFont(font);
        Matrix[i][j]->setAlignment(Qt::AlignCenter);
        Grid->addWidget(InputMatrix[i][j],i,j);
    }
}*/

