#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("Hello, World!");
    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(clickedSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clickedSlot()
{
    ui->label->setText("Loading...");
    //QDir directory("Pictures/MyPictures");

    //QDir directory = QFileDialog::getExistingDirectory(this, tr("select directory"));
    //list = QDir::Files(directory);
    //fileName = list(1);
}
