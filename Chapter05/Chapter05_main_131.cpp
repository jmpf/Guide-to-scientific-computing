#include <iostream>

void HasNoEffect(double x);

int main(int argc, char* argv[])
{
   double x = 2.0;
   HasNoEffect(x);
   std::cout << x << "\n";  // will print out 2.0

   return 0;
}

void HasNoEffect(double x)
{
   // x takes the value 2.0 here 
   x += 1.0;
   // x takes the value 3.0 here
}
//Code from Chapter05.tex line 131 save as Chapter05_main_131.cpp
