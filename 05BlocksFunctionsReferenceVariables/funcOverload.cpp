/* funcOverload.cpp */
// Function "multiply" overloaded to multiply scalar by both vector and matrix
#include <iostream>
using std::cout;
using std::endl;

/* vector version */
void multiply(double scalar, double* u, double* v, int n) {
  // v = scalar * u
  for (int i = 0; i < n; i++) {
    v[i] = scalar * u[i];
    cout << v[i] << '\t';
  }
}

/* matrix version */
void multiply(double scalar, double** A, double** B, int n) {
  // B = scalar * A
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      B[i][j] = scalar * A[i][j];
      cout << B[i][j] << '\t';
    }
    cout << '\n';
  }
}



int main(int argc, char* argv[]) {
  int n = 2;
  double s = 2.3,
    t = 4.8;
  double* u = new double [n];
  double* v = new double [n];
  double** A = new double* [n];
  double** B = new double* [n];

  for (int i = 0; i < n; i++) {
    A[i] = new double [n];
    B[i] = new double [n];
  }

  u[0] = -8.7; u[1] = 3.2;
  A[0][0] = 2.3; A[0][1] = -7.6;
  A[1][0] = 1.3; A[1][1] = 45.3;

  // vec mult
  multiply(s, u, v, n);
  cout << endl;
  
  // matrix mult
  multiply(t, A, B, n);
  cout << endl;

  delete[] u;
  delete[] v;

  for (int i = 0; i < n; i++) {
    delete[] A[i];
    delete[] B[i];
  }

  delete[] A;
  delete[] B;

  return 0;
}
