/* Exception.hpp */
#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <string>
using std::string;

class Exception {
private:
  string mTag,
    mProblem;

public:
  Exception(string tagString, string probString);
  void printDebug() const;
};

#endif
