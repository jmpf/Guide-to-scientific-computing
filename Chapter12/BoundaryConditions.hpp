#ifndef BOUNDARYCONDITIONSHEADERDEF
#define BOUNDARYCONDITIONSHEADERDEF

class BoundaryConditions
{
public:
   // The boundary value class is able to
   // access the coefficients etc. of this equation
   friend class BvpOde;
private:
   bool mLhsBcIsDirichlet;
   bool mRhsBcIsDirichlet;
   bool mLhsBcIsNeumann;
   bool mRhsBcIsNeumann;
   double mLhsBcValue;
   double mRhsBcValue;
public:
   BoundaryConditions();
   void SetLhsDirichletBc(double lhsValue);
   void SetRhsDirichletBc(double rhsValue);
   void SetLhsNeumannBc(double lhsDerivValue);
   void SetRhsNeumannBc(double rhsDerivValue);
};

#endif
//Code from Chapter12.tex line 532 save as BoundaryConditions.hpp
