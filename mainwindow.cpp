#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QLabel"
#include "QPushButton"

#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QLabel *imgLabel = new QLabel(this);
    imgLabel->resize(64, 64);
    imgLabel->move(0, 0);
    imgLabel->setPixmap(
        QPixmap("./img/lena.jpg").scaled(64, 64)); //图片大小改为64x64

    cv::Mat img = cv::imread("./img/lena.jpg");
    cv::imshow("IMAGE_TO_SHOW", img);

}

MainWindow::~MainWindow() { delete ui; }
