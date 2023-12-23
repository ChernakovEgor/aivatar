#include "board.h"

#include <iostream>
#include <vector>

Board::Board() {
  Army *army = new Army();
  armies.push_back(*army);
}

void Board::printState() {
  for (auto region : regions) {
    std::cout << region.displayName << " " << region.isFree << '\n';
  }
}

void Board::flipFree(RegionName name) {
  regions[name].isFree = regions[name].isFree ? false : true;
}

Army Board::getArmy(RegionName name) { return armies[name]; }
