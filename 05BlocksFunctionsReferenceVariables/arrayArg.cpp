/* arrayArg.cpp */
#include <cmath>
#include <iostream>
using std::cout;
using std::endl;

void fillArrays(double u[], double A[][10], double B[10][10]) {
  u[2] = 1.0;
  A[2][3] = 4.0;
  B[3][3] = -90.6;
}



int main(int argc, char* argv[]) {
  double u[5],
    A[10][10],
    B[10][10];

  fillArrays(u, A, B);

  cout << u[2]
       << "\n" << A[2][3]
       << "\n" << B[3][3] << endl;
  
  return 0;
}
