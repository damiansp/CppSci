/* Point2D.cpp */
#include <iostream>
#include <set>
#include "Point2d.hpp"
using namespace std;

int main(int argc, char* argv[]) {
  set<Point2d> points;
  Point2d origin(0, 0);

  points.insert(origin);
  points.insert(Point2d(-2, 1));
  points.insert(Point2d(-2, -5));
  points.insert(Point2d(0, 0));

  cout << "Number of points in set = " << points.size() << endl;

  set<Point2d>::const_iterator c;

  for (c = points.begin(); c != points.end(); c++) {
    cout << "(" << c->x << ", " << c->y << ")\n";
  }

  return 0;
}
