#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
   std::cout << "Number of command line arguments = " 
             << argc << "\n";
   for (int i=0; i<argc; i++)
   {
      std::cout << "Argument " << i  << " = " << argv[i]; 
      std::cout << "\n";
   }

   std::string program_name = argv[0];
   int number_of_nodes = atoi(argv[1]);
   double conductivity = atof(argv[2]);
   std::cout << "Program name = " <<  program_name << "\n";
   std::cout << "Number of nodes = " << number_of_nodes; 
   std::cout << "\n";
   std::cout << "Conductivity = " << conductivity << "\n"; 

   return 0;
}
//Code from Chapter03.tex line 274 save as Chapter03_main_274.cpp
