extern "C"
{
#include "StrategyPattern.h"
}

#include "Test_StrategyPattern.h"
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

/* Test list:
 *   Calculate the price of an order.
 *   Create a customer.
 *   Place an order. This requirement has no details so let's postpone it.
 *   Create a different category of customer with a different pricing strategy.
 */

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
