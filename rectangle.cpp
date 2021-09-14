#include "rectangle.h"
#include <fstream>
#include <iostream>

using namespace std;

// operator<< equivalent to write the object out. Prints out the x position of
// the top left corner of the rectangle(x),
// prints out the y position of the top left corner of the rectangle(y), prints
// out the width of the rectangle, prints out the hieght of the rectangle,
// prints out the x radius of the corners of the rectangle(rx), prints out the y
// radius of the corners of the rectangle(ry), prints out the color of the
// rectangle, prints out the angle of rotation of the rectangle, prints out the
// color of the border of the rectangle.
ostream &Rectangle::write(ostream &out) const {
  out << "      <rect ";
  out << "x=\"" << x << "\" ";
  out << "y=\"" << y << "\" ";
  out << "rx=\"" << rx << "\" ";
  out << "ry=\"" << ry << "\" ";
  out << "width=\"" << width << "\" ";
  out << "height=\"" << height << "\" ";
  out << "style=\"fill:" << color << "\" ";
  out << "transform=\"rotate()" << transform << "\" ";
  out << "stroke=\"" << color << "\" ";
  out << " />" << endl;

  return out;
}

// operator>> equivalent to read the object contents. Reads in the x position of
// the top left corner of the rectangle(x),
// reads in the y position of the top left corner of the rectangle(y), reads in
// the width of the rectangle, reads in the hieght of the rectangle, reads in
// the x radius of the corners of the rectangle(rx), reads in the y radius of
// the corners of the rectangle(ry), reads in the color of the rectangle, reads
// in the angle of rotation of the rectangle, reads in the color of the border
// of the rectangle.
istream &Rectangle::read(istream &in) {
  in >> x >> y >> rx >> ry >> width >> height >> color >> transform >> color;
  return in;
}