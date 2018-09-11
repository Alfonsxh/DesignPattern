//
// Created by alfons on 18-9-11.
//

#ifndef CREATEPATTERN_WALL_H
#define CREATEPATTERN_WALL_H

#include "MapSite.h"

class Wall : public MapSite{
public:
    Wall();

    virtual void Enter();
};


#endif //CREATEPATTERN_WALL_H
