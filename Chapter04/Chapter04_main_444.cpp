#include <memory> // Requires C++11 or above
#include <cassert>

int main()
{
   std::unique_ptr<int> p_x(new int);
   *p_x = 5;  // 'de-reference' to alter contents

   // The following won't compile because p_x 
   // is not a raw pointer to int
   //    int* p_y =  p_x;
   int* p_y = p_x.get();  // Get raw pointer

   std::unique_ptr<int> p_z;
   // The following won't compile
   //  p_z = p_x;
   p_z = std::move(p_x); // Transfer ownership
   assert(p_z);  // Test p_z is in use 
   assert(!p_x); // Test that p_x not in use
   p_z.reset();
   assert(!p_z); // Test p_z is also not in use
   exit(0);
}
//Code from Chapter04.tex line 444 save as Chapter04_main_444.cpp
