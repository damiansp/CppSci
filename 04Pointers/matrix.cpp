/* matrix.cpp */
#include <iostream>
using std::cout;
using std::endl;

int main() {
  int rows = 5,
    cols = 3;
  double** A = new double* [rows];

  for (int i = 0; i < rows; i++) {
    A[i] = new double [cols];
  }

  // print A
  cout << "A:\n";
  for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
      cout << A[r][c] << '\t';
    }

    cout << '\n';
  }

  // Delete A
  for (int i = 0; i < rows; i++) {
    delete[] A[i];
  }
  
  delete[] A;
}
