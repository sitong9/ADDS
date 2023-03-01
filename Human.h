#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <iostream>
#include <string>

class Human : public Player{
    public:
    Human();
    char makeMove( );
    std::string getName( );
    ~Human();
};



#endif 