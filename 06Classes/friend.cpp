/* friend.cpp */
// Class member func defs
#include "friend.hpp"

// Constr
ExampleClass::ExampleClass(double mem1, double mem2) {
  mMemberVar1 = mem1;
  mMemberVar2 = mem2;
}

double ExampleClass::getMin() const {
  if (mMemberVar1 < mMemberVar2) { return mMemberVar1; }
  else { return mMemberVar2; }
}

// getMax is a friend func
double getMax(const ExampleClass& exClass) {
  if (exClass.mMemberVar1 > exClass.mMemberVar2) {
    return exClass.mMemberVar1;
  } else { return exClass.mMemberVar2; }
}
