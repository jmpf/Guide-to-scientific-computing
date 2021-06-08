#include "Guest.hpp"

double Guest::CalculateBill()
{
   return telephoneBill + ((double)(numberOfNights))*50.0;
}
//Code from Chapter07.tex line 280 save as Guest.cpp
