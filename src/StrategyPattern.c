#include "StrategyPattern.h"

#define BRONZE_RATIO 0.98
#define SILVER_RATIO 0.95
#define GOLD_RATIO   0.90

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
