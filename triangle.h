/**
 * SVG Triangle
 **/

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "svg.h"
#include <iostream>
#include <string>

using namespace std;

class Triangle : public SVG {

public:
  // operator<< equivalent to write the object out
  ostream &write(ostream &out) const override;

  // operator>> equivalent to read the object contents
  istream &read(istream &in) override;

private:
  //verticies of a triangle
  int vertex1{0}, vertex2{0}, vertex3{0} , vertex4{0}, vertex5{0}, vertex6{0};

  // color of triangle
  string color{"blue"};
};

#endif