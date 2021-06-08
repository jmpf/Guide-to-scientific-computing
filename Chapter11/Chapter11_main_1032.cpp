// Compute pi using Monte Carlo integration
// of 1/(1+x*x) on the interval 0<=x<=1
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <unistd.h> //For getpid()

int main(int argc, char* argv[])
{
   // seed random number generator
   srand(getpid());
   int n_points = 1000000;

   double sum = 0;
   for (int i=0; i<n_points; i++)
   {
      // generate a random number on the interval 0<=x<=1
      double x = rand()/((double)(RAND_MAX));
      double f = 1.0/(1.0+x*x);
      sum += f;
   }
   double pi = 4.0*(sum/((double)(n_points)));
   std::cout << "Pi is approximately " << pi
             << " with error " << pi-M_PI  << "\n"; 

   return 0;
}
//Code from Chapter11.tex line 1032 save as Chapter11_main_1032.cpp
