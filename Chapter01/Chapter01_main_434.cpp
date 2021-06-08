#include <cmath>

int main(int argc, char* argv[])
{
   double x = 7.8, y = 1.65, u = -3.4, z;
   z = fmod(x, y);   // remainder when x is divided by y
                     // z is 1.2 since 7.8 = 4*1.65 + 1.2
   z = atan2(y, x);  // inverse tangent (in radians) of 
                     // angle between the vector
                     // (x, y) and the positive x-axis
                     // note the ordering of y and x in
   z = fabs(u);      // Absolute value of u 
                     // z is 3.4 
                     // note fabs should not be confused 
                     // with abs (the integer equivalent) 

   return 0;
}
//Code from Chapter01.tex line 434 save as Chapter01_main_434.cpp
