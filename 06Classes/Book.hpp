/* Book.hpp */
// Book class
#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
using std::string;

class Book {
public:
  string author,
    title,
    publisher,
    format;
  int price; // in cents

  // Constr
  Book();
  
  // Acc
  void setYearOfPublication(int year);
  int getYearOfPublication() const;

private:
  int yearOfPublication;
};

#endif
