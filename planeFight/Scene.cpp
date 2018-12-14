#include "Scene.h"

Scene::Scene(Window *parent)
	: QWidget(parent)
{
	resize(parent->size());
}

Scene::~Scene()
{

}

void Scene::keyPressEvent(QKeyEvent * event)
{
	QWidget::keyPressEvent(event);
}

void Scene::keyReleaseEvent(QKeyEvent * event)
{
	QWidget::keyReleaseEvent(event);
}

void Scene::init()
{
}