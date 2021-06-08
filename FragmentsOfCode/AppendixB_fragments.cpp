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
 { //Begin from AppendixB.tex line 95
   double a, b, x;
   if (a > b)
   {
      x = 100.0;
   }
   else
   {
      // a <= b
      x = 0.0;
   }
 } //End from AppendixB.tex line 95
 { //Begin from AppendixB.tex line 114
   double a, b, x;
   x = (a > b) ? 100.0 : 0.0;
 } //End from AppendixB.tex line 114
}//Match main
