#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
   std::string city; // note the std::
   city = "Oxford"; // note the double quotation marks
   std::cout << "String length = " << city.length() << "\n";
   std::cout << "Third character = " << city.at(2) << "\n";
   std::cout << "Third character = " << city[2] << "\n";   
   std::cout << city << "\n"; // Prints the string in city
   std::cout << city.c_str() << "\n"; // Also prints city
}
//Code from Chapter01.tex line 624 save as Chapter01_main_624.cpp
