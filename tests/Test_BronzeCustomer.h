#ifndef TEST_BRONZE_CUSTOMER_INCLUDED
#define TEST_BRONZE_CUSTOMER_INCLUDED

class Test_BronzeCustomer
{
  public:
    explicit Test_BronzeCustomer();
    virtual ~Test_BronzeCustomer();

  private:
    Test_BronzeCustomer(const Test_BronzeCustomer&);
    Test_BronzeCustomer& operator=(const Test_BronzeCustomer&);
};

#endif
