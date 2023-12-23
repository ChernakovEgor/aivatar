#include <iostream>

#include "include/map.h"

int main() {
  Map game_map;
  game_map.printState();
  std::cout << "Flipping\n";
  game_map.flipFree(Angmar);
  game_map.printState();
  return 0;
}
