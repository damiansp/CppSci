BookTest : BookTest.o Book.o
	g++ -Wall BookTest.o Book.o -o BookTest

Book.o : Book.cpp Book.hpp
	g++ -c -Wall Book.cpp

BookTest.o : BookTest.cpp Book.hpp
	g++ -c -Wall BookTest.cpp
