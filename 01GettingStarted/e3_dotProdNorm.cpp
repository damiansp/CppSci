/* e3_dotProdNorm.cpp */
// Calculate the dot product of 2 vs, and the Euclidean norm
#include <cmath>
#include <iostream>
using namespace std;

double dotProd(double* v1, double* v2, int n) {
  double res = 0;

  for (int i = 0; i < n; i++) {
    res += (v1[i] * v2[i]);
  }

  return res;
}

double norm(double* v, int n) {
  double norm = 0;

  for (int i = 0; i < n; i++) {
    norm += v[i] * v[i];
  }

  return sqrt(norm);
}

void printArray(double* a, int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << '\t';

    if (i > 0 && i % 5 == 0) { cout << '\n'; }
  }
}

int main() {
  const int SIZE = 3;
  double v1[SIZE] = { 0.0, 1.1, 2.2 };
  double v2[SIZE] = { 1.1, 2.2, 3.3 };
  double result = 0;

  cout << "v1: ";
  printArray(v1, SIZE);
  cout << "\nv2: ";
  printArray(v2, SIZE);

  result = dotProd(v1, v2, SIZE);
  cout << "\ndotProd(v1, v2): " << result << endl;

  result = norm(v1, SIZE); 
  cout << "||v1|| = " << result << endl;

  result = norm(v2, SIZE);
  cout << "||v2|| = " << result << endl;

  return 0;
}
