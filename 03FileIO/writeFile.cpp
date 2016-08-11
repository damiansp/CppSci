/* writeFile.cpp */
// Basic writing to file
#include <cassert>
#include <fstream>
#include <iostream>

int main(int argc, char* argv[]) {
  double x[3] = { 0.0, 1.0, 0.0 };
  double y[3] = { 0.0, 0.0, 1.0 };
  std::ofstream writeOutput("Output.dat", std::ios::app);

  assert(writeOutput.is_open());

  for (int i = 0; i < 3; i++) {
    writeOutput << x[i] << " " << y[i] << "\n";
  }

  writeOutput.close();

  return 0;
}
