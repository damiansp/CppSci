/* vectorTest.cpp */
// Example of the STL Vector class
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
  vector<string> destinations;

  destinations.reserve(6);
  destinations.push_back("Paris");
  destinations.push_back("New York");
  destinations.push_back("Singapore");

  cout << "Length of vector is " << destinations.size() << '\n'
       << "Entries of vector (using index notation) are\n";

  for (int i = 0; i < 3; i++) {
    cout << destinations[i] << '\n';
  }

  vector<string>::const_iterator c;

  cout << "Using a const_iterator\n";
  
  for (c = destinations.begin(); c != destinations.end(); c++) {
    cout << *c << '\n';
  }

  destinations.insert(destinations.begin(), "Sydney");
  destinations.insert(destinations.begin() + 1, "Moscow");
  destinations.push_back("Frankfurt");

  cout << "Length of vector is " << destinations.size()
       << "\nEntries are\n";

  for (c = destinations.begin(); c != destinations.end(); c++) {
    cout << *c << '\n';
  }

  destinations.erase(destinations.begin() + 3, destinations.end());

  cout << "Length of vector is " << destinations.size()
       << "\nEntries are\n";

  for (c = destinations.begin(); c != destinations.end(); c++) {
    cout << *c << '\n';
  }

  sort(destinations.begin(), destinations.end());
  cout << "Vector entries sorted are\n";

  for (c = destinations.begin(); c != destinations.end(); c++) {
    cout << *c << '\n';
  }
    
  return 0;
}
