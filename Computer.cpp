#include<iostream>
#include<string.h>
using namespace std;
#include "Player.h"
#include "Computer.h"

Computer :: Computer(){
    name = "Computer";
}

Move * Computer :: makeMove(){
    return &newMove;
}

string Computer :: getName(){
    return name;
}

Computer :: ~Computer(){}


