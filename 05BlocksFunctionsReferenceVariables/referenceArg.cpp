/* referenceArg.cpp */
#include <cmath>
#include <iostream>
using std::cout;

void calculateRealAndImaginary(
  double r, double theta, double& real, double& imaginary) {
  real = r * cos(theta);
  imaginary = r * sin(theta);
}



int main(int argc, char* argv[]) {
  double r = 3.4,
    theta = 1.23,
    x, // imag
    y; // real

  calculateRealAndImaginary(r, theta, x, y);

  cout << "Real part: " << x << "\nImaginary part: " << y << "\n\n";

  return 0;
}
