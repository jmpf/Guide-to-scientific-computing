#include <iostream>

class AbstractPerson
{
public:
   virtual void Print(){std::cerr<<"Never instantiate\n";}
};

class Mother : public AbstractPerson
{
public:
   virtual void Print(){std::cout<<"Mother\n";}
};

class Daughter : public Mother
{
public:
   void Print(){std::cout<<"Daughter\n";}
};

int main(int argc, char* argv[])
{
   AbstractPerson* p_mother = new Mother;
   AbstractPerson* p_daughter = new Daughter;
   p_mother->Print();
   p_daughter->Print();
   delete p_mother;
   delete p_daughter;
}
//Code from Chapter07.tex line 515 save as Chapter07_main_515.cpp
