/* setPrecision.cpp */
#include <fstream>
#include <iostream>

int main(int argc, char* argv[]) {
  double x = 1.234567890;
  std::ofstream writeOutput("OutputPrecise.dat");

  writeOutput.precision(3);
  writeOutput << x << "\n";

  writeOutput.precision(5);
  writeOutput << x << "\n";

  writeOutput.precision(10);
  writeOutput << x << "\n";
  writeOutput.close();
  
  return 0;
}
