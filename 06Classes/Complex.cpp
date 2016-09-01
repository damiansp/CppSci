/* Complex.cpp */
// Member func defs
#include <cmath>
#include <iostream>
#include "Complex.hpp"
using namespace std;

// Constr (default)
Complex::Complex() {
  realPart = 0.0;
  imaginaryPart = 0.0;
}

// Constr: Complex z = r + ii
Complex::Complex(double r, double i) {
  realPart = r;
  imaginaryPart = i;
}

// Op overload
/* Assign */
Complex& Complex::operator=(const Complex& z) {
  realPart = z.realPart;
  imaginaryPart = z.imaginaryPart;

  return *this;
}

/* Unary - */
Complex Complex::operator-() const {
  Complex w;
  w.realPart = -realPart;
  w.imaginaryPart = -imaginaryPart;

  return w;
}

/* Arith */
Complex Complex::operator+(const Complex&z) const {
  Complex w;
  w.realPart = realPart + z.realPart;
  w.imaginaryPart = imaginaryPart + z.imaginaryPart;

  return w;
}

Complex Complex::operator-(const Complex&z) const {
  Complex w;
  w.realPart = realPart - z.realPart;
  w.imaginaryPart = imaginaryPart - z.imaginaryPart;

  return w;
}

/* Stream (friend) */
ostream& operator<<(ostream& output, const Complex& z) {
  // Format: (a + bi) or (a - bi)
  output << "(" << z.realPart;

  if (z.imaginaryPart >= 0) {
    output << " + " << z.imaginaryPart;
  } else {
    output << " - " << -z.imaginaryPart;
  }

  output << "i)";

  return output;
}

// Compute the modulus (= Euclidean length of the (r, i) vector)
double Complex::modulus() const {
  return sqrt(realPart * realPart + imaginaryPart * imaginaryPart);
}

// Compute the argument (= angle between +x-axis and (r, i) vector)
double Complex::argument() const {
  return atan2(imaginaryPart, realPart);
}

// Exponentiation of complex number to power of n, using De Moivre's theorem;
// First convert to polar form
Complex Complex::power(double n) const {
  double mod = modulus(),
    arg = argument(),
    resultMod = pow(mod, n),
    resultArg = arg * n,
    realPart = resultMod * cos(resultArg),
    imaginaryPart = resultMod * sin(resultArg);
  Complex z(realPart, imaginaryPart);

  return z;
}



