#include "DiceEngine.hpp"

RandomDiceEngine::RandomDiceEngine() {
  std::random_device randomDev;
  rngState = std::mt19937_64(randomDev());
}

unsigned int RandomDiceEngine::roll(unsigned short diceAmount,
                                    unsigned short dieSides) {
  unsigned int sum = 0;
  std::uniform_int_distribution<unsigned int> distribution(1, dieSides);

  for (short i = 0; i < diceAmount; i++) {
    sum += distribution(rngState);
  }

  return sum;
}

unsigned int MockDiceEngine::roll(unsigned short diceAmount,
                                  unsigned short dieSides) {
  return this->forcedResult;
}
