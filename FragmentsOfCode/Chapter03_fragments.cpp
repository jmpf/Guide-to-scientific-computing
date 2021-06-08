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
 { //Begin from Chapter03.tex line 24
   int x, y;
   if (y == 0)
   {
      std::cerr << "Error - division by zero\n";
   }
   else
   {
      // y not zero
      std::cout << x/y << "\n";
   }
 } //End from Chapter03.tex line 24
 { //Begin from Chapter03.tex line 109
   std::ofstream write_output("/etc/Output.dat");
 } //End from Chapter03.tex line 109
 { //Begin from Chapter03.tex line 130
   std::ofstream write_output("Output.dat", std::ios::app);
 } //End from Chapter03.tex line 130
 { //Begin from Chapter03.tex line 247
   std::ofstream write_output("OutputVerified.dat");
   assert(write_output.is_open());
   for (int i=0; i<100; i++)
   {
      write_output << i << "\n";
      assert(write_output.good());
   }
 } //End from Chapter03.tex line 247
}//Match main
