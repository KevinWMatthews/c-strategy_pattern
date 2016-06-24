#ifndef DUMMY_CUSTOMER_INCLUDED
#define DUMMY_CUSTOMER_INCLUDED

#include "Customer.h"

Customer createDummyCustomer1(void);
Customer createDummyCustomer2(void);

double dummyPriceStrategy1(double amount, double shipping);
double dummyPriceStrategy2(double amount, double shipping);

#endif
