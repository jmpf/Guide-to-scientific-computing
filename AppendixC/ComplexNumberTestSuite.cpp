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
bool suite_ComplexNumberTestSuite_init = false;
#include "/home/joe/ScientificComputing/CodeFiles/ComplexNumberTestSuite.hpp"

static ComplexNumberTestSuite suite_ComplexNumberTestSuite;

static CxxTest::List Tests_ComplexNumberTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ComplexNumberTestSuite( "CodeFiles/ComplexNumberTestSuite.hpp", 5, "ComplexNumberTestSuite", suite_ComplexNumberTestSuite, Tests_ComplexNumberTestSuite );

static class TestDescription_suite_ComplexNumberTestSuite_TestDefaultConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexNumberTestSuite_TestDefaultConstructor() : CxxTest::RealTestDescription( Tests_ComplexNumberTestSuite, suiteDescription_ComplexNumberTestSuite, 8, "TestDefaultConstructor" ) {}
 void runTest() { suite_ComplexNumberTestSuite.TestDefaultConstructor(); }
} testDescription_suite_ComplexNumberTestSuite_TestDefaultConstructor;

static class TestDescription_suite_ComplexNumberTestSuite_TestCustomisedConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexNumberTestSuite_TestCustomisedConstructor() : CxxTest::RealTestDescription( Tests_ComplexNumberTestSuite, suiteDescription_ComplexNumberTestSuite, 17, "TestCustomisedConstructor" ) {}
 void runTest() { suite_ComplexNumberTestSuite.TestCustomisedConstructor(); }
} testDescription_suite_ComplexNumberTestSuite_TestCustomisedConstructor;

static class TestDescription_suite_ComplexNumberTestSuite_TestCalculatePower : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexNumberTestSuite_TestCalculatePower() : CxxTest::RealTestDescription( Tests_ComplexNumberTestSuite, suiteDescription_ComplexNumberTestSuite, 36, "TestCalculatePower" ) {}
 void runTest() { suite_ComplexNumberTestSuite.TestCalculatePower(); }
} testDescription_suite_ComplexNumberTestSuite_TestCalculatePower;

static class TestDescription_suite_ComplexNumberTestSuite_TestAgainstStdLibrary : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ComplexNumberTestSuite_TestAgainstStdLibrary() : CxxTest::RealTestDescription( Tests_ComplexNumberTestSuite, suiteDescription_ComplexNumberTestSuite, 61, "TestAgainstStdLibrary" ) {}
 void runTest() { suite_ComplexNumberTestSuite.TestAgainstStdLibrary(); }
} testDescription_suite_ComplexNumberTestSuite_TestAgainstStdLibrary;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
