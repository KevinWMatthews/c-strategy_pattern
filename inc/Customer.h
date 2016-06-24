#ifndef CUSTOMER_INCLUDED
#define CUSTOMER_INCLUDED

typedef struct CustomerStruct * Customer;

// To create a Customer, look in the individual customer header files.

double calculatePrice(Customer customer, double amount, double shipping);

#include "CustomerPrivate.h"

#endif
