#include "StrategyPattern.h"

double bronzePriceStrategy(double amount, double shipping)
{
    return (0.98 * amount) + shipping;
}
