/* readFile.cpp */
#include <cassert>
#include <fstream>
#include <iostream>

int main(int argc, char* argv[]) {
  double x[6], y[6];
  std::ifstream readFile("Output.dat");

  assert(readFile.is_open());

  for (int i = 0; i < 6; i++) {
    readFile >> x[i] >> y[i];
  }

  readFile.close();

  return 0;
}
