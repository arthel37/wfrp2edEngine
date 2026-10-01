#include <cstdint>
#include <optional>
#include <string>
#include <vector>

enum Availability { vRare, rare, scarce, average, common, plentiful, abundant };
enum WeaponGroup {
  ordinary,
  cavalry,
  flail,
  fencing,
  twoHanded,
  parrying,
  gunpowder,
  entangling,
  crossbow,
  longbow,
  engineer,
  sling,
  throwing
};
enum WeaponQuality {
  balanced,
  defensive,
  pummeling,
  fast,
  impact,
  tiring,
  precise,
  slow,
  special,
  shrapnel,
  unreliable,
  snare,
  armourPiercing,
  experimental
};
enum ConsumableEffect { healing };
struct MeleeStats {
  short int damage;
  WeaponGroup group;
  std::vector<WeaponQuality> qualityVector;
};
struct RangedStats {
  short int damage;
  WeaponGroup group;
  bool usesStrengthBonus;
  std::vector<WeaponQuality> qualityVector;
};
struct Utility {
  short length;
  std::vector<ConsumableEffect> effectVector;
};
struct Item {
  std::string name;
  int amount;
  int cost;
  int encumbrance;
  Availability availability;
  std::optional<MeleeStats> meleeStats;
  std::optional<RangedStats> rangedStats;
  std::optional<Utility> utilityEffects;
};
