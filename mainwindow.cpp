#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QTableWidgetItem>
#include <QAbstractItemView>
#include <QHeaderView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // фиксированный размер окна
    setFixedSize(1200, 750);

    // стартовая страница
    ui->stackedWidget->setCurrentWidget(ui->page_1);

    loadStudentJournal();

    loadTeacherJournal();

    // проверка баллов
    connect(ui->teacherTable,
            &QTableWidget::cellChanged,
            this,
            &MainWindow::checkGradeChange);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadStudentJournal()
{
    ui->studentTable->setColumnCount(6);

    ui->studentTable->setHorizontalHeaderLabels(
        QStringList()
        << "Предмет"
        << "01.09"
        << "03.09"
        << "05.09"
        << "07.09"
        << "09.09");

    ui->studentTable->setRowCount(3);

    // ООП
    ui->studentTable->setItem(0,0,
                              new QTableWidgetItem("ООП"));

    ui->studentTable->setItem(0,1,
                              new QTableWidgetItem("95"));

    ui->studentTable->setItem(0,2,
                              new QTableWidgetItem("88"));

    ui->studentTable->setItem(0,3,
                              new QTableWidgetItem("100"));

    ui->studentTable->setItem(0,4,
                              new QTableWidgetItem("91"));

    ui->studentTable->setItem(0,5,
                              new QTableWidgetItem("84"));

    // Дискретная математика
    ui->studentTable->setItem(1,0,
                              new QTableWidgetItem("Дискретная математика"));

    ui->studentTable->setItem(1,1,
                              new QTableWidgetItem("76"));

    ui->studentTable->setItem(1,2,
                              new QTableWidgetItem("82"));

    ui->studentTable->setItem(1,3,
                              new QTableWidgetItem("90"));

    ui->studentTable->setItem(1,4,
                              new QTableWidgetItem("73"));

    ui->studentTable->setItem(1,5,
                              new QTableWidgetItem("95"));

    // ИКТ
    ui->studentTable->setItem(2,0,
                              new QTableWidgetItem("ИКТ"));

    ui->studentTable->setItem(2,1,
                              new QTableWidgetItem("100"));

    ui->studentTable->setItem(2,2,
                              new QTableWidgetItem("94"));

    ui->studentTable->setItem(2,3,
                              new QTableWidgetItem("87"));

    ui->studentTable->setItem(2,4,
                              new QTableWidgetItem("92"));

    ui->studentTable->setItem(2,5,
                              new QTableWidgetItem("96"));

    // студент не может редактировать
    ui->studentTable->setEditTriggers(
        QAbstractItemView::NoEditTriggers);

    // размеры колонок
    ui->studentTable->horizontalHeader()
        ->setSectionResizeMode(QHeaderView::Interactive);

    // ширина колонки предметов
    ui->studentTable->setColumnWidth(0, 320);

    // ширина колонок с датами
    for(int i = 1; i < 6; i++)
    {
        ui->studentTable->setColumnWidth(i, 90);
    }

    // высота строк
    ui->studentTable->verticalHeader()
        ->setDefaultSectionSize(55);

    // высота заголовка
    ui->studentTable->horizontalHeader()
        ->setFixedHeight(50);

    // шрифт
    QFont font = ui->studentTable->font();
    font.setPointSize(13);

    ui->studentTable->setFont(font);

    ui->studentTable->horizontalHeader()->setFont(font);
}

void MainWindow::loadTeacherJournal()
{
    QStringList students =
        {
            "Өтебаева Еркемай",
            "Әуелбек Ерасыл",
            "Абишева Айсулу",
            "Есенғали Жарас",
            "Аликаидар Нұрсұлтан",
            "Қайржан Алмат",
            "Утеген Оразбек",
            "Курбанбекова Индира",
            "Тұрсынбай Ардақ",
            "Кенжегулов Жанарыс",
            "Орынбаев Өркен",
            "Тұрсынбекұлы Тілеуберді",
            "Сундеткул Нұрдаулет",
            "Нурбергенова Айдана",
            "Турсунбай Инкар",
            "Клычев Жандарбек"
        };

    ui->teacherTable->setColumnCount(6);

    ui->teacherTable->setHorizontalHeaderLabels(
        QStringList()
        << "ФИО"
        << "01.09"
        << "03.09"
        << "05.09"
        << "07.09"
        << "09.09");

    ui->teacherTable->setRowCount(students.size());

    for(int i = 0; i < students.size(); i++)
    {
        QTableWidgetItem *nameItem =
            new QTableWidgetItem(students[i]);

        // запрет изменения ФИО
        nameItem->setFlags(
            nameItem->flags() & ~Qt::ItemIsEditable);

        ui->teacherTable->setItem(i, 0, nameItem);
    }

    // размеры колонок
    ui->teacherTable->horizontalHeader()
        ->setSectionResizeMode(QHeaderView::Interactive);

    // ширина колонки ФИО
    ui->teacherTable->setColumnWidth(0, 350);

    // ширина колонок дат
    for(int i = 1; i < 6; i++)
    {
        ui->teacherTable->setColumnWidth(i, 90);
    }

    // высота строк
    ui->teacherTable->verticalHeader()
        ->setDefaultSectionSize(55);

    // высота заголовка
    ui->teacherTable->horizontalHeader()
        ->setFixedHeight(50);

    // шрифт
    QFont font = ui->teacherTable->font();
    font.setPointSize(13);

    ui->teacherTable->setFont(font);

    ui->teacherTable->horizontalHeader()->setFont(font);
}

void MainWindow::on_loginButton_clicked()
{
    QString login = ui->loginEdit->text();

    QString password = ui->passwordEdit->text();

    // студент
    if(login == "student" && password == "123")
    {
        ui->stackedWidget->setCurrentWidget(ui->page_5);
    }

    // преподаватель
    else if(login == "Блен_Жанерке"
             && password == "010203")
    {
        ui->stackedWidget->setCurrentWidget(ui->page_6);
    }

    else
    {
        ui->statusLabel->setText(
            "Неверный логин или пароль");
    }
}

void MainWindow::on_logoutStudentButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_1);
}

void MainWindow::on_logoutTeacherButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_1);
}

void MainWindow::on_backButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_6);
}

void MainWindow::on_subjectsListWidget_itemClicked(QListWidgetItem *item)
{
    if(item->text() == "ООП")
    {
        ui->stackedWidget->setCurrentWidget(ui->page_7);
    }
    else
    {
        QMessageBox::warning(
            this,
            "Ошибка",
            "У вас нет доступа к этому предмету");
    }
}

void MainWindow::checkGradeChange(int row, int column)
{
    // ФИО не редактируем
    if(column == 0)
        return;

    QTableWidgetItem *item =
        ui->teacherTable->item(row, column);

    if(!item)
        return;

    bool ok;

    int value = item->text().toInt(&ok);

    // если не число
    if(!ok)
    {
        item->setText("");
        return;
    }

    // минимум
    if(value < 0)
    {
        item->setText("0");
    }

    // максимум
    if(value > 100)
    {
        item->setText("100");
    }
}