/* vector.cpp */
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
  double* x = new double[10];
  double* y = new double[10];

  for (int i = 0; i < 10; i++) {
    x[i] = ((double) i);
    y[i] = 2.0 * x[i];
  }

  cout << "x\ty\n";
  for (int i = 0; i < 10; i++) {
    cout << x[i] << '\t' << y[i] << '\n';
  }

  cout << endl;

  delete[] x;
  delete[] y;

  return 0;
}
