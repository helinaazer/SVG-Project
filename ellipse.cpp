#include "ellipse.h"
#include <fstream>
#include <iostream>

using namespace std;

// operator<< equivalent to write the object out. Prints out the x radius of the
// ellipse(rx), prints out the y radius of the ellipse(ry),
// prints out the x poisiton of the center of the ellipse(cx), prints out the y
// position of the center of the ellipse(cy), prints out the color of the
// ellipse
ostream &Ellipse::write(ostream &out) const {
  out << "      <ellipse ";
  out << "cx=\"" << cx << "\" ";
  out << "cy=\"" << cy << "\" ";
  out << "rx=\"" << rx << "\" ";
  out << "ry=\"" << ry << "\" ";
  out << "fill=\"" << color << "\" ";
  out << " />" << endl;

  return out;
}

// operator>> equivalent to read the object contents. Reads in the x radius of
// the ellipse(rx), reads in the y radius of the ellipse(ry), reads in the x
// position of the center of the ellipse(cx), reads in the y position of the
// center of the ellipse(cy), reads in the color of the ellipse
istream &Ellipse::read(istream &in) {
  in >> cx >> cy >> rx >> ry >> color;
  return in;
}