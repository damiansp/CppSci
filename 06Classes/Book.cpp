/* Book.cpp */
// Book class member func defs
#include <cassert>
#include "Book.hpp"

void Book::setYearOfPublication(int year) {
  assert((year > 1440) && (year < 2020));
  yearOfPublication = year;
}

int Book::getYearOfPublication() const { return yearOfPublication; }
