#include <string>
#include <vector>

#include "enums.h"

struct Region {
  RegionName name;
  bool isFree;
  Nation nation;
  std::string displayName;
  // std::vector<Region> adjecent;
};

class Map {
 private:
  static std::vector<Region> regions;
  static std::vector<std::vector<int> > adjlist;

 public:
  Map();
  void printState();
  void flipFree(RegionName);
};
