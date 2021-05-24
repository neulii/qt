#include "window.h"
#include <iostream>
#include <QDebug>
#include <QMessageBox>
#include <QPainter>

Window::Window(QWidget *parent) : QWidget(parent)
{
	setFixedSize(300,300);

	m_button = new QPushButton("super",this);
	m_button->show();
	connect(m_button,&QPushButton::released, this,&Window::handleButton);

	myTextLabel = new QLabel(this);
	myTextLabel->setText("supertext");
	myTextLabel->setGeometry(100,100,100,50);
	
	myEditor = new QTextEdit("erster text",this);
	myEditor->setGeometry(50,50,200,75);

}

void Window::handleButton()
{
	m_button->setText("sehr geil");
	//QMessageBox::about(this, tr("About Application"),
     //       tr("The <b>Application</b> example demonstrates how to "
    //           "write modern GUI applications using Qt, with a menu bar, "
    //           "toolbars, and a status bar."));
	myTextLabel->setText("button was pressed");
	myEditor->clear();

}



    void Window::paintEvent(QPaintEvent *event)
    {
        QPainter painter(this);
        painter.setPen(Qt::blue);
        painter.drawLine(0, 0, 200, 200);
    }
