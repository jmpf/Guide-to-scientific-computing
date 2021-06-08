#include <cassert>
void RenderAnnulus(double innerRadius, double outerRadius, 
                   int slices, int segments)
{
   //A "helpful" implementation fixes the input
   //so RenderAnnulus(1.0, 0.0, 30, 3); will work
   if (innerRadius > outerRadius)
   {
      //The arguments are the wrong way round
      //Swap them
      double temp = innerRadius;
      innerRadius = outerRadius;
      outerRadius = temp;
   }
   //...then render the annulus
}
//Code from Chapter09.tex line 68 save as RenderAnnulus1.cpp
