#ifndef STRATEGY_PATTERN_INCLUDED
#define STRATEGY_PATTERN_INCLUDED

typedef struct CustomerStruct * Customer;

Customer createBronzeCustomer(void);
double calculatePrice(Customer customer, double amount, double shipping);

double bronzePriceStrategy(double amount, double shipping);
double silverPriceStrategy(double amount, double shipping);
double goldPriceStrategy(double amount, double shipping);

#endif
