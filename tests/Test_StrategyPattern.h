#ifndef TEST_STRATEGY_PATTERN_INCLUDED
#define TEST_STRATEGY_PATTERN_INCLUDED

class Test_StrategyPattern
{
  public:
    explicit Test_StrategyPattern();
    virtual ~Test_StrategyPattern();

  private:
    Test_StrategyPattern(const Test_StrategyPattern&);
    Test_StrategyPattern& operator=(const Test_StrategyPattern&);
};

#endif
