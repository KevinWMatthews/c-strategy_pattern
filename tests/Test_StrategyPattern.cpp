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
 *   Calculate the price of an order.
 *   Create a customer.
 *   Place an order. This requirement has no details so let's postpone it.
 *   Create a different category of customer with a different pricing strategy.
 */

#define BRONZE_RATIO 0.98
TEST(StrategyPattern, it_can_calculate_a_bronze_price)
{
    double amount = 1.0;
    double shipping = 0.0;
    DOUBLES_EQUAL( BRONZE_RATIO, bronzePriceStrategy(amount, shipping), 0.01 );
}

TEST(StrategyPattern, it_can_calculate_a_different_bronze_price)
{
    double amount = 0.0;
    double shipping = 0.0;
    DOUBLES_EQUAL( 0.00, bronzePriceStrategy(amount, shipping), 0.01 );
}

TEST(StrategyPattern, it_can_calculate_a_bronze_price_with_only_shipping)
{
    double amount = 0.0;
    double shipping = 5.0;
    DOUBLES_EQUAL( shipping, bronzePriceStrategy(amount, shipping), 0.01 );
}

TEST(StrategyPattern, it_can_calculate_a_bronze_price_with_shipping)
{
    double amount = 1.0;
    double shipping = 5.0;
    DOUBLES_EQUAL( shipping + BRONZE_RATIO, bronzePriceStrategy(amount, shipping), 0.01 );
}

#define SILVER_RATIO 0.95
TEST(StrategyPattern, it_can_calculate_a_silver_price)
{
    double amount = 1.0;
    double shipping = 0.0;
    DOUBLES_EQUAL( SILVER_RATIO, silverPriceStrategy(amount, shipping), 0.01 );
}

TEST(StrategyPattern, it_can_calculate_a_different_silver_price)
{
    double amount = 0.0;
    double shipping = 0.0;
    DOUBLES_EQUAL( 0.00, silverPriceStrategy(amount, shipping), 0.01 );
}

TEST(StrategyPattern, it_can_calculate_a_silver_price_with_only_shipping)
{
    double amount = 0.0;
    double shipping = 5.0;
    DOUBLES_EQUAL( shipping, silverPriceStrategy(amount, shipping), 0.01 );
}

TEST(StrategyPattern, it_can_calculate_a_silver_price_with_shipping)
{
    double amount = 1.0;
    double shipping = 5.0;
    DOUBLES_EQUAL( shipping + SILVER_RATIO, silverPriceStrategy(amount, shipping), 0.01 );
}

#define GOLD_RATIO 0.90
TEST(StrategyPattern, it_can_calculate_a_gold_price)
{
    double amount = 1.0;
    double shipping = 0.0;
    DOUBLES_EQUAL( GOLD_RATIO, goldPriceStrategy(amount, shipping), 0.01 );
}

TEST(StrategyPattern, it_can_calculate_a_different_gold_price)
{
    double amount = 0.0;
    double shipping = 5.0;
    DOUBLES_EQUAL( 0.00, goldPriceStrategy(amount, shipping), 0.01 );
}

TEST(StrategyPattern, gold_customers_have_free_shipping)
{
    double amount = 0.0;
    double shipping = 0.0;
    DOUBLES_EQUAL( shipping, goldPriceStrategy(amount, shipping), 0.01 );
}
