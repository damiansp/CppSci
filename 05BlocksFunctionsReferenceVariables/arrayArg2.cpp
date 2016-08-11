/* arrayArg2.cpp */
#include <cmath>
#include <iostream>
using std::cout;

void fillArrays(double* u, double** A) {
  u[2] = 1.0;
  A[2][3] = 4.0;
}



int main(int argc, char* argv[]) {
  double* u = new double [10];
  double** A = new double* [10];

  for (int i = 0; i < 10; ++i) {
    A[i] = new double [10];
  }

  fillArrays(u, A);
  cout << u[2] << "\n" << A[2][3] << "\n\n";

  delete[] u;
  for (int i = 0; i < 10; ++i) {
    delete[] A[i];
  }

  delete[] A;

  return 0;
}
