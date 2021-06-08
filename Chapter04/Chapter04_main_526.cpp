#include <memory> // Requires C++11 or above
#include <iostream>

int main()
{
   std::shared_ptr<int> p_x(new int);
   std::cout<<"p_x use count: "<<p_x.use_count()<<"\n";
   *p_x = 5;  // 'de-reference' to alter contents
   // Use this pointer elsewhere
   std::shared_ptr<int> p_y = p_x;
   std::cout<<"p_x use count: "<<p_x.use_count()<<"\n";
   p_y.reset();
   std::cout<<"p_x use count: "<<p_x.use_count()<<"\n";
   p_x.reset();
   std::cout<<"p_x use count: "<<p_x.use_count()<<"\n";
   exit(0);
}
//Code from Chapter04.tex line 526 save as Chapter04_main_526.cpp
