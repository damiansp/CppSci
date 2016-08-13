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

