#include "map.h"

#include <iostream>
#include <vector>

Map::Map() {
  Region angmar = {Angmar, true, Mordor, "Angmar"};
  Region gundabad = {Mount_Gundabad, false, Mordor, "Mount Gundabad"};
  Region etten = {Ettenmoors, true, None, "Ettenmoors"};
  Region trolls = {Trollshaws, true, None, "Trollshaws"};
  Region gram = {Mount_Gram, true, Mordor, "Mount Gram"};

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
  adjlist[Angmar][0].isFree = false;
  std::cout << adjlist[Angmar][0].displayName << " "
            << adjlist[Angmar][0].isFree;
}
