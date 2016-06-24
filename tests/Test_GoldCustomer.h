#ifndef TEST_GOLD_CUSTOMER_INCLUDED
#define TEST_GOLD_CUSTOMER_INCLUDED

class Test_GoldCustomer
{
  public:
    explicit Test_GoldCustomer();
    virtual ~Test_GoldCustomer();

  private:
    Test_GoldCustomer(const Test_GoldCustomer&);
    Test_GoldCustomer& operator=(const Test_GoldCustomer&);
};

#endif
