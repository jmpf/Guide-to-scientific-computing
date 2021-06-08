#include <iostream>
#include <fstream>
#include <cmath>
#include <cassert>
#include <cstdlib>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <memory>
int main(int argc, char* argv[]){
 { //Begin from Chapter02.tex line 78
   double x = -2.0;

   if (x < 0.0)
   {
      x = 0.0;
   }
 } //End from Chapter02.tex line 78
 { //Begin from Chapter02.tex line 92
   int i;
   //...
   double y;
   if (i > 0)
   {
      y = 2.0;
   }
   else
   {
      //When i <= 0
      y = 10.0;
   }
 } //End from Chapter02.tex line 92
 { //Begin from Chapter02.tex line 114
   int i;
   //...
   double y;
   if (i > 100)
   {
      y = 2.0;
   }
   else if (i < 0)
   {
      y = 10.0;
   }
   else
   {
      //When 0 <= i <= 100
      y = 5.0;
   }
 } //End from Chapter02.tex line 114
 { //Begin from Chapter02.tex line 145
   double x, z, p, q;
   double y;
   if (x > z)
   {
      if (p > q)
      {
         //Both conditions have been met
         y = 10.0;
      }
   }
 } //End from Chapter02.tex line 145
 { //Begin from Chapter02.tex line 163
   bool flag = true;
   if (flag)
   {
      std::cout << "This will be printed\n";
   }
   else
   {
      // flag is false
      std::cout << "This won't be printed\n";
   }
 } //End from Chapter02.tex line 163
 { //Begin from Chapter02.tex line 218
   double x, z, p, q;
   double y;
   if ((x > z) && (p > q))
   {
      //Both conditions have been met
      y = 10.0;
   }
 } //End from Chapter02.tex line 218
 { //Begin from Chapter02.tex line 232
   double p, q;
   int i;
   double y;
   if ((p > q) || (i != 1))
   {
      //One or both conditions have been met
      y = 10.0;
   }
   else
   {
      //Neither condition has been met: p<=q and i==1 
      y = -10.0;
   }
 } //End from Chapter02.tex line 232
 { //Begin from Chapter02.tex line 251
   int i;
   bool flag = false;
   if (!flag)
   {
      // !flag is true when flag is false
      i += 2;
   }
 } //End from Chapter02.tex line 251
 { //Begin from Chapter02.tex line 270
   double x = 10.0;
   while (x > 1.0)
   {
      // This loop will execute while x > 1, so if the 
      // value of x does not decrease then it will not 
      // terminate.
      x *= 0.5;
   }
   // Here we know the guard (x > 1.0) has broken.
   // This means that after the loop, x <= 1.0
 } //End from Chapter02.tex line 270
 { //Begin from Chapter02.tex line 286
   double x = 10.0;
   int count = 0;
   while (x > 1.0)
   {
      x *= 0.5;
      std::cout << "x = " << x << ",  count = " 
                << count << "\n";
      count++;
      std::cout << "x = " << x << ",  count = " 
                << count << "\n";
      std::cout << "Reached bottom of while loop\n";
   }
   std::cout << "count = " << count << "\n";
 } //End from Chapter02.tex line 286
 { //Begin from Chapter02.tex line 327
   double x = 0.8;
   int count = 0;
   do
   {
      x *= 0.5;
      std::cout << "x = " << x << ",  count = " 
                << count << "\n";
      count++;
      std::cout << "x = " << x << ",  count = " 
                << count << "\n";
      std::cout << "Reached bottom of do-while loop\n";
   } while (x > 1.0);
   std::cout << "count = " << count << "\n";
 } //End from Chapter02.tex line 327
 { //Begin from Chapter02.tex line 361
   for (int i=0; i<10; i++)
   {
      std::cout << i << "  ";
   }
 } //End from Chapter02.tex line 361
 { //Begin from Chapter02.tex line 379
   for (int i=0; i<5; i++)
   {
      for (int j=5; j>i; j--)
      {
         std::cout << "i = " << i 
                   << "    j = " << j << "\n";
      }
   }
 } //End from Chapter02.tex line 379
 { //Begin from Chapter02.tex line 436
   double vector1[2], vector2[2];
   vector1[0] = 0.5; vector1[1] = -2.3;
   vector2[0] = 34.2; vector2[1] = 0.015;
   double scalar_product = 0.0;
   for (int i=0; i<2; i++)
   {
      scalar_product += vector1[i] * vector2[i];
   }
 } //End from Chapter02.tex line 436
 { //Begin from Chapter02.tex line 452
   int i;
   switch(i)
   {
      case 1:
         std::cout << "i = 1\n";
      case 20:
         std::cout << "i = 1 or i = 20\n";
         break;
      default:
         std::cout << "i is not 1 or 20\n";
   }
 } //End from Chapter02.tex line 452
 { //Begin from Chapter02.tex line 480
   double x = 2.0;
   for (int i=0; i<5; i++);
   {
      x *= 2.0;
   }
   std::cout << "x = " << x << "\n";
 } //End from Chapter02.tex line 480
 { //Begin from Chapter02.tex line 536
   // This loop is natural for MATLAB programmers
   for (int j=1; j<=4; j++)
   {
      std::cout << "j = " << j << "\n";
   } 
   // This loop is natural for C++ programmers
   for (int j=0; j<4; j++)
   {
      std::cout << "j = " << j << "\n";
   } 
 } //End from Chapter02.tex line 536
 if (false) { //Begin from Chapter02.tex line 608
   double positive_numbers[4] = {1.0, 5.65, 42.0, 0.01};
   double max = 0.0;
   int count = 0;
   while (count < 4)
   {
      if (positive_numbers[count] > max)
      {
         max = positive_numbers[count];
      }
   }
 } //End from Chapter02.tex line 608
 { //Begin from Chapter02.tex line 628
   int i, j, k;
   if (i == j)
   {
      k = 0;
   }
 } //End from Chapter02.tex line 628
 { //Begin from Chapter02.tex line 639
   double p, q;
   int k;
   if (fabs(p-q) < 1.0e-8)
   {
      k = 0;
   }
 } //End from Chapter02.tex line 639
 { //Begin from Chapter02.tex line 654
   double x, y, z;
   if ((x > y) || (x < 5.0))
   {
      z = 4.0;
   }
   else
   {
      z = 2.0;
   }
 } //End from Chapter02.tex line 654
}//Match main
