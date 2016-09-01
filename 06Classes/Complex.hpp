/* complex.hpp */
#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <iostream>
using namespace std;

class Complex {
private:
  double realPart,
    imaginaryPart;
public:
  // Constr
  Complex();
  Complex(double r, double i);

  // Operator overload
  Complex& operator=(const Complex& z);
  Complex operator-() const;
  Complex operator+(const Complex& z) const;
  Complex operator-(const Complex& z) const;
  friend ostream& operator<<(ostream& output, const Complex& z);

  double modulus() const;
  double argument() const;

  Complex power(double n) const;

};

#endif
