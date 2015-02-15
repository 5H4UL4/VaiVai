#pragma once

#include <QWindow>
#include <QOpenGLPaintDevice>


class Renderer :
	public QWindow
{


public:

	explicit Renderer(QWindow *parent = 0);
	~Renderer();

	virtual void initialize();

	virtual void render(QPainter *painter);
	virtual void render();
	bool m_update_pending;
	bool m_animating;
protected:
	QOpenGLContext *m_context;
	QOpenGLPaintDevice *m_device;
};

