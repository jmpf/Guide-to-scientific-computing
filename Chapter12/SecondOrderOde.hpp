#ifndef SECONDORDERODEHEADERDEF
#define SECONDORDERODEHEADERDEF

class SecondOrderOde
{
   // The boundary value class is able to
   // access the coefficients etc. of this equation
   friend class BvpOde;
private:
   // Coefficients on LHS of ODE
   double mCoeffOfUxx;
   double mCoeffOfUx;
   double mCoeffOfU;
   // Function on RHS of ODE
   double (*mpRhsFunc)(double x);

   // Interval for domain
   double mXmin;
   double mXmax;
public:
   SecondOrderOde(double coeffUxx, double coeffUx, 
                  double coeffU, 
                  double (*righthandSide)(double),
                  double xMinimum, double xMaximum)
   {
      mCoeffOfUxx = coeffUxx;
      mCoeffOfUx = coeffUx;
      mCoeffOfU = coeffU;
      mpRhsFunc = righthandSide;
      mXmin = xMinimum;
      mXmax = xMaximum;
   }
};

#endif
//Code from Chapter12.tex line 456 save as SecondOrderOde.hpp
