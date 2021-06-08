#include <cmath>
//  Function to calculate the p-norm of a vector:
//      =  [ Sum_i ( |x_i|^p ) ] ^ (1/p)
//  See "An Introduction to Numerical Analysis" by
//  Endre Suli and David Mayers, page 60, for definition
//  of the p-norm of a vector
//  x is a pointer to the vector which is of size vecSize  
double CalculateNorm(double* x, int vecSize, int p)
{
   double sum = 0.0;
   //Loop over elems x_i of x, incrementing sum by |x_i|**p 
   for (int i=0; i<vecSize; i++)
   {
      double temp = fabs(x[i]);
      sum += pow(temp, p);
   }
   //Return p-th root of sum
   return pow(sum, 1.0/p);
}
//Code from Chapter05.tex line 785 save as DocumentationExample.cpp
