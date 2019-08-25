#include <viewer.hpp>

viewer::viewer(QOpenGLWidget *parent) : QOpenGLWidget(parent) { show(); }

void viewer::initializeGL() {}

void viewer::resizeGL(int width, int height) {}

void viewer::paintGL() {}
