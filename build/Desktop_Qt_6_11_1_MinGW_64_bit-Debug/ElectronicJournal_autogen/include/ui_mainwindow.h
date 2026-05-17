/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QLabel *login;
    QLineEdit *loginEdit;
    QLabel *password;
    QLineEdit *passwordEdit;
    QPushButton *loginButton;
    QLabel *statusLabel;
    QWidget *page_6;
    QListWidget *subjectsListWidget;
    QPushButton *logoutTeacherButton;
    QWidget *page_7;
    QTableWidget *teacherTable;
    QPushButton *backButton;
    QWidget *page_5;
    QPushButton *logoutStudentButton;
    QTableWidget *studentTable;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 750);
        MainWindow->setMinimumSize(QSize(1200, 750));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"    background-color: #181818;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    background-color: #181818;\n"
"    color: #ffffff;\n"
"    font-size: 14px;\n"
"    font-family: Segoe UI;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    background-color: #3b82f6;\n"
"    border: none;\n"
"    border-radius: 12px;\n"
"    padding: 10px;\n"
"    min-height: 20px;\n"
"\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: #2563eb;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: #1d4ed8;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: #262626;\n"
"\n"
"    border: 2px solid #404040;\n"
"\n"
"    border-radius: 10px;\n"
"\n"
"    padding: 8px;\n"
"\n"
"    color: white;\n"
"\n"
"    selection-background-color: #3b82f6;\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"    border: 2px solid #3b82f6;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"    color: white;\n"
"    font-size: 15px;\n"
"}\n"
"\n"
"QTableWidget\n"
"{\n"
"  "
                        "  background-color: #202020;\n"
"\n"
"    alternate-background-color: #262626;\n"
"\n"
"    border: 1px solid #404040;\n"
"\n"
"    gridline-color: #404040;\n"
"\n"
"    border-radius: 12px;\n"
"\n"
"    color: white;\n"
"\n"
"    selection-background-color: #3b82f6;\n"
"}\n"
"\n"
"QTableWidget::item\n"
"{\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: #2d2d2d;\n"
"\n"
"    color: white;\n"
"\n"
"    padding: 10px;\n"
"\n"
"    border: 1px solid #404040;\n"
"\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QListWidget\n"
"{\n"
"    background-color: #202020;\n"
"\n"
"    border: 1px solid #404040;\n"
"\n"
"    border-radius: 12px;\n"
"\n"
"    padding: 8px;\n"
"\n"
"    color: white;\n"
"\n"
"    font-size: 15px;\n"
"}\n"
"\n"
"QListWidget::item\n"
"{\n"
"    padding: 12px;\n"
"\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"QListWidget::item:selected\n"
"{\n"
"    background-color: #3b82f6;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"    background: #202020;\n"
"\n"
"    widt"
                        "h: 14px;\n"
"\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    background: #404040;\n"
"\n"
"    min-height: 30px;\n"
"\n"
"    border-radius: 7px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    background: #555555;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"    height: 0px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 20, 1191, 701));
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        login = new QLabel(page_1);
        login->setObjectName("login");
        login->setGeometry(QRect(430, 200, 63, 20));
        loginEdit = new QLineEdit(page_1);
        loginEdit->setObjectName("loginEdit");
        loginEdit->setGeometry(QRect(430, 230, 300, 40));
        password = new QLabel(page_1);
        password->setObjectName("password");
        password->setGeometry(QRect(430, 280, 63, 20));
        passwordEdit = new QLineEdit(page_1);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(430, 310, 300, 40));
        passwordEdit->setEchoMode(QLineEdit::EchoMode::Password);
        loginButton = new QPushButton(page_1);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(430, 380, 300, 45));
        statusLabel = new QLabel(page_1);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(560, 440, 63, 20));
        stackedWidget->addWidget(page_1);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        subjectsListWidget = new QListWidget(page_6);
        new QListWidgetItem(subjectsListWidget);
        subjectsListWidget->setObjectName("subjectsListWidget");
        subjectsListWidget->setGeometry(QRect(10, 10, 1160, 620));
        logoutTeacherButton = new QPushButton(page_6);
        logoutTeacherButton->setObjectName("logoutTeacherButton");
        logoutTeacherButton->setGeometry(QRect(10, 640, 140, 45));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        teacherTable = new QTableWidget(page_7);
        teacherTable->setObjectName("teacherTable");
        teacherTable->setGeometry(QRect(10, 10, 1160, 620));
        backButton = new QPushButton(page_7);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(10, 640, 140, 45));
        stackedWidget->addWidget(page_7);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        logoutStudentButton = new QPushButton(page_5);
        logoutStudentButton->setObjectName("logoutStudentButton");
        logoutStudentButton->setGeometry(QRect(0, 640, 140, 45));
        studentTable = new QTableWidget(page_5);
        studentTable->setObjectName("studentTable");
        studentTable->setGeometry(QRect(10, 10, 1160, 620));
        stackedWidget->addWidget(page_5);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\321\213\320\271 \320\266\321\203\321\200\320\275\320\260\320\273", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        password->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        passwordEdit->setText(QString());
        loginButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        statusLabel->setText(QCoreApplication::translate("MainWindow", "\320\263\320\276\321\202\320\276\320\262\320\276", nullptr));

        const bool __sortingEnabled = subjectsListWidget->isSortingEnabled();
        subjectsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = subjectsListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\236\320\236\320\237", nullptr));
        subjectsListWidget->setSortingEnabled(__sortingEnabled);

        logoutTeacherButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        backButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        logoutStudentButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
