/* readFileSizeUnknown.cpp */
#include <cassert>
#include <fstream>
#include <iostream>

int main(int argc, char* argv[]) {
  double x[100], y[100];
  int i = 0;
  std::ifstream readFile("Output.dat");

  assert(readFile.is_open());

  while (!readFile.eof()) {
    readFile >> x[i] >> y[i];
  }

  readFile.close();

  return 0;
}
