#ifndef PLAYER_H
#define PLAYER_H

#include<iostream>
#include<string.h>
#include "Move.h"

class Player{
    public:
    std::string name;
    Move playerMove;
    Player();
    virtual Move * makeMove( ) = 0;
    std::string virtual getName( )= 0;
    ~Player();
};

#endif 
