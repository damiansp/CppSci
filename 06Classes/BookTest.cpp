/* BookTest.cpp */
#include <iostream>
using std::cout;

#include "Book.hpp"

int main(int argc, char* argv[]) {
  Book alice;

  alice.author = "Lewis Carroll";
  alice.title = "Alice's Adventure in Wonderland";
  alice.publisher = "Macmillan";
  alice.price = 199;
  alice.format = "hardback";
  alice.setYearOfPublication(1865);

  cout << alice.title << " was first published in "
       << alice.getYearOfPublication() << "\n";

  return 0;
}
