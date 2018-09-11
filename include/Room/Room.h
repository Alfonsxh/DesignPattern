//
// Created by alfons on 18-9-11.
//

#ifndef CREATEPATTERN_ROOM_H
#define CREATEPATTERN_ROOM_H

#include "Public.h"
#include "MapSite.h"

class Room :public MapSite{
public:
    Room(int roomNo);

    MapSite* GetSide(Direction) const ;
    void SetSide(Direction, MapSite*);

    virtual void Enter();

private:
    MapSite* _sides[4];
    int _roomNumber;
};


#endif //CREATEPATTERN_ROOM_H
