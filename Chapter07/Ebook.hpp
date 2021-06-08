#ifndef EBOOKHEADERDEF
#define EBOOKHEADERDEF

#include <string>
#include "Book.hpp"

class Ebook: public Book
{
public:
   Ebook();
   std::string hiddenUrl;
};

#endif
//Code from Chapter07.tex line 107 save as Ebook.hpp
