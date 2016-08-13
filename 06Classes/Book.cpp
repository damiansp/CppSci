/* Book.cpp */
// Book class member func defs
#include <cassert>
#include <cstring>
#include "Book.hpp"
using namespace std;

// Constr (default)
Book::Book() {
  author    = "unspecified";
  title     = "unspecified";
  publisher = "unspecified";
  format    = "unspecified";
}

// Constr (copy)
Book::Book(const Book& otherBook) {
  author    = otherBook.author;
  title     = otherBook.title;
  publisher = otherBook.publisher;
  format    = otherBook.format;
  yearOfPublication = otherBook.getYearOfPublication();
}

// Constr
Book::Book(string bookTitle) {
  title = bookTitle;
}

void Book::setYearOfPublication(int year) {
  assert((year > 1440) && (year < 2020));
  yearOfPublication = year;
}

int Book::getYearOfPublication() const { return yearOfPublication; }
