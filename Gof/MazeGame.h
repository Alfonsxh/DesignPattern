//
// Created by alfons on 18-9-11.
//

#ifndef CREATEPATTERN_MAZEGAME_H
#define CREATEPATTERN_MAZEGAME_H

#include "Public.h"
#include "Maze.h"
#include "Room/Room.h"
#include "Wall/Wall.h"
#include "Door/Door.h"
#include "MazeFactory/MazeFactory.h"


class MazeGame {
public:
    Maze* CreateMaze(MazeFactory& factory);
};


#endif //CREATEPATTERN_MAZEGAME_H
