//
// Created by alfons on 18-9-13.
//

#ifndef CREATEPATTERN_ENCHANTEDMAZEFACTORY_H
#define CREATEPATTERN_ENCHANTEDMAZEFACTORY_H

#include "MazeFactory.h"

class EnchantedMazeFactory: public MazeFactory {
public:
    EnchantedMazeFactory();

    virtual Room* MakeRoom(int n) const { return new Room(n);}
    virtual Door* MakeDoor(Room* r1, Room* r2) const { return new Door(r1, r2);}
};


#endif //CREATEPATTERN_ENCHANTEDMAZEFACTORY_H
