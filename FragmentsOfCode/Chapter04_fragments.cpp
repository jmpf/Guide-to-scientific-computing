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
 { //Begin from Chapter04.tex line 32
   int total_sum = 10;
//continued below } //End from Chapter04.tex line 32
//continued from above { //Begin from Chapter04.tex line 39
   std::cout << &total_sum << "\n";
 } //End from Chapter04.tex line 39
 { //Begin from Chapter04.tex line 50
   double* p_x;
   int* p_i;
 } //End from Chapter04.tex line 50
 { //Begin from Chapter04.tex line 60
   double *p_x, *p_y;
   int *p_i, j;
 } //End from Chapter04.tex line 60
 { //Begin from Chapter04.tex line 75
   double y, z;     // y, z store double precision numbers
   double* p_x;     // p_x stores the address of a double
                    // precision floating point number
   z = 3.0;
   p_x = &z;        // p_x stores the address of z
   y = *p_x + 1.0;  // *p_x is the contents of the memory
                    // p_x, i.e. the value of z
 } //End from Chapter04.tex line 75
 if (false) { //Begin from Chapter04.tex line 91
   double* p_x;  // p_x can store the address of a double 
                 // precision number - haven't said which
                 // address yet

   *p_x = 1.0;   // trying to store the value 1.0 in an
                 // unspecified memory location
 } //End from Chapter04.tex line 91
 { //Begin from Chapter04.tex line 104
   double* p_x;       // p_x stores the address of a double 
                      // precision floating point number

   p_x = new double;  // assigns an address to p_x
   *p_x = 1.0;        // stores 1.0 in memory with
                      // address p_x
   delete p_x;        // releases memory for re-use 
 } //End from Chapter04.tex line 104
 { //Begin from Chapter04.tex line 117
   double y;
   double* p_x;
   y = 3.0;
   p_x = &y;
   std::cout << "y = " << y << "\n";
   *p_x = 1.0;  // This changes the value of y
   std::cout << "y = " << y << "\n";
 } //End from Chapter04.tex line 117
 { //Begin from Chapter04.tex line 170
   double* x;
   x = new double [10];
//continued below } //End from Chapter04.tex line 170
//continued from above { //Begin from Chapter04.tex line 178
   std::cout << x << "\n";
   std::cout << &x[0] << "\n"; //prints the same value
//continued below } //End from Chapter04.tex line 178
//continued from above { //Begin from Chapter04.tex line 186
   delete[] x;
 } //End from Chapter04.tex line 186
 { //Begin from Chapter04.tex line 224
   int rows = 5, cols = 3;
   double** A;
   A = new double* [rows];
   for (int i=0; i<rows; i++)
   {
      A[i] = new double [cols];
   }
//continued below } //End from Chapter04.tex line 224
//continued from above { //Begin from Chapter04.tex line 257
   for (int i=0; i<rows; i++)
   {
      delete[] A[i];
   }
   delete[] A;
 } //End from Chapter04.tex line 257
 { //Begin from Chapter04.tex line 271
   int A[1000][1000];
 } //End from Chapter04.tex line 271
 { //Begin from Chapter04.tex line 278
   int** A;
   A = new int* [1000];
   for (int i=0; i<1000; i++)
   {
      A[i] = new int[i+1];
   }
 } //End from Chapter04.tex line 278
 { //Begin from Chapter04.tex line 311
   double* p_x;
   p_x = new double[10000];
   assert (p_x != NULL);
 } //End from Chapter04.tex line 311
 { //Begin from Chapter04.tex line 323
   for (int i=0; i<10000; i++)
   {
      double** A;
      A = new double* [50];
      for (int j=0; j<50; j++)
      {
         A[j] = new double [50];
      }
   }
 } //End from Chapter04.tex line 323
}//Match main
