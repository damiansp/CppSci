/* Book.cpp */
// Book class member func defs
#include <cassert>
#include "Book.hpp"

// Constr (default(
Book::Book() {
  author    = "unspecified";
  title     = "unspecified";
  publisher = "unspecified";
  format    = "unspecified";
}

void Book::setYearOfPublication(int year) {
  assert((year > 1440) && (year < 2020));
  yearOfPublication = year;
}

int Book::getYearOfPublication() const { return yearOfPublication; }
