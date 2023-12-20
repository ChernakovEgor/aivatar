#include <iostream>
#include <list>
#include <string>
#include <vector>

enum DiceResult { army, character, eye, hybrid, muster, palantir };
enum Nation {
  Dwarves,
  Elves,
  Gondor,
  North,
  Isengard,
  Mordor,
  Easterlings,
  None
};
enum RegionName {
  Angmar,
  Mount_Gram,
  Mount_Gundabad,
  Ettenmoors,
  Trollshaws,
  Rivendell
};

struct Region {
  RegionName name;
  bool isFree;
  Nation nation;
  // std::vector<Region> adjecent;
};

class Map {
 private:
  std::vector<Region> regions;
  std::vector<std::vector<Region> > adjlist;

 public:
  Map() {
    Region angmar = {Angmar, true, Mordor};
    Region gundabad = {Mount_Gundabad, false, Mordor};
    Region etten = {Ettenmoors, true, None};
    Region trolls = {Trollshaws, true, None};
    Region gram = {Mount_Gram, true, Mordor};

    adjlist = {{etten, gram},
               {angmar, etten, gundabad},
               {gram},
               {angmar, trolls},
               {etten}};
    // adjlist[Mount_Gram] = {angmar, etten, gundabad};
    // adjlist[Mount_Gundabad] = {gram};
    // adjlist[Ettenmoors] = {angmar, trolls};
    // adjlist[Trollshaws] = {etten};

    regions = {angmar, etten, trolls, gram};
    // std::cout << regions[Angmar].nation;
    std::cout << adjlist[Mount_Gram].size();
  }
};

int main() {
  Map game_map;
  return 0;
}
