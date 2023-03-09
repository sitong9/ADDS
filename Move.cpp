#include "Move.h"
#include <vector>
#include <iostream>
#include <string.h>
using namespace std;


string Move::getName(){
    return moveName;
}





Rock::Rock():Move(){
    beatMove.push_back("Paper");
    moveName = "Rock";
}






Paper::Paper():Move(){
    beatMove.push_back("Scissors");
    moveName = "Paper";
}

Scissors::Scissors():Move(){
    beatMove.push_back("Rock");
    moveName = "Scissors";

}

Robot::Robot():Move(){
    beatMove.push_back("Pirate");
    beatMove.push_back("Monkey");
    moveName = "Robot";

}

Monkey::Monkey(){
    beatMove.push_back("Pirate");
    beatMove.push_back("Zombie");
    moveName = "Monkey";

}

Pirate::Pirate(){
    beatMove.push_back("Pirate");
    beatMove.push_back("Zombie");
    moveName = "Pirate";

}

Ninja::Ninja(){
    beatMove.push_back("robot");
    beatMove.push_back("Monkey");
    moveName = "Ninja";
}

Zombie::Zombie(){
    beatMove.push_back("Ninja");
    beatMove.push_back("Robot");
    moveName = "Zombie";
}

