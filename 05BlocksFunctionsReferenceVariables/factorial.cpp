/* factorial.cpp */
// Recursion demo
#include <cassert>
#include <iostream>
using std::cout;

int factorial(int n) {
  assert (n >= 0);

  if (n == 1 || n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}



int main(int argc, char* argv[]) {
  int n = 7;

  cout << n << "! = " << factorial(n) << '\n';

  return 0;
}
