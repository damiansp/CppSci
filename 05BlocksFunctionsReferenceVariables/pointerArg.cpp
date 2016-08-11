/* pointerArg.cpp */
#include <cmath>
#include <iostream>
using std::cout;

void calculateRealAndImaginary(
  double r, double theta, double* pReal, double* pImaginary) {
  *pReal = r * cos(theta);
  *pImaginary = r * sin(theta);
}



int main(int argc, char* argv[]) {
  double r = 3.4,
    theta = 1.23,
    x, // real part
    y; // imaginary part

  calculateRealAndImaginary(r, theta, &x, &y);
  cout << "Real part: " << x
       << "\nImaginary part: " << y << "\n\n";
  
  return 0;
}
