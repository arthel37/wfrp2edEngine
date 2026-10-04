enum SkillName {
  academicKnowledge,
  animalCare,
  animalTraining,
  blather,
  channeling,
  charm,
  charmAnimal,
  command,
  commonKnowledge,
  concealment,
  consumeAlcohol,
  disguise,
  dodgeBlow,
  drive,
  evaluate,
  followTrail,
  gamble,
  gossip,
  haggle,
  heal,
  hypnotism,
  intimidate,
  lipReading,
  magicalSense,
  navigation,
  outdoorSurvival,
  perception,
  performer,
  pickLocks,
  preparePoison,
  readWrite,
  ride,
  row,
  sail,
  scaleSheerSurface,
  search,
  secretLanguage,
  secretSigns,
  setTrap,
  silentMove,
  shadowing,
  sleightOfHand,
  speakArcaneLanguage,
  speakLanguage,
  swim,
  torture,
  trade,
  ventriloquism
};

enum CharName {

};

struct Characteristic {
  unsigned short weaponSkill;
  unsigned short ballisticSkill;
  unsigned short strength;
  unsigned short toughness;
  unsigned short agility;
  unsigned short intelligence;
  unsigned short willpower;
  unsigned short fellowship;

  unsigned short attacks;
  unsigned short wounds;
  unsigned short strengthBonus;
  unsigned short toughnessBonus;
  unsigned short movement;
  unsigned short magic;
  unsigned short insanityPoints;
  unsigned short fatePoints;
};

struct Skill {};

class Character {
  Characteristic characteristics;
};
