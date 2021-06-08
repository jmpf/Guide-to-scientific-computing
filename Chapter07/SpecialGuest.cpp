#include "SpecialGuest.hpp"

double SpecialGuest::CalculateBill()
{
   return 45.0 + ((double)(numberOfNights-1))*40.0;
}
//Code from Chapter07.tex line 312 save as SpecialGuest.cpp
