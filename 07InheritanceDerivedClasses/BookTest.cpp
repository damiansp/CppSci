/* BookTest.cpp */
#include <iostream>
using std::cout;

#include "Book.hpp"

int main(int argc, char* argv[]) {
  Book alice,
    ender("Ender's Game");
  Book* vendettaPtr = new Book;
  
  alice.author = "Lewis Carroll";
  alice.title = "Alice's Adventure in Wonderland";
  alice.publisher = "Macmillan";
  alice.price = 199;
  alice.format = "hardback";
  alice.setYearOfPublication(1865);

  Book alice2(alice);

  cout << alice.title << " was first published in "
       << alice.getYearOfPublication() << "\n"
       << alice2.title << " was also published in "
       << alice2.getYearOfPublication() << '\n'
       << ender.title << "'s publication date is "
       << ender.getYearOfPublication() << "\n";

  (*vendettaPtr).author = "Alan Moore";
  vendettaPtr->title    = "V for Vendetta";

  cout << vendettaPtr->title << " was written by " << vendettaPtr->author
       << '\n';
    
  
  return 0;
}
