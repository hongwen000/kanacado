#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QImage>
#include <QMessageBox>
#include <QString>
#include <QPixmap>
#include <vector>
#include <QDebug>
using std::vector;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    bool isImage; //false for text;
    int id;
    QImage* img;
    vector<QString> hilakana {
        "^",
        "a",
        "i",
        "u",
        "e",
        "o",
        "ka",
        "ki",
        "ku",
        "ke",
        "ko",
        "sa",
        "si",
        "su",
        "se",
        "so",
        "ta",
        "ti",
        "tu",
        "te",
        "to",
        "na",
        "ni",
        "nu",
        "ne",
        "no",
        "ha 1)",
        "hi",
        "hu",
        "he 2)",
        "ho",
        "ma",
        "mi",
        "mu",
        "me",
        "mo",
        "ya",
        "i",
        "yu",
        "e",
        "yo",
        "ra",
        "ri",
        "ru",
        "re",
        "ro",
        "wa",
        "o 3)",
        "n"
    };
    ~MainWindow();
    void next(const QString& choice);

private slots:
    void on_pushButton_clicked();

    void on_next_k_clicked();

    void on_next_all_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
