/* Exception.cpp */
#include <iostream>
#include "Exception.hpp"
using std::cerr;
using std::string;

// Constr
Exception::Exception(string tagString, string probString) {
  mTag = tagString;
  mProblem = probString;
}

void Exception::printDebug() const {
  cerr << "** Error (" << mTag << ") **\n"
       << "Problem: " << mProblem << "\n\n";
}
