#ifndef TEST_SILVER_CUSTOMER_INCLUDED
#define TEST_SILVER_CUSTOMER_INCLUDED

class Test_SilverCustomer
{
  public:
    explicit Test_SilverCustomer();
    virtual ~Test_SilverCustomer();

  private:
    Test_SilverCustomer(const Test_SilverCustomer&);
    Test_SilverCustomer& operator=(const Test_SilverCustomer&);
};

#endif
