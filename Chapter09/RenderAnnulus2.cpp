#include <cassert>
void RenderAnnulus(double innerRadius, double outerRadius, 
                   int slices, int segments)
{
   //Another implementation only checks the input
   //so RenderAnnulus(1.0, 0.0, 30, 3); trips an assertion
   assert (innerRadius < outerRadius);
   //...then render the annulus
}
//Code from Chapter09.tex line 91 save as RenderAnnulus2.cpp
