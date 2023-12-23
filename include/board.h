#pragma once

#include <string>
#include <vector>

#include "army.h"
#include "enums.h"

struct Region {
  RegionName name;
  bool isFree;
  Nation nation;
  std::string displayName;
  // std::vector<Region> adjecent;
};

class Board {
 private:
  static std::vector<Region> regions;
  static std::vector<std::vector<int> > adjlist;
  std::vector<Army> armies;

 public:
  Board();
  void printState();
  Army getArmy(RegionName);
  void flipFree(RegionName);
};
