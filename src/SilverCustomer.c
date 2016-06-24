#include "SilverCustomer.h"

#define SILVER_RATIO 0.95

double silverPriceStrategy(double amount, double shipping)
{
    return (SILVER_RATIO * amount) + shipping;
}

Customer createSilverCustomer(void)
{
    static_customer = &static_customer_struct;
    static_customer->priceStrategy = silverPriceStrategy;
    return static_customer;
}
