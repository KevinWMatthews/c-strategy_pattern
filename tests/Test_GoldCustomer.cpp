extern "C"
{
#include "GoldCustomer.h"
}

#include "Test_GoldCustomer.h"
#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

TEST_GROUP(GoldCustomer)
{
    Customer customer;

    void setup()
    {
        customer = createGoldCustomer();
    }

    void teardown()
    {
    }
};

#define GOLD_RATIO 0.90
TEST(GoldCustomer, it_can_calculate_a_gold_price)
{
    double amount = 1.0;
    double shipping = 0.0;
    DOUBLES_EQUAL( GOLD_RATIO, calculatePrice(customer, amount, shipping), 0.01 );
}

TEST(GoldCustomer, it_can_calculate_a_different_gold_price)
{
    double amount = 0.0;
    double shipping = 5.0;
    DOUBLES_EQUAL( 0.00, calculatePrice(customer, amount, shipping), 0.01 );
}

TEST(GoldCustomer, gold_customers_have_free_shipping)
{
    double amount = 0.0;
    double shipping = 0.0;
    DOUBLES_EQUAL( shipping, calculatePrice(customer, amount, shipping), 0.01 );
}
