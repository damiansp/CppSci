/* Vector.cpp */
#include <cassert>
#include <cmath>
#include <iostream>
#include "Vector.hpp"

// Constr (copy)
Vector::Vector(const Vector& otherVector) {
  size = otherVector.getSize();
  data = new double[size];

  for (int i = 0; i < size; i++) {
    data[i] = otherVector.data[i];
  }
}

// Constr (init size; init elements to 0)
