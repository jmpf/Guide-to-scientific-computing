#include <iostream>

int main(int argc, char* argv[])
{
   double u[3] = {1.0, 2.0, 3.0};
   double v[3] = {6.0, 5.0, 4.0};
   double A[3][3] = {{1.0, 5.0, 0.0}, 
                     {7.0, 1.0, 2.0},
                     {0.0, 0.0, 1.0}};
   double B[3][3] = {{-2.0, 0.0, 1.0}, 
                     {1.0, 0.0, 0.0},
                     {4.0, 1.0, 0.0}};

   double w[3];
   for (int i=0; i<3; i++)
   {
      w[i] = u[i] - 3.0*v[i];
   }

   return 0;
}
//Code from Chapter02.tex line 804 save as Chapter02_main_804.cpp
