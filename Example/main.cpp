#include "Connect.h"
#include <QtWidgets/QApplication>
#include <qtextcodec.h>
#include <qsplitter.h>
#include <qlistwidget.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QFont font("AR PL Kaitim GB", 12);
	a.setFont(font);

	QSplitter *splitterMain = new QSplitter(Qt::Horizontal, 0);
	splitterMain->setOpaqueResize(true);
	QListWidget *list = new QListWidget(splitterMain);
	list->insertItem(0, QObject::tr("������Ϣ"));
	list->insertItem(1, QObject::tr("��ϵ��ʽ"));
	list->insertItem(2, QObject::tr("��ϸ����"));

	Connect *content = new Connect(splitterMain);

	QObject::connect(list, SIGNAL(currentRowChanged(int)), content->stack, SLOT(setCurrentIndex(int)));

	splitterMain->setWindowTitle(QObject::tr("�޸��û�����"));
	splitterMain->setMinimumSize(splitterMain->minimumSize());
	splitterMain->setMaximumSize(splitterMain->maximumSize());
	splitterMain->show();
	return a.exec();
}
