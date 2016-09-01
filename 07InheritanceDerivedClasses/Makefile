EBookTest: EBookTest.o EBook.o Book.o
	g++ -Wall EBookTest.o EBook.o Book.o -o EBookTest

EBookTest.o: EBookTest.cpp EBook.hpp Book.cpp Book.hpp
	g++ -c -Wall EBookTest.cpp Book.cpp

Book.o: EBook.cpp EBook.hpp Book.cpp Book.hpp
	g++ -c -Wall EBook.cpp Book.cpp
