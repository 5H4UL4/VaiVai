#pragma once

#include <QWindow>
#include <QOpenGLPaintDevice>


class Renderer :
	public QWindow
{


public:

	explicit Renderer(QWindow *parent = 0);
	~Renderer();

	virtual void Initialize();

	virtual void Render(QPainter *painter);
	virtual void Render();
	bool m_update_pending;
	bool m_animating;
protected:
	QOpenGLContext *m_context;
	QOpenGLPaintDevice *m_device;
};

