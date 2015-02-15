#ifndef VAIVAI_H
#define VAIVAI_H

#include <QtWidgets/QMainWindow>
#include "ui_vaivai.h"
#include "renderer.h"

class VaiVai : public QMainWindow
{
	Q_OBJECT

public:
	VaiVai(QWidget *parent = 0);
	~VaiVai();

private:
	Ui::VaiVaiClass ui;
	Renderer	m_renderer;
};

#endif // VAIVAI_H
