#pragma once

#include <QtWidgets/QDialog>
#include "ui_StackDlg.h"
#include <QListWidget>
#include <QStackedWidget>
#include <QLabel>
#include <QHboxLayout>

class StackDlg : public QDialog
{
	Q_OBJECT

public:
	StackDlg(QWidget *parent = Q_NULLPTR);

private:
	Ui::StackDlgClass ui;
	QListWidget *list;
	QStackedWidget *stack;
	QLabel *label1;
	QLabel *label2;
	QLabel *label3;
};
