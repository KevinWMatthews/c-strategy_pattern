#include "StrategyPattern.h"

#define BRONZE_RATIO 0.98

double bronzePriceStrategy(double amount, double shipping)
{
    return (BRONZE_RATIO * amount) + shipping;
}

Customer createBronzeCustomer(void)
{
    static_customer = &static_customer_struct;
    static_customer->priceStrategy = bronzePriceStrategy;
    return static_customer;
}
