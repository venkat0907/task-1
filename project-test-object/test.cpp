#define BOOST_TEST_MODULE ShapesTest
#include <boost/test/unit_test.hpp>

#include "shapes.h"

BOOST_AUTO_TEST_CASE(CircleTest) {
  Circle c(1.0, "red");

  BOOST_CHECK_EQUAL(c.getType(), "Circle");
  BOOST_CHECK_CLOSE(c.getArea(), 3.14159, 0.0001);
  BOOST_CHECK_CLOSE(c.getPerimeter(), 6.28318, 0.0001);
  BOOST_CHECK_EQUAL(c.getColor(), "red");
}

BOOST_AUTO_TEST_CASE(RectangleTest) {
  Rectangle r(2.0, 3.0, "blue");

  BOOST_CHECK_EQUAL(r.getType(), "Rectangle");
  BOOST_CHECK_EQUAL(r.getArea(), 6.0);
  BOOST_CHECK_EQUAL(r.getPerimeter(), 10.0);
  BOOST_CHECK_EQUAL(r.getColor(), "blue");
}

BOOST_AUTO_TEST_CASE(TriangleTest) {
  Triangle t(3.0, 4.0, "green");

  BOOST_CHECK_EQUAL(t.getType(), "Triangle");
  BOOST_CHECK_CLOSE(t.getArea(), 6.0, 0.0001);
  BOOST_CHECK_CLOSE(t.getPerimeter(), 12.0, 0.0001);
  BOOST_CHECK_EQUAL(t.getColor(), "green");
}

