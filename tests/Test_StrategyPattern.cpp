extern "C"
{
#include "StrategyPattern.h"
}

#include "Test_StrategyPattern.h"
#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

TEST_GROUP(StrategyPattern)
{
    void setup()
    {
    }

    void teardown()
    {
    }
};

/* Test list:
 *   Feed me!
 */

TEST(StrategyPattern, ItCanFail)
{
    FAIL("Start here.")
}
