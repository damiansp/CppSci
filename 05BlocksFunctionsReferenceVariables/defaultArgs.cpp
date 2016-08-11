/* defaultArgs */
// Newton-Raphson method for finding root of a nonlinear equation; demonstrates
// default function arguments
#include <cmath>
#include <iostream>
using std::cout;
using std::endl;

void calculateCubeRoot(
  double& x, double K, double tolerance = 1.0e-6, int maxIter = 100) {
  int iter = 0;
  double resid = x * x * x - K;

  while ((fabs(resid) > tolerance) && (iter < maxIter)) {
    x -= (resid / (3.0 * x * x));
    resid = x * x * x - K;
    iter++;
  }

  cout << x << endl << "(stopped at " << iter + 1 << " iterations)" << endl;
}



int main(int argc, char* argv[]) {
  double x = 1.0,
    K = 12.0,
    tolerance = 0.001;
  int maxIter = 50;
    
  cout << "calculateCubeRoot(x, K):\n> ";
  calculateCubeRoot(x, K);

  cout << "calculateCubeRoot(x, K, tolerance = 0.001):\n> ";
  calculateCubeRoot(x, K, tolerance);

  cout << "calculateCubeRoot(x, K, tolerance = 0.001, maxIter = 50):\n> ";
  calculateCubeRoot(x, K, tolerance, maxIter);
    
  return 0;
}
