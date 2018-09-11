//
// Created by alfons on 18-9-11.
//

#ifndef DESIGNPATTERN_MAZEFACTORY_H
#define DESIGNPATTERN_MAZEFACTORY_H

#include "Maze.h"
#include "Wall/Wall.h"
#include "Room/Room.h"
#include "Door/Door.h"

class MazeFactory{
public:
    MazeFactory();

    virtual Maze* MakeMaze() const { return new Maze;}
    virtual Wall* MakeWall() const { return new Wall;}
    virtual Room* MakeRoom(int n) const { return new Room(n);}
    virtual Door* MakeDoor(Room* r1, Room* r2) const { return new Door(r1, r2);}
};

#endif //DESIGNPATTERN_MAZEFACTORY_H
