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
  std::vector<Region> regions;
  std::vector<std::vector<Region> > adjlist;

 public:
  Map();
};
