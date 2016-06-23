#include "StrategyPattern.h"

double bronzePriceStrategy(double amount, double shipping)
{
    return (0.98 * amount) + shipping;
}

double silverPriceStrategy(double amount, double shipping)
{
    return (0.95 * amount) + shipping;
}

double goldPriceStrategy(double amount, double shipping)
{
    return (0.90 * amount);
}
