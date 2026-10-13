#include <random>
class IDiceEngine {
public:
  virtual unsigned int roll(unsigned short diceAmount,
                            unsigned short dieSides) = 0;
  virtual ~IDiceEngine() = default;
};

class RandomDiceEngine : public IDiceEngine {
private:
  std::mt19937_64 rngState;

public:
  unsigned int roll(unsigned short diceAmount,
                    unsigned short dieSides) override;
  RandomDiceEngine();
};

class MockDiceEngine : public IDiceEngine {
public:
  unsigned int forcedResult = 0;
  unsigned int roll(unsigned short diceAmount,
                    unsigned short dieSides) override;
};
