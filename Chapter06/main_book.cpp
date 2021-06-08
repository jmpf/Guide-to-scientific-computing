#include <iostream>
#include "Book.hpp"

int main(int argc, char* argv[])
{
   Book my_favourite_book;

   my_favourite_book.author = "Lewis Carroll";
   my_favourite_book.title = 
               "Alice's adventures in Wonderland";
   my_favourite_book.publisher = "Macmillan";
   my_favourite_book.price = 199;
   my_favourite_book.format = "hardback";   
   my_favourite_book.yearOfPublication = 1865;

   std::cout << "Year of publication of " 
             << my_favourite_book.title << " is " 
             << my_favourite_book.yearOfPublication << "\n";
}
//Code from Chapter06.tex line 151 save as main_book.cpp
