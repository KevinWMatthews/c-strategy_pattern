#include "StrategyPattern.h"

#define BRONZE_RATIO 0.98
#define SILVER_RATIO 0.95
#define GOLD_RATIO   0.90

typedef double (*CustomerPriceStrategy)(double amount, double shipping);

typedef struct CustomerStruct
{
    CustomerPriceStrategy priceStrategy;
} CustomerStruct;

static CustomerStruct static_customer_struct;
static Customer static_customer;

double bronzePriceStrategy(double amount, double shipping)
{
    return (BRONZE_RATIO * amount) + shipping;
}

double silverPriceStrategy(double amount, double shipping)
{
    return (SILVER_RATIO * amount) + shipping;
}

double goldPriceStrategy(double amount, double shipping)
{
    return (GOLD_RATIO * amount);
}

Customer createBronzeCustomer(void)
{
    static_customer = &static_customer_struct;
    static_customer->priceStrategy = bronzePriceStrategy;
    return static_customer;
}

Customer createSilverCustomer(void)
{
    static_customer = &static_customer_struct;
    static_customer->priceStrategy = silverPriceStrategy;
    return static_customer;
}

Customer createGoldCustomer(void)
{
    static_customer = &static_customer_struct;
    static_customer->priceStrategy = goldPriceStrategy;
    return static_customer;
}

double calculatePrice(Customer customer, double amount, double shipping)
{
    if (customer == 0)
        return 0.0;
    if (customer->priceStrategy == 0)
        return 0.0;
    return customer->priceStrategy(amount, shipping);
}
