/* getMax.cpp */
#include <iostream>
using namespace std;

template<class T>
T getMax(T n1, T n2) {
  return (n1 > n2) ? n1 : n2;  
}



int main(int argc, char* argv[]) {
  cout << getMax(10,  -2) << endl
       << getMax(-4.6, 3.5) << endl;

  return 0;
}
