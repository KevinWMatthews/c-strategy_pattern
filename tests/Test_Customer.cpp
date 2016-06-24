extern "C"
{
#include "Customer.h"
#include "DummyCustomer.h"
}

#include "Test_Customer.h"
#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

TEST_GROUP(Customer)
{
    Customer customer;

    void setup()
    {
        customer = createDummyCustomer1();
    }

    void teardown()
    {
    }
};


TEST(Customer, calculate_price_can_handle_a_null_customer)
{
    DOUBLES_EQUAL( 0.0, calculatePrice(NULL, 1.0, 1.0), 0.01 );
}

TEST(Customer, create_dummy_1_price_strategy)
{
    DOUBLES_EQUAL( 1.0, calculatePrice(customer, 666, 666), 0.01 );
}

TEST(Customer, create_dummy_2_price_strategy)
{
    customer = createDummyCustomer2();
    DOUBLES_EQUAL( 2.0, calculatePrice(customer, 666, 666), 0.01 );
}
