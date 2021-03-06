#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>

class Window : public QWidget
{
	Q_OBJECT

	public: 
		explicit Window(QWidget *parent=0);
	private slots:

		void handleButton();
	private:
		QPushButton *m_button;
		QLabel *myTextLabel;
		QTextEdit *myEditor;

	protected:
	  void paintEvent(QPaintEvent *event);
	
			


};
#endif
