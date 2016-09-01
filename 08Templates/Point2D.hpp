/* Point2d.hpp */
#ifndef POINT2D_HPP
#define POINT2D_HPP

class Point2d {
public:
  int x, y;

  Point2d(int a, int b) {
    x = a;
    y = b;
  }

  // returns true if either x or y coord is less than for <other>
  bool operator<(const Point2d& other) const {
    if (x < other.x) { return true; }
    else if (x > other.x) { return false; }
    else if (y < other.y) { return true; } // x's equal
    else { return false; }
  }
};

#endif
