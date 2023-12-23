#pragma once

#include <string>
#include <vector>

#include "enums.h"

struct Unit {
  bool isElite;
  Nation nation;
  std::string displayName;
};

class Army {
 public:
  Army();
  std::vector<Unit> units;
};
