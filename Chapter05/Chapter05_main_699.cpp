#include <iostream>
#include <cassert>

int CalculateFactorial(int n);

int main(int argc, char* argv[])
{
   int n = 7;
   std::cout << "The factorial of " << n
             << " is " << CalculateFactorial(n) << "\n";

   return 0;
}

int CalculateFactorial(int n)
{
   assert (n > 0);
   if (n == 1)
   {
      return 1;
   }
   else
   {
      // n>1
      return n*CalculateFactorial(n-1);
   }
}
//Code from Chapter05.tex line 699 save as Chapter05_main_699.cpp
