#ifndef EXAMPLECLASSDEF
#define EXAMPLECLASSDEF

class ExampleClass
{
private:
   double mMemberVariable1;
   double mMemberVariable2;
public:
   ExampleClass(double member1, double member2);
   double GetMinimum() const;
   friend double GetMaximum(const ExampleClass& ex_class);
};

#endif
//Code from Chapter06.tex line 754 save as ExampleClass.hpp
