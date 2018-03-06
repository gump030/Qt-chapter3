#pragma once
#pragma execution_character_set("utf-8")  
#include <QLabel>
#include <qcombobox.h>
#include <qlineedit.h>
#include <qtextedit.h>
#include <qgridlayout.h>

class Detail :public QWidget
{
	Q_OBJECT
public:
	Detail(QWidget *parent = 0);
private:
	QLabel *NationalLabel;
	QComboBox *NationalComboBox;
	QLabel *ProvinceLabel;
	QComboBox *ProvinceComboBox;
	QLabel *CityLabel;
	QLineEdit *CityLineEdit;
	QLabel *IntroductLabel;
	QTextEdit *IntroductTextEdit;
	QGridLayout *mainLayout;
};