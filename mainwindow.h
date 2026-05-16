#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>

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

    void on_loginButton_clicked();

    void on_logoutStudentButton_clicked();

    void on_logoutTeacherButton_clicked();

    void on_backButton_clicked();

    void on_subjectsListWidget_itemClicked(QListWidgetItem *item);

    void checkGradeChange(int row, int column);

private:

    Ui::MainWindow *ui;

    void loadStudentJournal();

    void loadTeacherJournal();
};

#endif // MAINWINDOW_H