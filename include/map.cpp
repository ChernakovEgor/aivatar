#include "map.h"

#include <iostream>
#include <vector>

Map::Map() {}

void Map::printState() {
  for (auto region : regions) {
    std::cout << region.displayName << " " << region.isFree << '\n';
  }
}

void Map::flipFree(RegionName name) {
  regions[name].isFree = regions[name].isFree ? false : true;
}
