#include <cmath>
#include <cxxtest/TestSuite.h>
#include "ComplexNumber.hpp"

class ComplexNumberTestSuite : public CxxTest::TestSuite
{
public:
   void TestDefaultConstructor(void)
   {
      // Test default constructor sets complex
      // number to zero
      ComplexNumber z;
      double mod_z = z.CalculateModulus();
      TS_ASSERT_DELTA(mod_z, 0.0, 1.0e-16);
   }

   void TestCustomisedConstructor(void)
   {
      // Use constructor that allows us to specify
      // real and imaginary parts of a complex number
      double real = 4.0;
      double imaginary = -3.0;
      ComplexNumber z(real, imaginary);

      // Test that modulus is correct
      double modulus = z.CalculateModulus();
      double true_modulus = 5.0; // (3,4,5) triangle
      TS_ASSERT_DELTA(modulus, true_modulus, 1.0e-8);

      // Test argument is correct via different function
      double argument = z.CalculateArgument();
      double true_argument = -asin(3.0/5.0);
      TS_ASSERT_DELTA(argument, true_argument, 1.0e-8);
   }

   void TestCalculatePower(void)
   {
      // Specify a complex number, z, and calculate the
      // modulus and argument
      double real = 4.0;
      double imaginary = -3.0;
      ComplexNumber z(real, imaginary);
      double modulus_z = z.CalculateModulus();
      double argument_z = z.CalculateArgument();

      // Calculate z*z and calculate the modulus and
      // argument of z*z
      ComplexNumber z_squared = z.CalculatePower(2.0);
      double mod_z_squared = z_squared.CalculateModulus();
      double arg_z_squared = z_squared.CalculateArgument();

      // Test that:
      //  modulus of z*z = (modulus of z)*(modulus of z)
      TS_ASSERT_DELTA(mod_z_squared, modulus_z*modulus_z, 
                      1.0e-8);

      // Test that:
      //  argument of z*z = 2*(argument of z)
      TS_ASSERT_DELTA(arg_z_squared, 2.0*argument_z, 1.0e-8);
   }
   void TestAgainstStdLibrary()
   {
      ComplexNumber z(4.0, -3.0);
      std::complex<double> std_z(4.0, -3.0);
      TS_ASSERT_DELTA(z.CalculateArgument(), 
                      arg(std_z), 1e-8);
      TS_ASSERT_DELTA(z.CalculateModulus(),
                      abs(std_z), 1e-8);
      // Raise both numbers to power 5
      ComplexNumber z_5=z.CalculatePower(5.0);
      std::complex<double> std_z_5 = pow(std_z, 5.0);
      // Check they are the same
      TS_ASSERT_DELTA(z_5.CalculateArgument(), 
                      arg(std_z_5), 1e-8);
      TS_ASSERT_DELTA(z_5.CalculateModulus(),  
                      abs(std_z_5), 1e-8);
   }
};
//Code from Chapter09.tex line 334 save as ComplexNumberTestSuite.hpp
