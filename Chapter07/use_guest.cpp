#include <iostream>
#include "Guest.hpp"
#include "SpecialGuest.hpp"

int main(int argc, char* argv[])
{
   Guest* p_gu1 = new Guest;
   Guest* p_gu2 = new Guest;
   Guest* p_gu3 = new SpecialGuest;

   //Set the three guests identically
   p_gu1->numberOfNights = 3;
   p_gu1->telephoneBill = 0.00;
   p_gu2->numberOfNights = 3;
   p_gu2->telephoneBill = 0.00;
   p_gu3->numberOfNights = 3;
   p_gu3->telephoneBill = 0.00;

   std::cout << "Bill for Guest 1 = " 
             << p_gu1->CalculateBill() << "\n";
   std::cout << "Bill for Guest 2 = " 
             << p_gu2->CalculateBill() << "\n";
   std::cout << "Smaller bill for Guest 3 = " 
             << p_gu3->CalculateBill() << "\n";
   delete p_gu1;
   delete p_gu2;
   delete p_gu3;
   return 0;
}
//Code from Chapter07.tex line 327 save as use_guest.cpp
