//
// Created by alfons on 18-9-11.
//

#ifndef CREATEPATTERN_DOOR_H
#define CREATEPATTERN_DOOR_H

#include "MapSite.h"

class Door : public MapSite {
public:
    Door(Room* = nullptr, Room* = nullptr);

    virtual void Enter();
    Room* OtherSideFrom(Room*);

private:
    Room* _room1;
    Room* _room2;
    bool _isOpen;
};


#endif //CREATEPATTERN_DOOR_H
