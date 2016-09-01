/* DoubleVectorTest.cpp */
#include <iostream>
#include "DoubleVector.hpp"

int main(int argc, char* argv[]) {
  DoubleVector<5> v;
  v[0] = 1.0;
  v[7] = 8.8; // will trip assert()

  return 0;
}
