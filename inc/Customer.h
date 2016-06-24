#ifndef CUSTOMER_INCLUDED
#define CUSTOMER_INCLUDED

typedef struct CustomerStruct * Customer;

typedef double (*CustomerPriceStrategy)(double amount, double shipping);

// To create a Customer, look in the individual customer header files.

double calculatePrice(Customer customer, double amount, double shipping);
void changePriceCategory(Customer, CustomerPriceStrategy);

#include "CustomerPrivate.h"

#endif
