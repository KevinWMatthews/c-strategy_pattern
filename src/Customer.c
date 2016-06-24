#include "Customer.h"

CustomerStruct static_customer_struct;
Customer static_customer;

double calculatePrice(Customer customer, double amount, double shipping)
{
    if (customer == 0)
        return 0.0;
    if (customer->priceStrategy == 0)
        return 0.0;
    return customer->priceStrategy(amount, shipping);
}
