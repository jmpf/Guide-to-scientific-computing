#ifndef GUESTDEF
#define GUESTDEF

#include <string>

class Guest
{
public:
   std::string name, roomType, arrivalDate;
   int numberOfNights;
   double telephoneBill;
   virtual double CalculateBill();
};

#endif
//Code from Chapter07.tex line 258 save as Guest.hpp
