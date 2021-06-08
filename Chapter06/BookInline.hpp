#ifndef BOOKHEADERDEF
#define BOOKHEADERDEF

#include <string>
#include <cassert>

class Book
{
public:
   std::string author, title, publisher, format;
   int price; //Given in pence
   void SetYearOfPublication(int year)
   {
      assert ((year > 1440) && (year < 2020));
      mYearOfPublication = year;
   }
   int GetYearOfPublication() const
   {
      return mYearOfPublication;
   }
private:
   int mYearOfPublication;
};

#endif
//Code from Chapter06.tex line 463 save as BookInline.hpp
