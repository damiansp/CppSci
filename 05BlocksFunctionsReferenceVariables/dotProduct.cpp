/* dotProduct.cpp */
// Calculate the dot product (scalar product) of two vectors
#include <iostream>
using std::cout;

double dotProduct(int size, double* v1, double* v2) {
  double dotProd = 0.0;

  for (int i = 0; i < size; ++i) {
    dotProd += v1[i] * v2[i];
  }

  return dotProd;
}

int main(int argc, char* argv[]) {
  int n = 3;
  double* x = new double [n];
  double* y = new double [n];

  x[0] = 0.0;
  x[1] = 1.1;
  x[2] = 2.2;
  y[0] = 0.1;
  y[1] = 1.2;
  y[2] = 1.3;

  double dotProd = dotProduct(n, x, y);

  cout << "dot((0.0, 1.1, 2.2), (0.1, 1.2, 2.3)): " << dotProd << "\n\n";

  delete[] x;
  delete[] y;

  return 0;
}
