#include <iostream>
#include <string>
using namespace std;
#include "Player.h"
#include "Human.h"

Human::Human(){
    name = "Human";
}

string Human :: getName( ){
    return name;
}

Human :: Human(std::string newName){
    name = newName;
}

Move* Human :: makeMove( ){
    string move;
    cout << "Enter move: ";
    cin >> move ;
    Move * newMove;
    if ( move == "Rock"){
        newMove = new Rock();
    } else if (move == "Paper"){
        newMove = new Paper();
    } else if (move =="Scissors" ){
        newMove = new Scissors();
    }else if (move == " Robot"){
        newMove = new Robot();
    }else if (move == "Monkey"){
        newMove = new Monkey();
    }else if (move == "Pirate"){
        newMove = new Pirate();
    }else if (move == "Ninja"){
        newMove = new Ninja();
    }else if (move == "Zombie"){
        newMove = new Zombie();
    }
    return newMove;
}

Human::~Human(){}