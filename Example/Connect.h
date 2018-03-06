#pragma once
#pragma execution_character_set("utf-8")  

#include <QtWidgets/QDialog>
#include <qstackedwidget.h>
#include <qpushbutton.h>
#include <QHBoxLayout>
#include "baseinfo.h"
#include "contact.h"
#include "detail.h"

class Connect : public QWidget
{
	Q_OBJECT

public:
	Connect(QWidget *parent = Q_NULLPTR);
	QStackedWidget *stack;
	QPushButton *AmendBtn;
	QPushButton *CloseBtn;
	  
	BaseInfo *baseInfo;
	Contact *contact;
	Detail *detail;
};
