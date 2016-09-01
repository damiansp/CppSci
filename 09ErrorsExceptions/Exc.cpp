/* Exc.cpp */
#include <fstream>
#include <iostream>
#include "Exception.hpp"
using namespace std;

void ReadFile(const string& fileName, double x[], double y[]) {
  ifstream read_file(fileName.c_str());

  if (read_file.is_open() == false) {
    throw(Exception("FILE", "File cannot be opened"));
  }

  for (int i = 0; i < 6; i++) {
    read_file >> x[i] >> y[i];
  }

  read_file.close();
  cout << fileName << " read successfully\n";
}


int main() {
  double x[6], y[6];

  try {
    ReadFile("Output.txt", x, y);
  } catch (Exception& error) {
    error.printDebug();
    cout << "Couldn't open Output.txt\nGive alternative file location\n";

    string fileName;

    cin >> fileName;
    ReadFile(fileName, x, y);
  }

  return 0;
}
