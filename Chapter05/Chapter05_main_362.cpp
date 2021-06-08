#include <iostream>
#include <cmath>

void CalculateRealAndImaginary(double r, double theta, 
                               double& real, 
                               double& imaginary);

int main(int argc, char* argv[])
{
   double r = 3.4;
   double theta = 1.23;
   double x, y;
   CalculateRealAndImaginary(r, theta, x, y);
   std::cout << "Real part = " << x << "\n";
   std::cout << "Imaginary part = " << y << "\n";

   return 0;
}

void CalculateRealAndImaginary(double r, double theta, 
                               double& real, 
                               double& imaginary)
{
   real = r*cos(theta);
   imaginary = r*sin(theta);
}
//Code from Chapter05.tex line 362 save as Chapter05_main_362.cpp
