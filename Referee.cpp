#include <iostream>
#include <string>
#include "Referee.h"
#include "Player.h"
#include "Move.h"
using namespace std;

Referee::Referee(){}


Player * Referee::refGame(Player * player1, Player * player2){
    Move * move1;
    move1 = player1->makeMove();
    Move * move2;
    move2 = player2->makeMove();

    if (move1->moveName == move2->moveName){
        return nullptr;
    }

    
    for (int i=0 ; i < move1->beatMove.size();i++){
        if(move2->moveName == move1->beatMove[i]){
            return player2;
            break;
        }
    }return player1;

}


Referee::~Referee(){}