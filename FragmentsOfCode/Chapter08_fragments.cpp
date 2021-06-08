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
 if (false) { //Begin from Chapter08.tex line 18
   double A[5];
   A[7] = 5.0;
 } //End from Chapter08.tex line 18
 { //Begin from Chapter08.tex line 370
   // Requires C++11 or above
   auto i = 1;
   auto x = 22.5;
 } //End from Chapter08.tex line 370
 { //Begin from Chapter08.tex line 392
   auto x = 20; // Compiler infers x as int 
   x += 2.5;    // Programmer might assume x is double
   std::cout << "x = "<<x<<"\n";  // x = 22
 } //End from Chapter08.tex line 392
 { //Begin from Chapter08.tex line 411
   std::vector<std::string> destinations;
   // (Fill the vector with names...)

   for (auto c=destinations.begin(); 
             c!=destinations.end(); c++)
   {
      std::cout << *c << "\n";
   }
 } //End from Chapter08.tex line 411
 { //Begin from Chapter08.tex line 438
   int odd[4] = {1,3,5,7};               // Old style
   std::array<int, 4> even =  {2,4,6,8}; // New style
   assert( odd[3] + 1 == even[3] );
 } //End from Chapter08.tex line 438
 { //Begin from Chapter08.tex line 472
   std::array<int, 4> num_array = {1, 3, 5, 3};
   std::vector<int> num_vector(num_array.begin(), 
                               num_array.end());
   std::set<int> num_set(num_array.begin(), num_array.end());
   assert( num_set.size() < num_vector.size() );
 } //End from Chapter08.tex line 472
 { //Begin from Chapter08.tex line 495
   std::tuple<std::string, std::string, int> explorer =
               std::make_tuple("The explorer", 
               "Katherine Rundell", 2017);
   std::cout<<"Title is "<<std::get<0>(explorer)<<"\n";
   std::cout<<"Published: "<<std::get<2>(explorer)<<"\n";

   auto h=std::make_tuple("The hobbit", "JRR Tolkien", 1937);           
 } //End from Chapter08.tex line 495
 { //Begin from Chapter08.tex line 522
   for (int even : {2,4,6,8})
   {
      std::cout << even << "\n";
   }
 } //End from Chapter08.tex line 522
 { //Begin from Chapter08.tex line 566
   std::vector<std::string> destinations = 
         {"Paris", "New York", "Singapore"};

   // Range-based loop
   for (std::string city : destinations)
   {
      std::cout << city << "\n";
   }
   // Use a reference to alter the members
   for (std::string& r_city : destinations)
   {
      r_city = r_city + " (modified)";
      std::cout << r_city << "\n";
   }
   // A very compact form
   for (auto city:destinations) std::cout<<city<<"\n";
 } //End from Chapter08.tex line 566
 { //Begin from Chapter08.tex line 614
   std::vector<int> evens = {2,4,6,8};

   // Locally declare the equivalent of
   //   void twice(int& n){ n*=2; }

   auto twice = [](int& n){n *= 2;};
   std::for_each(evens.begin(), evens.end(), twice);

   // Compact form
   std::for_each(evens.begin(), evens.end(), 
                 [](int& n){n *= 2;} );
 } //End from Chapter08.tex line 614
}//Match main
