/* commandLine.cpp */
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  cout << "Number of command line args: " << argc << '\n';

  for (int i = 0; i < argc; i++) {
    cout << "Arg " << i << ": " << argv[i] << '\n';
  }

  string programName = argv[0];
  int nNodes = atoi(argv[1]);
  double conductivity = atof(argv[2]);

  cout << "Program name: " << programName
       << "\nNumber of Nodes: " << nNodes
       << "\nConductivity: " << conductivity << endl;

  return 0;
}
