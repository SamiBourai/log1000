
#include <cppunit/ui/text/TestRunner.h>

#include "test.h"

int main( int argc, char **argv)
{
    CppUnit::TextUi::TestRunner runner;
    runner.addTest(Test::suite());
    runner.run();

    return 0;
}