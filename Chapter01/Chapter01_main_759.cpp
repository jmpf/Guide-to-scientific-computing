#include <iostream>
#include <cassert>
#include <cmath>

int main(int argc, char* argv[])
{
   double a;
   std::cout << "Enter a non-negative number\n";
   std::cin >> a;
   assert(a >= 0.0);
   std::cout << "The square root of "<< a;
   std::cout << " is " << sqrt(a) << "\n";
   return 0;
}
//Code from Chapter01.tex line 759 save as Chapter01_main_759.cpp
