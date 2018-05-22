all: lib

lib: libMain.o Library.o LibraryItem.o Album.o Book.o Movie.o Patron.o
	g++ -g libMain.o Library.o LibraryItem.o Album.o Book.o Movie.o Patron.o -o lib

libMain.o: libMain.cpp Album.hpp Book.hpp Library.hpp LibraryItem.hpp Movie.hpp Patron.hpp
	g++ -c libMain.cpp

Library.o: Library.cpp Library.hpp Album.hpp Book.hpp Movie.hpp Patron.hpp
	g++ -c Library.cpp
	
LibraryItem.o: LibraryItem.cpp LibraryItem.hpp
	g++ -c LibraryItem.cpp
	
Album.o: Album.cpp Album.hpp LibraryItem.hpp
	g++ -c Album.cpp
	
Book.o: Book.cpp Book.hpp LibraryItem.hpp
	g++ -c Book.cpp

Movie.o: Movie.cpp Movie.hpp LibraryItem.hpp
	g++ -c Movie.cpp
	
Patron.o: Patron.cpp Patron.hpp LibraryItem.hpp
	g++ -c Patron.cpp