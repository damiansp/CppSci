/* pointerToFunction.cpp */
#include <iostream>
using std::cout;
using std::endl;

double poly2(double x) {
  return x * x;
}

double poly3(double x) {
  return x * x * x;
}



int main(int argc, char* argv[]) {
  double (*pFunc)(double x);

  pFunc = &poly2;
  cout << pFunc(2.0) << endl;

  pFunc = &poly3;
  cout << pFunc(2.0) << endl;

  return 0;
}
