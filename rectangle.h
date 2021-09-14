/**
 * SVG Rectangle
 **/

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "svg.h"
#include <iostream>
#include <string>

using namespace std;

class Rectangle : public SVG {

public:
  // operator<< equivalent to write the object out
  ostream &write(ostream &out) const override;

  // operator>> equivalent to read the object contents
  istream &read(istream &in) override;

private:
  int x{0}, y{0};

  //rounds the corner of the rectangle
  int rx{0}, ry{0};

  // length and width of rectangle
  int width{0}, height{0};

  //rotates the rectangle
  int transform{0};

  // color of rectangle
  string color{"red"};
};

#endif
