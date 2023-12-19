#include <string>

enum DiceResult { army, character, eye, hybrid, muster, palantir };

struct Region {
  bool isFree;
  std::string name;
};
