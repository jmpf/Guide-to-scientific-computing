#include <cxxtest/TestSuite.h>
#include <fstream>
#include "BvpOde.hpp"

double model_prob_1_rhs(double x){return 1.0;}
double model_prob_2_rhs(double x){return 34.0*sin(x);}

// This suite is an example solution to Exercise 12.5
class BvpOdeTestSuite : public CxxTest::TestSuite
{
private:
   void ReadIn(const char* rName, std::vector<double>& ts,
                                   std::vector<double>& vs)
   {
      std::ifstream file(rName);
      double time, value;
      while (!file.eof())
      {
         file >> time >> value;
         if (file.good())
         {
            ts.push_back(time); vs.push_back(value);
         }
      } 
   }
public:
   void TestModelProblem1(void)
   {
      SecondOrderOde ode_mp1(-1.0, 0.0, 0.0, 
                         model_prob_1_rhs, 
                         0.0, 1.0);
      BoundaryConditions bc_mp1;
      bc_mp1.SetLhsDirichletBc(0.0);
      bc_mp1.SetRhsDirichletBc(0.0);

      BvpOde bvpode_mp1(&ode_mp1, &bc_mp1, 101);
      bvpode_mp1.SetFilename("model_problem_results1.dat");
      bvpode_mp1.Solve();
      std::vector<double> xs, us;
      ReadIn("model_problem_results1.dat", xs, us);
      TS_ASSERT_EQUALS(xs.size(), 101u);
      TS_ASSERT_EQUALS(us.size(), 101u);
      // Test solution as given in Sec. 12.1.1
      for (int i=0; i<xs.size(); i++)
      {
         TS_ASSERT_DELTA(us[i], xs[i]*(1.0-xs[i])/2.0, 1e-8);
      }
   }

   void TestModelProblem2(void)
   {
      SecondOrderOde ode_mp2(1.0, 3.0, -4.0, 
                         model_prob_2_rhs, 
                         0.0, M_PI);
      BoundaryConditions bc_mp2;
      bc_mp2.SetLhsNeumannBc(-5.0);
      bc_mp2.SetRhsDirichletBc(4.0);

      BvpOde bvpode_mp2(&ode_mp2, &bc_mp2, 1001);
      bvpode_mp2.SetFilename("model_problem_results2.dat");
      bvpode_mp2.Solve();
      std::vector<double> xs, us;
      ReadIn("model_problem_results2.dat", xs, us);
      TS_ASSERT_EQUALS(xs.size(), 1001u);
      TS_ASSERT_EQUALS(us.size(), 1001u);
      // Test solution as given in Sec. 12.1.1
      for (int i=0; i<xs.size(); i++)
      {
         double u = (4*exp(xs[i])+exp(-4*xs[i]))/
                    (4*exp(M_PI)+exp(-4*M_PI))
                   - 5*sin(xs[i]) - 3*cos(xs[i]); 
         TS_ASSERT_DELTA(us[i], u, 2e-3); // Error ~= delta x
      }
   }
};
//Code from AppendixC.tex line 750 save as BvpOdeTestSuite.hpp
