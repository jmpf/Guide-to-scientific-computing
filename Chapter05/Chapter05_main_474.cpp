#include <iostream>

void Multiply(double scalar, double* u, double* v, int n);

void Multiply(double scalar, double** A, double** B, int n);

int main(int argc, char* argv[])
{
   int n = 2;
   double* u = new double [n];
   double* v = new double [n];
   double** A = new double* [n];
   double** B = new double* [n];
   for (int i=0; i<n; i++)
   {
      A[i] = new double [n];
      B[i] = new double [n];
   }

   u[0] = -8.7;  u[1] = 3.2;
   A[0][0] = 2.3;  A[0][1] = -7.6;
   A[1][0] = 1.3;  A[1][1] = 45.3;
   double s = 2.3, t = 4.8;

   // vector multiplication
   Multiply(s, u, v, n);

   // matrix multiplication
   Multiply(t, A, B, n);

   delete[] u;
   delete[] v;
   for (int i=0; i<n; i++)
   {
      delete[] A[i];
      delete[] B[i];
   }
   delete[] A;
   delete[] B;

   return 0;
}

void Multiply(double scalar, double* u, double* v, int n)
{
   // v = scalar*u (scalar by vector)
   for (int i=0; i<n; i++)
   {
      v[i] = scalar*u[i];
   }
}

void Multiply(double scalar, double** A, double** B, int n)
{
   // B = scalar*A (scalar by matrix)
   for (int i=0; i<n; i++)
   {
      for (int j=0; j<n; j++)
      {
         B[i][j] = scalar*A[i][j];
      }
   }
}
//Code from Chapter05.tex line 474 save as Chapter05_main_474.cpp
