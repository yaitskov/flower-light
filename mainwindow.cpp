#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stdconf.h"
#include "flowerlighter.h"
#include "simdisplay.h"
#include "simled2digit.h"
#include "watch.h"
#include "hoursmi.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    FlowerLighter::get().m_display = new SimDisplay(
                this->ui->lblPower,
                this->ui->lblLight,
                this->ui->lblDay,
                this->ui->lblNight,
                this->ui->lblBattery);

    FlowerLighter::get().m_dstream = new DisplayStream(FlowerLighter::get().m_digits);
    FlowerLighter::get().m_digits = new SimLed2Digit(this->ui->digits);
    Watch * watch = new Watch();
    FlowerLighter::get().m_tqueue.add(watch);

    FlowerLighter::get().m_menu.add(new HoursMI(watch));
}

MainWindow::~MainWindow()
{
    delete ui;
}
