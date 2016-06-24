extern "C"
{
#include "StrategyPattern.h"
}

#include "Test_SilverCustomer.h"
#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

TEST_GROUP(SilverCustomer)
{
    Customer customer;

    void setup()
    {
        customer = createSilverCustomer();
    }

    void teardown()
    {
    }
};

#define SILVER_RATIO 0.95
TEST(SilverCustomer, it_can_calculate_a_silver_price)
{
    double amount = 1.0;
    double shipping = 0.0;
    DOUBLES_EQUAL( SILVER_RATIO, calculatePrice(customer, amount, shipping), 0.01 );
}

TEST(SilverCustomer, it_can_calculate_a_different_silver_price)
{
    double amount = 0.0;
    double shipping = 0.0;
    DOUBLES_EQUAL( 0.00, calculatePrice(customer, amount, shipping), 0.01 );
}

TEST(SilverCustomer, it_can_calculate_a_silver_price_with_only_shipping)
{
    double amount = 0.0;
    double shipping = 5.0;
    DOUBLES_EQUAL( shipping, calculatePrice(customer, amount, shipping), 0.01 );
}

TEST(SilverCustomer, it_can_calculate_a_silver_price_with_shipping)
{
    double amount = 1.0;
    double shipping = 5.0;
    DOUBLES_EQUAL( shipping + SILVER_RATIO, calculatePrice(customer, amount, shipping), 0.01 );
}
