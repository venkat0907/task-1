#include "shapes.h"
#include <cmath>

double Circle::getArea() {
  return M_PI * radius * radius;
}

double Circle::getPerimeter() {
  return 2 * M_PI * radius;
}

double Rectangle::getArea() {
  return width * height;
}

double Rectangle::getPerimeter() {
  return 2 * (width + height);
}

double Triangle::getArea() {
  return 0.5 * base * height;
}

// for time being we assume it as right angle triangle
double Triangle::getPerimeter() {
    return base + height + sqrt(base * base + height * height);
}
