#include "StrategyPattern.h"

#define GOLD_RATIO   0.90

double goldPriceStrategy(double amount, double shipping)
{
    return (GOLD_RATIO * amount);
}

Customer createGoldCustomer(void)
{
    static_customer = &static_customer_struct;
    static_customer->priceStrategy = goldPriceStrategy;
    return static_customer;
}
