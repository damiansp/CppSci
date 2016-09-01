/* EBookTest.cpp */
#include <iostream>
#include "EBook.hpp"
using namespace std;

int main(int argc, char* argv[]) {
  EBook cat;

  cat.title = "Cat's Cradle";
  cat.author = "Kurt Vonnegut";
  cat.setYearOfPublication(1998);
  cat.hiddenURL =
    "https://www.amazon.com/Cats-Cradle-Novel-Kurt-Vonnegut/dp/038533348X";

  cout << cat.title << ", by " << cat.author << " ("
       << cat.getYearOfPublication() << ") is available online at:\n"
       << cat.hiddenURL << endl;  
  return 0;
}
