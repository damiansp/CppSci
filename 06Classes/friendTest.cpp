/* friendTest.cpp */
#include <iostream>
#include "friend.hpp"
using namespace std;

int main(int argc, char* argv[]) {
  ExampleClass example(2.2, 9.9);

  cout << "Min: " << example.getMin() << '\n'
       << "Max: " << getMax(example) << endl;

  return 0;
}
