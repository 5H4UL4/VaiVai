#include "renderer.h"
#include "QPainter"

Renderer::Renderer(QWindow *parent) : QWindow(parent)
, m_update_pending(false)
, m_animating(false)
, m_context(0)
, m_device(0)
{
	setSurfaceType(QWindow::OpenGLSurface);
}


Renderer::~Renderer()
{
}


void Renderer::Render(QPainter *painter)
{
	Q_UNUSED(painter);
}

void Renderer::Initialize()
{
}

void Renderer::Render()
{
	if (!m_device)
		m_device = new QOpenGLPaintDevice;

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

	m_device->setSize(size());

	QPainter painter(m_device);
	Render(&painter);
}