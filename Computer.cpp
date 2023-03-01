#include<iostream>
#include<string.h>
using namespace std;
#include "Player.h"
#include "Computer.h"

Computer :: Computer(){
    name = "Computer";
    move = 'R';
}

char Computer :: makeMove(){
    return move;
}

string Computer :: getName(){
    return name;
}

Computer :: ~Computer(){}


