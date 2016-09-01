/* EBook.hpp */
#ifndef E_BOOK_HPP
#define E_BOOK_HPP

#include <string>
#include "../06Classes/Book.hpp"
using namespace std;

class EBook : public Book {
public:
  EBook();
  string hiddenURL;
};

#endif
