#include "Item.hpp"
#include <string>
#include <unordered_map>
#include <vector>

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

enum TalentName {
  acuteHearing,
  keenSenses,
  seasonedTraveller,
  aethyricAttunement,
  lesserMagic,
  sharpshooter,
  alleyCat,
  lightningParry,
  sixthSense,
  ambidextrous,
  lightningReflexes,
  specialistWeaponGroup,
  arcaneLore,
  linguistics,
  armouredCasting,
  luck,
  stoutHearted,
  artistic,
  marksman,
  streetFighting,
  contortionist,
  masterGunner,
  streetwise,
  coolheaded,
  masterOrator,
  strikeMightyBlow,
  darkLore,
  meditation,
  strikeToInjure,
  darkMagic,
  menacing,
  strikeToStun,
  dealmaker,
  mightyMissile,
  strongMinded,
  disarm,
  mightyShot,
  sturdy,
  divineLore,
  mimic,
  suave,
  dwarfcraft,
  naturalWeapons,
  sureShot,
  etiquette,
  nightVision,
  surgery,
  excellentVision,
  orientation,
  superNumerate,
  fastHands,
  pettyMagic,
  swashbuckler,
  fearless,
  publicSpeaking,
  terrifying,
  flee,
  quickDraw,
  trapfinder,
  fleetFooted,
  rapidReload,
  trickRiding,
  flier,
  resistanceToChaos,
  tunnelRat,
  frenzy,
  resistanceDoDisease,
  undead,
  frightening,
  resistanceToMagic,
  unsettling,
  grudgeBornFury,
  resistanceToPoison,
  veryResilient,
  hardy,
  rover,
  veryStrong,
  hedgeMagic,
  savvy,
  warriorBorn,
  hoverer,
  schemer,
  wrestling,
};

enum CharName {
  weaponSkill,
  ballisticSkill,
  strength,
  toughness,
  agility,
  intelligence,
  willpower,
  fellowship,
  attacks,
  wounds,
  strengthBonus,
  toughnessBonus,
  movement,
  magic,
  insanityPoints,
  fatePoints
};

struct Skill {
  SkillName id;
  std::string specialization; // Only available for certain skills
  unsigned short advancement;
};

struct SkillDefinition {
  SkillName id;
  CharName linkedChar;
  bool isAdvanced;
  bool requiresSpecialization;
  std::string description;
};

struct Talent {
  TalentName id;
  std::string specialization;
};

struct TalentDefinition {
  TalentName id;
  struct SkillModifier {
    SkillName linkedSkill;
    short bonus;
  };
  struct CharModifier {
    CharName linkedChar;
    short bonus;
  };
  std::vector<SkillModifier> skillModifiers;
  std::vector<CharModifier> charModifiers;
  std::string description;
  bool requiresSpecialization;
};

struct Appearance {
  std::string name;
  short height;
  short weight;
  short age;
  std::string hairColour;
  std::string eyeColour;
  std::vector<std::string> distinguishingMarks;
};

struct Background {
  std::string starSign;
  std::string birthPlace;
};

struct Character {
  std::unordered_map<CharName, short> characteristics = {
      {weaponSkill, 0}, {ballisticSkill, 0}, {strength, 0},
      {toughness, 0},   {agility, 0},        {intelligence, 0},
      {willpower, 0},   {fellowship, 0},     {attacks, 0},
      {wounds, 0},      {strengthBonus, 0},  {toughnessBonus, 0},
      {movement, 0},    {magic, 0},          {insanityPoints, 0},
      {fatePoints, 0},
  };
  std::vector<Skill> skills;
  std::vector<Talent> talents;
  std::vector<Item> trappings;
  Appearance appearence;
  Background background;
};
