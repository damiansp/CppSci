/* Book.hpp */
// Book class header
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
  Book(const Book& otherBook);
  Book(string bookTitle);
  
  // Acc
  void setYearOfPublication(int year);
  int getYearOfPublication() const;

private:
  int yearOfPublication;
};

#endif
