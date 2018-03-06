#pragma once
#pragma execution_character_set("utf-8")  
#include <QtWidgets/QDialog>
#include <qlabel.h>
#include <qgridlayout.h>
#include <QLineEdit>
#include <qcheckbox.h>

class Contact : public QWidget
{
	Q_OBJECT
public:
	Contact(QWidget *parent = 0);
private:
	QLabel *EmailLabel;
	QLineEdit *EmailLineEdit;
	QLabel *AddrLabel;
	QLineEdit *AddrLineEdit;
	QLabel *CodeLabel;
	QLineEdit *CodeLineEdit;
	QLabel *MoviTelLabel;
	QLineEdit *MoviTelLineEdit;
	QCheckBox *MoviTelCheckBook;
	QLabel *ProTelLabel;
	QLineEdit *ProTelLineEdit;
	QGridLayout *mainLayout;
};