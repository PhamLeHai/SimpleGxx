#ifndef BASEQTPROJECT_H
#define BASEQTPROJECT_H

#include <QtWidgets/QMainWindow>
#include "ui_baseqtproject.h"

class BaseQtProject : public QMainWindow
{
	Q_OBJECT

public:
	BaseQtProject(QWidget *parent = 0);
	~BaseQtProject();

private:
	Ui::BaseQtProjectClass ui;
};

#endif // BASEQTPROJECT_H
