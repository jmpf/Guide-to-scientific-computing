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
bool suite_LinearSystemTestSuite_init = false;
#include "/home/joe/ScientificComputing/CodeFiles/LinearSystemTestSuite.hpp"

static LinearSystemTestSuite suite_LinearSystemTestSuite;

static CxxTest::List Tests_LinearSystemTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LinearSystemTestSuite( "CodeFiles/LinearSystemTestSuite.hpp", 8, "LinearSystemTestSuite", suite_LinearSystemTestSuite, Tests_LinearSystemTestSuite );

static class TestDescription_suite_LinearSystemTestSuite_TestDefaultConstructors : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LinearSystemTestSuite_TestDefaultConstructors() : CxxTest::RealTestDescription( Tests_LinearSystemTestSuite, suiteDescription_LinearSystemTestSuite, 12, "TestDefaultConstructors" ) {}
 void runTest() { suite_LinearSystemTestSuite.TestDefaultConstructors(); }
} testDescription_suite_LinearSystemTestSuite_TestDefaultConstructors;

static class TestDescription_suite_LinearSystemTestSuite_TestSomeExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LinearSystemTestSuite_TestSomeExceptions() : CxxTest::RealTestDescription( Tests_LinearSystemTestSuite, suiteDescription_LinearSystemTestSuite, 25, "TestSomeExceptions" ) {}
 void runTest() { suite_LinearSystemTestSuite.TestSomeExceptions(); }
} testDescription_suite_LinearSystemTestSuite_TestSomeExceptions;

static class TestDescription_suite_LinearSystemTestSuite_TestLargeConditionNumber : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LinearSystemTestSuite_TestLargeConditionNumber() : CxxTest::RealTestDescription( Tests_LinearSystemTestSuite, suiteDescription_LinearSystemTestSuite, 33, "TestLargeConditionNumber" ) {}
 void runTest() { suite_LinearSystemTestSuite.TestLargeConditionNumber(); }
} testDescription_suite_LinearSystemTestSuite_TestLargeConditionNumber;

static class TestDescription_suite_LinearSystemTestSuite_TestZeroPivot : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LinearSystemTestSuite_TestZeroPivot() : CxxTest::RealTestDescription( Tests_LinearSystemTestSuite, suiteDescription_LinearSystemTestSuite, 50, "TestZeroPivot" ) {}
 void runTest() { suite_LinearSystemTestSuite.TestZeroPivot(); }
} testDescription_suite_LinearSystemTestSuite_TestZeroPivot;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
