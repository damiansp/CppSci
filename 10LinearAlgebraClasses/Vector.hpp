/* Vector.hpp */
#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector {
private:
  double* data;
  int size;

public:
  // Constr/Destr
  Vector(const Vector& otherVector);
  Vector(int size);
  ~Vector();

  // Acc
  int getSize() const;

  // OpOverload
  double& operator[](int i); // 0-based indexing
  double& operator()(int i); // 1-based indexing
  Vector& operator=(const Vector& otherVector); // copy assignment
  Vector operator+() const;                     // unary +
  Vector operator-() const;                     // unary -
  Vector operator+(const Vector& v1) const;     // binary +
  Vector operator-(const Vector& v1) const;     // binary -
  Vector operator*(double a) const;             // scalar mult
  

  // Read-only 0-based indexing
  double Read(int i) const;

  // Calculate p-norm
  double calculateNorm(int p = 2) const;

  // Length
  friend int length(const Vector& v);
};

// Friend func prototype signature
int length(const Vector& v);

#endif
