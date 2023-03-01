#ifndef COMPUTER_H
#define COMPUTER_H

#include<iostream>
#include<string.h>
#include "Player.h"
class Computer : public Player{
    public:
    Computer();
    char makeMove() ;
    std::string getName();
    ~Computer();
};

#endif