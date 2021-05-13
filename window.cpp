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
	
}

void Window::handleButton()
{
	m_button->setText("sehr geil");
	QMessageBox::about(this, tr("About Application"),
            tr("The <b>Application</b> example demonstrates how to "
               "write modern GUI applications using Qt, with a menu bar, "
               "toolbars, and a status bar."));
}


    void Window::paintEvent(QPaintEvent *event)
    {
        QPainter painter(this);
        painter.setPen(Qt::blue);
        painter.drawLine(0, 0, 200, 200);
    }
