#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(int argc, char* argv[])
{
   std::vector<std::string> destinations;
   destinations.reserve(6);
   destinations.push_back("Paris");
   destinations.push_back("New York");
   destinations.push_back("Singapore");
   std::cout << "Length of vector is " 
             << destinations.size() << "\n";
   std::cout << "Entries of vector are\n";

   for (int i=0; i<3; i++)
   {
      std::cout << destinations[i] << "\n";
   }

   std::vector<std::string>::const_iterator c;
   for (c=destinations.begin(); c!=destinations.end(); c++)
   {
      std::cout << *c << "\n";
   }

   destinations.insert(destinations.begin(), "Sydney");
   destinations.insert(destinations.begin()+1, "Moscow");
   destinations.push_back("Frankfurt");
   std::cout << "Length of vector is " 
             << destinations.size() << "\n";
   std::cout << "Entries of vector are\n";

   for (c=destinations.begin(); c!=destinations.end(); c++)
   {
      std::cout << *c << "\n";
   }

   destinations.erase(destinations.begin()+3, 
                      destinations.end());
   std::cout << "Length of vector is " 
             << destinations.size() << "\n";
   std::cout << "Entries of vector are\n";

   for (c=destinations.begin(); c!=destinations.end(); c++)
   {
      std::cout << *c << "\n";
   }

   sort(destinations.begin(), destinations.end());
   std::cout << "Length of vector is " 
             << destinations.size() << "\n";
   std::cout << "Entries of vector are\n";

   for (c=destinations.begin(); c!=destinations.end(); c++)
   {
      std::cout << *c << "\n";
   }

   return 0;
}
//Code from Chapter08.tex line 141 save as Chapter08_main_141.cpp
