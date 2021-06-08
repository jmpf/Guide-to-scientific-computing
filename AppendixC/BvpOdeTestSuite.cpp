/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_BvpOdeTestSuite_init = false;
#include "/home/joe/ScientificComputing/CodeFiles/BvpOdeTestSuite.hpp"

static BvpOdeTestSuite suite_BvpOdeTestSuite;

static CxxTest::List Tests_BvpOdeTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BvpOdeTestSuite( "CodeFiles/BvpOdeTestSuite.hpp", 9, "BvpOdeTestSuite", suite_BvpOdeTestSuite, Tests_BvpOdeTestSuite );

static class TestDescription_suite_BvpOdeTestSuite_TestModelProblem1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BvpOdeTestSuite_TestModelProblem1() : CxxTest::RealTestDescription( Tests_BvpOdeTestSuite, suiteDescription_BvpOdeTestSuite, 27, "TestModelProblem1" ) {}
 void runTest() { suite_BvpOdeTestSuite.TestModelProblem1(); }
} testDescription_suite_BvpOdeTestSuite_TestModelProblem1;

static class TestDescription_suite_BvpOdeTestSuite_TestModelProblem2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BvpOdeTestSuite_TestModelProblem2() : CxxTest::RealTestDescription( Tests_BvpOdeTestSuite, suiteDescription_BvpOdeTestSuite, 50, "TestModelProblem2" ) {}
 void runTest() { suite_BvpOdeTestSuite.TestModelProblem2(); }
} testDescription_suite_BvpOdeTestSuite_TestModelProblem2;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
