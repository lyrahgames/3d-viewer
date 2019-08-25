#include <QApplication>

#include <viewer.hpp>

int main(int argc, char** argv) {
  QApplication application(argc, argv);
  viewer v{};
  return application.exec();
}