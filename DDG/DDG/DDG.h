#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DDG.h"

class DDG : public QMainWindow
{
	Q_OBJECT

public:
	DDG(QWidget *parent = Q_NULLPTR);

private:
	Ui::DDGClass ui;
};
