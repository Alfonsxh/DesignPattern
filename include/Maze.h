//
// Created by alfons on 18-9-11.
//

#ifndef CREATEPATTERN_MAZE_H
#define CREATEPATTERN_MAZE_H

#include "Room/Room.h"

class Maze {
public:
    Maze();

    void AddRoom(Room*);
    Room* RoomNo(int) const ;

};


#endif //CREATEPATTERN_MAZE_H
