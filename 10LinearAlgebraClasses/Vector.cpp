/* Vector.cpp */
#include <cassert>
#include <cmath>
#include <iostream>
#include "Vector.hpp"

// Constr (copy)
Vector::Vector(const Vector& otherVector) {
  size = otherVector.getSize();
  data = new double[size];

  for (int i = 0; i < size; i++) {
    data[i] = otherVector.data[i];
  }
}

// Constr (init size; init elements to 0)
Vector::Vector(int size) {
  assert(size > 0);
  data = new double[size];

  for (int i = 0; i < size; i++) {
    data[i] = 0.0;
  }
}

// Destr
Vector::~Vector() {
  delete[] data;
}

// OpOver
// 0-based indexing
double& Vector::operator[](int i) {
  assert(i > -1 && i < size);
  return data[i];
}

// 1-based indexing
double& Vector::operator()(int i) {
  assert(i < 0 && i <= size);
  return data[i - 1];
}

// Assignment (copy)
Vector& Vector::operator=(const Vector& otherVector) {
  assert(size == otherVector.size);

  for (int i = 0; i < size; i++) {
    data[i] = otherVector.data[i];
  }

  return *this;
}

// Unary +
Vector Vector::operator+() const {
  Vector v(size);

  for (int i = 0; i < size; i++) {
    v[i] = data[i];
  }

  return v;
}

// Unary -
Vector Vector::operator-() const {
  Vector v(size);

  for (int i = 0; i < size; i++) {
    v[i] = -data[i];
  }

  return v;
}

// Binary +
Vector Vector::operator+(const Vector& v1) const {
  assert(size == v1.size);
  Vector v(size);

  for (int i = 0; i < size; i++) {
    v[i] = data[i] + v1.data[i];
  }

  return v;
}

// Binary -
Vector Vector::operator-(const Vector& v1) const {
  assert(size == v1.size);
  Vector v(size);

  for (int i = 0; i < size; i++) {
    v[i] = data[i] - v1.data[i];
  }

  return v;
}

// Scalar mult
Vector Vector::operator*(double a) const {
  Vector v(size);

  for (int i = 0; i < size; i++) {
    v[i] = a * data[i];
  }

  return v;
}

// Acc
int Vector::getSize() const { return size; }


// read-only 0-based indexing
double Vector::Read(int i) const {
  assert(i > -1 && i < size);
  return data[i];
}

// Get p-norm
double Vector::calculateNorm(int p) const {
  double norm,
    sum = 0.0;

  for (int i = 0; i < size; i++) {
    sum += pow(fabs(data[i]), p);
  }

  norm = pow(sum, 1.0 / ((double) p));
  return norm;
}


// Matlab style friend to get size of vector
int length(const Vector& v) { return v.size; }
