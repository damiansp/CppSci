ComplexTest : ComplexTest.o Complex.o
	g++ -Wall ComplexTest.o Complex.o -o ComplexTest

Complex.o : Complex.cpp Complex.hpp
	g++ -c -Wall Complex.cpp

ComplexTest.o : ComplexTest.cpp Complex.hpp
	g++ -c -Wall ComplexTest.cpp

friendTest : friendTest.o friend.o
	g++ -Wall friendTest.o friend.o -o friendTest

friend.o : friend.cpp friend.hpp
	g++ -c -Wall friend.cpp

friendTest.o : friendTest.cpp friend.hpp
	g++ -c -Wall friendTest.cpp

BookTest : BookTest.o Book.o
	g++ -Wall BookTest.o Book.o -o BookTest

Book.o : Book.cpp Book.hpp
	g++ -c -Wall Book.cpp

BookTest.o : BookTest.cpp Book.hpp
	g++ -c -Wall BookTest.cpp

