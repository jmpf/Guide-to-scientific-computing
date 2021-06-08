#include <iostream>

void PrintPassOrFail(int score, int passMark);

int main(int argc, char* argv[])
{
   int score = 29, pass_mark = 30;
   PrintPassOrFail(score, pass_mark);

   return 0;
}

void PrintPassOrFail(int score, int passMark)
{
   if (score >= passMark)
   {
      std::cout << "Pass - congratulations!\n";
   }
   else
   {
      // score < passMark
      std::cout << "Fail - better luck next time\n";
   }
}
//Code from Chapter05.tex line 101 save as Chapter05_main_101.cpp
