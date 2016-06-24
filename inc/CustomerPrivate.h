#ifndef CUSTOMER_PRIVATE_INCLUDED
#define CUSTOMER_PRIVATE_INCLUDED

typedef double (*CustomerPriceStrategy)(double amount, double shipping);

typedef struct CustomerStruct
{
    CustomerPriceStrategy priceStrategy;
} CustomerStruct;

// We're using a single-instance module at the moment.
extern CustomerStruct static_customer_struct;
extern Customer static_customer;

#endif
