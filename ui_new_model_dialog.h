/********************************************************************************
** Form generated from reading UI file 'new_model_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_MODEL_DIALOG_H
#define UI_NEW_MODEL_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_New_Model_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_filename;
    QPushButton *pushButton_filename;
    QWidget *page_2;
    QLineEdit *lineEdit_openmodel;
    QPushButton *pushButton_openmodel;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *New_Model_dialog)
    {
        if (New_Model_dialog->objectName().isEmpty())
            New_Model_dialog->setObjectName(QStringLiteral("New_Model_dialog"));
        New_Model_dialog->resize(436, 70);
        New_Model_dialog->setMinimumSize(QSize(436, 70));
        verticalLayout = new QVBoxLayout(New_Model_dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        stackedWidget = new QStackedWidget(New_Model_dialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        horizontalLayout_2 = new QHBoxLayout(page);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_filename = new QLineEdit(page);
        lineEdit_filename->setObjectName(QStringLiteral("lineEdit_filename"));

        horizontalLayout_2->addWidget(lineEdit_filename);

        pushButton_filename = new QPushButton(page);
        pushButton_filename->setObjectName(QStringLiteral("pushButton_filename"));

        horizontalLayout_2->addWidget(pushButton_filename);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        lineEdit_openmodel = new QLineEdit(page_2);
        lineEdit_openmodel->setObjectName(QStringLiteral("lineEdit_openmodel"));
        lineEdit_openmodel->setGeometry(QRect(110, 10, 191, 25));
        pushButton_openmodel = new QPushButton(page_2);
        pushButton_openmodel->setObjectName(QStringLiteral("pushButton_openmodel"));
        pushButton_openmodel->setGeometry(QRect(330, 10, 51, 25));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_2 = new QVBoxLayout(page_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        textBrowser = new QTextBrowser(page_3);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);

        stackedWidget->addWidget(page_3);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(New_Model_dialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(New_Model_dialog);
    } // setupUi

    void retranslateUi(QDialog *New_Model_dialog)
    {
        New_Model_dialog->setWindowTitle(QApplication::translate("New_Model_dialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("New_Model_dialog", "<html><head/><body><p><span style=\" font-weight:600; color:#2e3436;\">File Name</span></p></body></html>", Q_NULLPTR));
        pushButton_filename->setText(QApplication::translate("New_Model_dialog", "ok", Q_NULLPTR));
        pushButton_openmodel->setText(QApplication::translate("New_Model_dialog", "ok", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("New_Model_dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\" bgcolor=\"#ffffe2\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">About SCOTS: </span></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">SCOTS is an open source software tool for the synthesis ofsymbolic controllers for possibly perturbed, nonlinear, control systems. It is mainly implemented in C++ and it comes with a small MATLAB interface to access the synthesized controller from withinMATLAB.<a href=\"http://www.hcs.ei.tum.de/en/software/scots/\"><"
                        "span style=\" font-style:italic; text-decoration: underline; color:#0000ff;\">More..</span></a></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">About SCOTS GUI:</span></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">SCOTS_GUI is graphic user inerface developed by <a href=\"http://www.hcs.ei.tum.de/en/home/\"><span style=\" text-decoration: underline; color:#0000ff;\">HCS</span></a> group for making new models without the need to write the codes. It makes all the files need for running a model. It takes grid parameters, system dynamics ,and specification parameters as input and generates the suitable codes for them. It has feature to open and edit model previously created using it.</p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-t"
                        "op:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">created by: Aneesh Dahiya</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class New_Model_dialog: public Ui_New_Model_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_MODEL_DIALOG_H
