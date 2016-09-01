/* DoubleVector.hpp */
#ifndef DOUBLE_VECTOR_HPP
#define DOUBLE_VECTOR_HPP

#include <cassert>

template<unsigned int DIM>
class DoubleVector {
private:
  double mData[DIM];

public:
  double& operator[](int index) {
    assert(index < DIM && index > -1);
    return (mData[index]);
  }
};

#endif
