#include "Book.hpp"
#include <cassert>

//Overridden default constructor
Book::Book()
{
   author = "unspecified";
   title = "unspecified";
   publisher = "unspecified";
   format = "unspecified";
}

//Overridden copy constructor (mimics system version)
Book::Book(const Book& otherBook)
{
   author = otherBook.author;
   title = otherBook.title;
   publisher = otherBook.publisher;
   format = otherBook.format;
   price = otherBook.price;
   mYearOfPublication = otherBook.GetYearOfPublication();
}

//Specialised constructor
Book::Book(std::string bookTitle)
{
   title = bookTitle;
}

void Book::SetYearOfPublication(int year)
{
   assert ((year > 1440) && (year < 2020));
   mYearOfPublication = year;
}

int Book::GetYearOfPublication() const
{
   return mYearOfPublication;
}
//Code from Chapter06.tex line 678 save as Book.cpp
