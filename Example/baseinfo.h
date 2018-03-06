#pragma once
#pragma execution_character_set("utf-8")  
#include <QtWidgets/QDialog>
#include <qlabel.h>
#include <qlineedit.h>
#include <qcombobox.h>
#include <qtextedit.h>
#include <QGridLayout>
#include <qpushbutton.h>

class BaseInfo : public QWidget
{
	Q_OBJECT
public:
	BaseInfo(QWidget *parent = 0);
private:
	//×ó²à
	QLabel *UserNameLabel;
	QLabel *NameLabel;
	QLabel *SexLabel;
	QLabel *DepartmentLabel;
	QLabel *AgeLabel;
	QLabel *OtherLabel;
	QLineEdit *NameLineEdit;
	QLineEdit *UserNameLineEdit;
	QComboBox *SexComboBox;
	QTextEdit *DepartmentTextEdit;
	QLineEdit *AgeLineEdit;
	QGridLayout *LeftLayout;
	//ÓÒ²à
	QLabel *HeadLabel;
	QLabel *HeadIconLabel;
	QPushButton *UpdateHeadBtn;
	QHBoxLayout *TopRightLayout;

	QLabel *IntroductionLabel;
	QTextEdit *IntroductionTextEdit;
	QVBoxLayout *RightLayout;
};