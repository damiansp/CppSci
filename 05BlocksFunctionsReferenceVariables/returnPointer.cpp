/* returnPointer.cpp */

double** AllocateMatrixMemory(int nRows, int nCols) {
  double** matrix = new double* [nRows];

  for (int i = 0; i < nRows; i++) {
    matrix[i] = new double [nCols];
  }

  return matrix;
}

void FreeMatrixMemory(int nRows, double** matrix) {
  for (int i = 0; i < nRows; i++) {
    delete[] matrix[i];
  }

  delete[] matrix;
}



int main(int argc, char* argv[]) {
  double** A = AllocateMatrixMemory(5, 3);

  A[0][1] = 2.0;
  A[4][2] = 4.0;

  FreeMatrixMemory(5, A);
  
  return 0;
}
