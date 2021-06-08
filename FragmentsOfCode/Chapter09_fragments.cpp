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
 { //Begin from Chapter09.tex line 500
   double* p_x;
   p_x = new (std::nothrow) double[1000000000];
   if (p_x == NULL)
   {
      std::cout << "Allocation failed\n";
   }
   delete p_x;
 } //End from Chapter09.tex line 500
}//Match main
