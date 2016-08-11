/* e4_matixOps.cpp */
// Matrix addition and multiplication
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;
using std::setprecision;


double* matrixAdd(double* m1[], double* m2[], int nRow, int nCol) {
  int r, // row iterator
    c;    // col iterator
  double* sum[nRow][nCol]; // output matrix

  for (r = 0; r < nRow; r++) {
    for (c = 0; c < nCol; c++) {
      sum[r][c] = m1[r][c] + m2[r][c];
    }
  }

  return sum;
}

double* matrixMultiply(
  double* m1[], double* m2[], int nRow1, int nCol1, int nRow2, int nCol2) {
  double prod[nRow1][nCol2];
  int r1, c2, i;
  double tempSum = 0;

  if (nRow1 != nCol2) {
    cout << "Incompatible matrices\n";
    return prod;
  }


  // Loop through rows in prod...
  for (r1 = 0; r1 < nRow1; r1++) {
    // ...and cols in prod
    for (c2 = 0; c2 < nCol2; c2++) {
      // For each index [r, c] in prod, write the dot prod of m1[r, ] and
      // m2[, c].
      for (i = 0; i < nCol1; i++) {
        tempSum += (m1[r1][i] * m2[c2][i]);
      }

      prod[r1][c2] = tempSum;
      // Reset tempSum
      tempSum = 0;
    }
  }

  return prod;
}

void printSquareMatrix(double* m, int dim) {
  cout << "[[" << setw(7) << setprecision(2);

  for (int i = 0; i < dim; i++) {
    for (int j = 0; j < dim; j++) {
      cout << m[i][j];
    }
    
    cout << endl;
  }
}

int main() {
  const int DIM = 2;
  double A[DIM][DIM] = { { 0, 1 }, { 1, 2 } };
  double B[DIM][DIM] = { { 1, 2 }, { 2, 3 } };
  double C[][];
  double D[][];

  C = matrixAdd(A, B, DIM, DIM);
  D = matrixMultiply(A, B, DIM, DIM);

  cout << "A:\n";
  printSquareMatrix(A, DIM);
  cout << "B:\n";
  printSquareMatrix(B, DIM);
  cout << "A + B:\n";
  printSquareMatrix(C, DIM);
  cout << "AB:\n";
  printSquareMatrix(D, DIM);
  
  return 0;
}
