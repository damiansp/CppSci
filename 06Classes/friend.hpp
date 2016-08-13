/* friend.hpp */
// friend function demo -- header file
#ifndef FRIEND_HPP
#define FRIEND_HPP

class ExampleClass {
private:
  double mMemberVar1,
    mMemberVar2;

public:
  ExampleClass(double mem1, double mem2);

  double getMin() const;

  friend double getMax(const ExampleClass& exClass);
};

#endif
