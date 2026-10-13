#include "Character.hpp"
#include "DiceEngine.hpp"
enum Modifier {
  veryHard = -30,
  hard = -20,
  challenging = -10,
  averageTest = 0,
  routine = 10,
  easy = 20,
  veryEasy = 30
};

class Test {
  Character activeCharacter;
  SkillName testedSkill;
  Modifier testModifier;
};

class TestController {
  IDiceEngine *dice;
};
