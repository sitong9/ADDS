#ifndef REFEREE_H
#define REFEREE_H
#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"

class Referee{
    public: 
        Referee();
        Player * refGame(Player * player1, Player * Player2);
        ~Referee();
};

#endif 