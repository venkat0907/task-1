#include <iostream>
#include "shapes.h"

int main() {
  Shape* shapes[3];
  shapes[0] = new Circle(1.0, "red");
  shapes[1] = new Rectangle(2.0, 3.0, "blue");
  shapes[2] = new Triangle(3.0, 4.0, "green");

  for (int i = 0; i < 3; i++) {
    std::cout << "Shape " << i+1 << ":" << std::endl;
    std::cout << "  Type: " << shapes[i]->getType() << std::endl;
    std::cout << "  Area: " << shapes[i]->getArea() << std::endl;
    std::cout << "  Perimeter: " << shapes[i]->getPerimeter() << std::endl;
    std::cout << "  Color: " << shapes[i]->getColor() << std::endl;
  }

  for (int i = 0; i < 3; i++) {
    delete shapes[i];
  }

  return 0;
}
