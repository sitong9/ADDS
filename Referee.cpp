#include <iostream>
#include <string>
#include "Referee.h"
#include "Player.h"
using namespace std;

Referee::Referee(){}



Player* Referee::refGame(Player * player1, Player * Player2){
    char move1;
    move1 = player1->makeMove();
    char move2;
    move2 = Player2->makeMove();

    if (move1 == move2){
        return nullptr;
    } else if (move1=='S' && move2 =='R') {
        return Player2;
    } else if (move1=='R' && move2 == 'P'){
        return Player2;
    }else if (move1=='P' && move2 =='S'){
        return Player2;
    }else{
        return player1;
    }
}

Referee::~Referee(){}