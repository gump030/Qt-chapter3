#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DockWindows.h"
#include <qtextedit.h>
#include <qdockwidget.h>

class DockWindows : public QMainWindow
{
	Q_OBJECT

public:
	DockWindows(QWidget *parent = Q_NULLPTR);

private:
	Ui::DockWindowsClass ui;
};
