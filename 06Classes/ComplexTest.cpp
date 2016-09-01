/* ComplexTest.cpp */
#include <iostream>
#include "Complex.hpp"
using namespace std;

int main(int argc, char* argv[]) {
  Complex z1(4., 3.),
    z2 = z1.power(3),
    z3 = -z2,
    z4 = z1 + z2,
    zs[2];
  

  cout << "z1 = " << z1 << '\n'
       << "mod(z1) = " << z1.modulus() << '\n'
       << "arg(z1) = " << z1.argument() << '\n';
  cout << "z2 = z1^3 = " << z2 << '\n';
  cout << "z3 = -z2 = " << z3 << '\n';
  cout << "z4 = z1 + z2 = " << z4 << '\n';

  zs[0] = z1;
  zs[1] = z2;

  cout << "Second element of zs, zs[1] = " << zs[1] << '\n';

  return 0;  
}
