#include <cmath>
#include <cxxtest/TestSuite.h>
#include "Vector.hpp"
#include "Matrix.hpp"
#include "LinearSystem.hpp"

// An outline solution for Exercise 10.4
class LinearSystemTestSuite : public CxxTest::TestSuite
{
public:
   // Test constructors (using norm etc.)
   void TestDefaultConstructors(void)
   {
      Matrix squ(5,5);
      TS_ASSERT_DELTA(squ.CalculateDeterminant(), 0.0, 1e-8);
      Matrix nonsquare(7,13);
      TS_ASSERT_EQUALS(nonsquare.GetNumberOfRows(),    7);
      TS_ASSERT_EQUALS(nonsquare.GetNumberOfColumns(), 13);
      Vector vec(25);
      TS_ASSERT_DELTA(vec.CalculateNorm(), 0.0, 1.0e-8);
      TS_ASSERT_EQUALS(vec.GetSize(), 25);
      TS_ASSERT_EQUALS(length(vec), 25);
   }
   // Empty test
   void TestSomeExceptions(void)
   {
      // Our code uses assertions for error checking.  
      // If you use Exception then test: 
      //      Matrix a(3,3); Matrix b(4,4);
      //      TS_ASSERT_THROWS_ANYTHING(a+b);
   }
   // Test with cond(a) ~= 1e7
   void TestLargeConditionNumber(void)
   {
      Matrix a(3,3);  Vector b(3); Vector x(3);
      a(1,1) = 1;   a(1,2) = 0;   a(1,3) = 1e7;
      a(2,1) = 1;   a(2,2) =-1;   a(2,3) = 0;
      a(3,1) = 1;   a(3,2) = 0;   a(3,3) = 1;
      b(1) = 1e7+1; b(2) = 0;     b(3) = 2;
      double det = a.CalculateDeterminant();
      TS_ASSERT_DELTA(det, 1.0e7-1.0, 1e-8);
      LinearSystem ls(a, b);
      x = ls.Solve();
      for (int i=1; i<=3; i++)
      {
         TS_ASSERT_DELTA( x(i), 1.0, 1e-8);
      }
   }
   // Gaussian Elimination without pivoting would fail: 
   void TestZeroPivot(void)
   {
      Matrix a(3,3);  Vector b(3); Vector x(3);
      a(1,1) = 0;   a(1,2) = 1;   a(1,3) = 1;
      a(2,1) = 1;   a(2,2) =-1;   a(2,3) = 0;
      a(3,1) = 1;   a(3,2) = 1;   a(3,3) = 1;
      b(1) = 2;     b(2) = 0;     b(3) = 3;
      TS_ASSERT_DELTA( a.CalculateDeterminant(), 1.0, 1e-8);
      LinearSystem ls(a, b);
      x = ls.Solve();
      for (int i=1; i<=3; i++)
      {
         TS_ASSERT_DELTA( x(i), 1.0, 1e-8);
      }
      TS_ASSERT_DELTA( x.CalculateNorm(1), 3.0,       1e-8);
      TS_ASSERT_DELTA( x.CalculateNorm(2), sqrt(3.0), 1e-8);
   }  
};
//Code from AppendixC.tex line 448 save as LinearSystemTestSuite.hpp
