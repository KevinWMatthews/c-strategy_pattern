extern "C"
{
#include "Customer.h"
}

#include "Test_Customer.h"
#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

TEST_GROUP(Customer)
{
    void setup()
    {
    }

    void teardown()
    {
    }
};


TEST(Customer, ItCanFail)
{
    FAIL("flunk");
}
