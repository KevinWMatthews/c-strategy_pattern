#ifndef TEST_CUSTOMER_INCLUDED
#define TEST_CUSTOMER_INCLUDED

class Test_Customer
{
  public:
    explicit Test_Customer();
    virtual ~Test_Customer();

  private:
    Test_Customer(const Test_Customer&);
    Test_Customer& operator=(const Test_Customer&);
};

#endif
