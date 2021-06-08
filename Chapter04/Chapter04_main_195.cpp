#include <iostream>

int main(int argc, char* argv[])
{
   double* x;
   double* y;
   x = new double [10];
   y = new double [10];

   for (int i=0; i<10; i++)
   {
      x[i] = ((double)(i));
      y[i] = 2.0*x[i];
   }

   delete[] x;
   delete[] y;

   return 0;
}
//Code from Chapter04.tex line 195 save as Chapter04_main_195.cpp
