#ifndef STRATEGY_PATTERN_INCLUDED
#define STRATEGY_PATTERN_INCLUDED

typedef struct CustomerStruct * Customer;

Customer createBronzeCustomer(void);
Customer createSilverCustomer(void);
Customer createGoldCustomer(void);

double calculatePrice(Customer customer, double amount, double shipping);

#include "CustomerPrivate.h"

#endif
