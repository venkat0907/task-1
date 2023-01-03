#ifndef SHAPES_H
#define SHAPES_H

#include <string>

class Shape {
public:
  virtual std::string getType() = 0;
  virtual double getArea() = 0;
  virtual double getPerimeter() = 0;
  virtual std::string getColor() = 0;
};

class Circle : public Shape {
private:
  double radius;
  std::string color;

public:
  Circle(double r, std::string c) : radius(r), color(c) {}

  std::string getType() { return "Circle"; }
  double getArea();
  double getPerimeter();
  std::string getColor() { return color; }
};

class Rectangle : public Shape {
private:
  double width;
  double height;
  std::string color;

public:
  Rectangle(double w, double h, std::string c) : width(w), height(h), color(c) {}

  std::string getType() { return "Rectangle"; }
  double getArea();
  double getPerimeter();
  std::string getColor() { return color; }
};

class Triangle : public Shape {
private:
  double base;
  double height;
  std::string color;

public:
  Triangle(double b, double h, std::string c) : base(b), height(h), color(c) {}

  std::string getType() { return "Triangle"; }
  double getArea();
  double getPerimeter();
  std::string getColor() { return color; }
};

#endif
