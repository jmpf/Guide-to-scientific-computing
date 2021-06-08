#include <cassert>
#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
   double x[3] = {0.0, 1.0, 0.0};
   double y[3] = {0.0, 0.0, 1.0};
   std::ofstream write_output("Output.dat");
   assert(write_output.is_open());
   for (int i=0; i<3; i++)
   {
      write_output << x[i] << "  " << y[i] << "\n";
   }
   write_output.close();
   return 0;
}
//Code from Chapter03.tex line 70 save as Chapter03_main_70.cpp
