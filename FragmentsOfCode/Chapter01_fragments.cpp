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
 { //Begin from Chapter01.tex line 251
   int row, column;
   double temperature;
   row = 1;
   column = 2;
   temperature = 3.0;
 } //End from Chapter01.tex line 251
 { //Begin from Chapter01.tex line 285
   int row = 1, column = 2;
   double temperature = 3.0;
 } //End from Chapter01.tex line 285
 { //Begin from Chapter01.tex line 294
   int row = 1, column = 2;
   row = column = 3;
 } //End from Chapter01.tex line 294
 { //Begin from Chapter01.tex line 303
   int row = 1, column = 2;
   row = ( column = 3 );
 } //End from Chapter01.tex line 303
 { //Begin from Chapter01.tex line 312
   int row = 1, column = 2;
   ( row = column ) = 3;
 } //End from Chapter01.tex line 312
 { //Begin from Chapter01.tex line 322
   const double density = 45.621;
 } //End from Chapter01.tex line 322
 { //Begin from Chapter01.tex line 330
   double tolerance = 0.000000000001;
 } //End from Chapter01.tex line 330
 { //Begin from Chapter01.tex line 338
   double tolerance = 1.0e-12;
 } //End from Chapter01.tex line 338
 { //Begin from Chapter01.tex line 353
   int integer1;
   short int integer2;
   long int integer3;
 } //End from Chapter01.tex line 353
 { //Begin from Chapter01.tex line 372
   signed long int integer4; // signed is unnecessary
   unsigned int integer5;
 } //End from Chapter01.tex line 372
 { //Begin from Chapter01.tex line 382
   float floating_point_number1;
   double floating_point_number2;
   long double floating_point_number3;
 } //End from Chapter01.tex line 382
 { //Begin from Chapter01.tex line 466
   int i = 5, j = 2, k;
   k = i / j;
   std::cout << k << "\n";
 } //End from Chapter01.tex line 466
 { //Begin from Chapter01.tex line 477
   int i = 5, j = 2;
   double k;
   k = i / j;
   std::cout << k << "\n";
 } //End from Chapter01.tex line 477
 { //Begin from Chapter01.tex line 490
   int i = 5, j = 2;
   double k;
   k = ((double)(i)) / ((double)(j));
   std::cout << k << "\n";
 } //End from Chapter01.tex line 490
 { //Begin from Chapter01.tex line 505
   int array1[2];
   double array2[2][3]; 
//continued below } //End from Chapter01.tex line 505
//continued from above { //Begin from Chapter01.tex line 517
   array1[0] = 1;     // Note that indexing begins from 0
   array1[1] = 10;
   array2[0][0] = 6.4;
   array2[0][1] = -3.1;
   array2[0][2] = 55.0;
   array2[1][0] = 63.0;
   array2[1][1] = -100.9;
   array2[1][2] = 50.8;
//continued below } //End from Chapter01.tex line 517
//continued from above { //Begin from Chapter01.tex line 531
   array1[0]++; // increments the value of this entry by 1
   array2[1][2] = array2[0][1] + array2[1][0]; 
 } //End from Chapter01.tex line 531
 { //Begin from Chapter01.tex line 540
   double array3[3] = {5.0, 1.0, 2.0};
   int array4[2][3] = { {1, 6, -4}, {2, 2, 2} };
 } //End from Chapter01.tex line 540
 { //Begin from Chapter01.tex line 567
   int array5[3] = {0, 1, 2};
 } //End from Chapter01.tex line 567
 { //Begin from Chapter01.tex line 608
   bool flag1, flag2;
   flag1 = true;
   flag2 = false;
 } //End from Chapter01.tex line 608
 { //Begin from Chapter01.tex line 663
   std::cout << "Hello World\n";
 } //End from Chapter01.tex line 663
 { //Begin from Chapter01.tex line 672
   int x = 1, y = 2;
   std::cout << "x = " << x << " and y = " << y << "\n";
 } //End from Chapter01.tex line 672
 { //Begin from Chapter01.tex line 706
   std::cout << "Hello World\n";
   std::cout.flush();
 } //End from Chapter01.tex line 706
 { //Begin from Chapter01.tex line 716
   int pin;
   std::cout << "Enter your PIN, then hit RETURN\n";
   std::cin >> pin;
 } //End from Chapter01.tex line 716
 { //Begin from Chapter01.tex line 725
   int account_number, pin;
   std::cout << "Enter your account number\n"; 
   std::cout << "and then your PIN followed by RETURN\n";
   std::cin >> account_number >> pin;
 } //End from Chapter01.tex line 725
 { //Begin from Chapter01.tex line 788
   double x;
   assert(std::isfinite(x));
 } //End from Chapter01.tex line 788
}//Match main
