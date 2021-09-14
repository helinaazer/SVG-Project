#include "triangle.h"
#include <fstream>
#include <iostream>

using namespace std;

// operator<< equivalent to write the object out. Prints out the verticies of
// the triangle. Prints out the color of the triangle.
ostream &Triangle::write(ostream &out) const {
  out << "      <polygon ";
  out << "points=\"" << vertex1 << "," << vertex2 << " " << vertex3 << ","
      << vertex4 << " " << vertex5 << "," << vertex6 << "\" ";
  out << "style=\"fill:" << color << "\" ";
  out << " />" << endl;
  return out;
}

// operator>> equivalent to read the object contents. Reads in the verticies of
// the triangle. Reads in the color of the triangle.
istream &Triangle::read(istream &in) {
  in >> vertex1 >> vertex2 >> vertex3 >> vertex4 >> vertex5 >> vertex6 >> color;
  return in;
}