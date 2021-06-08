#include <iostream>
#include "Ebook.hpp"

int main(int argc, char* argv[])
{
   Ebook holiday_reading;
   holiday_reading.title = "The skull beneath the skin";
   holiday_reading.author = "P D James";
   std::cout << "The author is " << holiday_reading.author 
             << "\n";
   std::cout << "The title is " << holiday_reading.title 
             << "\n";
   std::cout << "The format is " << holiday_reading.format 
             << "\n";

   holiday_reading.SetYearOfPublication(1982);
   std::cout << "Year of publication is " 
             << holiday_reading.GetYearOfPublication() 
             << "\n";

   holiday_reading.hiddenUrl = 
             "http://ebook.example.com/example-book";
   std::cout << "The URL is " 
             << holiday_reading.hiddenUrl << "\n";

   return 0;
}
//Code from Chapter07.tex line 157 save as main.cpp
