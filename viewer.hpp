#pragma once

#include <QOpenGLWidget>
#include <QPaintEvent>
#include <QPainter>

class viewer : public QOpenGLWidget {
  Q_OBJECT

 public:
  explicit viewer(QOpenGLWidget *parent = nullptr);
  ~viewer() = default;

 protected:
  void initializeGL() override;
  void resizeGL(int width, int height) override;
  void paintGL() override;

 private:
};