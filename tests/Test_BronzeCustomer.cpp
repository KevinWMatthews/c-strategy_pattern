extern "C"
{
#include "StrategyPattern.h"
}

#include "Test_BronzeCustomer.h"
#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

TEST_GROUP(BronzeCustomer)
{
    Customer customer;

    void setup()
    {
        customer = createBronzeCustomer();
    }

    void teardown()
    {
    }
};

#define BRONZE_RATIO 0.98
TEST(BronzeCustomer, it_can_calculate_a_bronze_price)
{
    double amount = 1.0;
    double shipping = 0.0;
    DOUBLES_EQUAL( BRONZE_RATIO, calculatePrice(customer, amount, shipping), 0.01 );
}

TEST(BronzeCustomer, it_can_calculate_a_different_bronze_price)
{
    double amount = 0.0;
    double shipping = 0.0;
    DOUBLES_EQUAL( 0.00, calculatePrice(customer, amount, shipping), 0.01 );
}

TEST(BronzeCustomer, it_can_calculate_a_bronze_price_with_only_shipping)
{
    double amount = 0.0;
    double shipping = 5.0;
    DOUBLES_EQUAL( shipping, calculatePrice(customer, amount, shipping), 0.01 );
}

TEST(BronzeCustomer, it_can_calculate_a_bronze_price_with_shipping)
{
    double amount = 1.0;
    double shipping = 5.0;
    DOUBLES_EQUAL( shipping + BRONZE_RATIO, calculatePrice(customer, amount, shipping), 0.01 );
}
