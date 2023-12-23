#include <iostream>

#include "include/army.h"
#include "include/board.h"

int main() {
  Board game_map;
  game_map.printState();
  // std::cout << "Flipping\n";
  // game_map.flipFree(Angmar);
  // game_map.printState();
  // Army *a = new Army();
  Army a = game_map.getArmy(Angmar);
  std::cout << a.units[0].displayName;
  return 0;
}
