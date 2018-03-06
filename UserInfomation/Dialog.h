#pragma once
#pragma execution_character_set("utf-8")  

#include <QtWidgets/QDialog>
#include "ui_Dialog.h"
#include <qlabel.h>
#include <qlineedit.h>
#include <qcombobox.h>
#include <qtextedit.h>
#include <qgridlayout.h>
#include <qpushbutton.h>

class Dialog : public QDialog
{
	Q_OBJECT

public:
	Dialog(QWidget *parent = Q_NULLPTR);

private:
	Ui::DialogClass ui;
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
	//�Ҳ�
	QLabel *HeadLabel;
	QLabel *HeadIconLabel;
	QPushButton *UpdateHeadBtn;
	QHBoxLayout *TopRightLayout;

	QLabel *IntroductionLabel;
	QTextEdit *IntroductionTextEdit;
	QVBoxLayout *RightLayout;
	//�ײ�
	QPushButton *OkBtn;
	QPushButton *CancelBtn;
	QHBoxLayout *ButtomLayout;
};
