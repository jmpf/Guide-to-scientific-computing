#ifndef LINEARSYSTEMHEADERDEF
#define LINEARSYSTEMHEADERDEF
#include "Vector.hpp"
#include "Matrix.hpp"

class LinearSystem
{
protected:  // private or protected for Exercise 10.5
   int mSize; // size of linear system
   Matrix* mpA;  // matrix for linear system
   Vector* mpb;  // vector for linear system

   // Only allow constructor that specifies matrix/vector 
   // to be used.  Copy constructor is private or protected.
   LinearSystem(const LinearSystem& otherLinearSystem){};
public:
   LinearSystem(const Matrix& A, const Vector& b);

   // destructor frees memory allocated
   ~LinearSystem();

   // Method for solving system
   virtual Vector Solve();
};

#endif
//Code from AppendixC.tex line 314 save as LinearSystem.hpp
