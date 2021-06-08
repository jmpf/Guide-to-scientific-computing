#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
   std::string name;
   std::cout << "Enter your name and then hit RETURN\n"; 
   std::getline(std::cin, name);
   std::cout << "Your name is " << name << "\n";

   return 0;
}
//Code from Chapter01.tex line 736 save as Chapter01_main_736.cpp
