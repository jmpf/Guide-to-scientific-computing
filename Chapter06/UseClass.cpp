#include <iostream>
#include "ExampleClass.hpp"

int main(int argc, char* argv[])
{
   ExampleClass example(2.0, 3.0);
   std::cout << "Minimum value = " << example.GetMinimum() 
             << "\n";
   std::cout << "Maximum value = " << GetMaximum(example) 
             << "\n";
   return 0;
}
//Code from Chapter06.tex line 822 save as UseClass.cpp
