#include "board.h"

std::vector<Region> Board::regions = {
    {Angmar, true, Mordor, "Angmar"},
    {Mount_Gram, true, None, "Mount Gram"},
    {Mount_Gundabad, false, Mordor, "Mount Gundabad"},
};

std::vector<std::vector<int> > Board::adjlist = {
    {Mount_Gram, Arnor, Ettenmoors},
    {Angmar, Mount_Gundabad, Ettenmoors},
    {Mount_Gram, Eagles_Eyrie},
};
