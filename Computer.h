#ifndef COMPUTER_H
#define COMPUTER_H

#include<iostream>
#include<string.h>
#include "Player.h"
class Computer : public Player{
    public:
    Rock newMove;
    Computer();
    Move * makeMove() ;
    std::string getName();
    ~Computer();
};

#endif