#include "DummyCustomer.h"

double dummyPriceStrategy1(double amount, double shipping)
{
    return 1.0;
}

double dummyPriceStrategy2(double amount, double shipping)
{
    return 2.0;
}

Customer createDummyCustomer1(void)
{
    static_customer = &static_customer_struct;
    static_customer->priceStrategy = dummyPriceStrategy1;
    return static_customer;
}

Customer createDummyCustomer2(void)
{
    static_customer = &static_customer_struct;
    static_customer->priceStrategy = dummyPriceStrategy2;
    return static_customer;
}
