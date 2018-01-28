#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    id = 1;
    isImage = false;
    img = nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::next(const QString& choice)
{
    isImage ^= 1;
    if(isImage)
    {
        id = rand() % 48 + 1;
        if(!(img == nullptr))
            delete img;
        img = new QImage;
        QString filename;
        if(id < 10)
            filename = QString(":/gana/D:/gana/") + choice + QString("1000") + QString::number(id) + QString(".png");
        else
            filename = QString(":/gana/D:/gana/") + choice + QString("100") + QString::number(id) + QString(".png");
        if(! (img->load(filename) ) ) //����ͼ��
        {
            QMessageBox::information(this,
                                     tr("��ͼ��ʧ��"),
                                     tr("��ͼ��ʧ��!"));
            if(!(img == nullptr))
                delete img;
            return;
        }
        ui->image->setPixmap(QPixmap::fromImage(*img));
        ui->text->setText("");
    }
    else
    {
        ui->text->setText(hilakana[id]);
    }
}

void MainWindow::on_pushButton_clicked()
{
    next("h");
}

void MainWindow::on_next_k_clicked()
{
    next("k");
}

void MainWindow::on_next_all_clicked()
{
    int i = rand() & 1;
    next(i?"h":"k");
}
