#include <iostream>
#include <string>
using namespace std;
#include "Player.h"
#include "Human.h"

Human::Human(){
    name = "Human";
    move = ' ';
}

string Human :: getName( ){
    return name;
}

char Human :: makeMove( ){
    cout << "Enter move: ";
    cin >> move;
    return move;
}

Human::~Human(){}