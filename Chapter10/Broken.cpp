int main(int argc, char* argv[])
{
   double* x = new double[10];
   double* y = new double[10];

   // Error: x[10] is accessed
   // May cause a run-time error
   for (int i=0; i<=10; i++)
   {
      x[i] = i;
   }

   // Error: z is not set
   int z;
   if (z == 0)
   {
      y[0] = x[0];
   }

   // Error: x de-allocated twice
   // May cause a run-time error
   delete[] x;
   delete[] x;
   // Error: y still allocated
}
//Code from Chapter10.tex line 347 save as Broken.cpp
