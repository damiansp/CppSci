/* formatOutput.cpp */
#include <fstream>
#include <iostream>

int main(int argc, char** argv) {
  std::ofstream writeFile("OutputFormatted.dat");
  double x = 3.4,
    y = 0.0000855,
    z = 984.424;
  
  // Write numbers as +x.<13digits>e+00 (width = 20)
  writeFile.setf(std::ios::scientific);
  writeFile.setf(std::ios::showpos);
  writeFile.precision(13);
  writeFile << x << '\t' << y << '\t' << z << '\n';
  writeFile.close();

  return 0;
}
