#ifndef PLAYER_H
#define PLAYER_H

#include<iostream>
#include<string.h>

class Player{
    public:
    std::string name;
    char move;
    Player();
    char virtual makeMove( ) = 0;
    std::string virtual getName( )= 0;
    ~Player();
};

#endif 
