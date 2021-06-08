#include <iostream>

template<class T> T GetMaximum(T number1, T number2);

int main(int argc, char* argv[])
{
   std::cout << GetMaximum<int>(10, -2) << "\n";
   std::cout << GetMaximum<double>(-4.6, 3.5) << "\n";

   return 0;
}

template<class T> T GetMaximum(T number1, T number2)
{
   T result;
   if (number1 > number2)
   {
      result = number1;
   }
   else
   {
      //number1 <= number2
      result = number2;
   }
   return result;
}
//Code from Chapter08.tex line 76 save as Chapter08_main_76.cpp
