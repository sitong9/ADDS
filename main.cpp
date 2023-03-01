#include <iostream>
#include <string>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
using namespace std;

int main(){
    Human H1;
    Computer C1;
    Referee R1;
    Player* winner;
    winner = R1.refGame(&H1,&C1);
    if ( winner== nullptr){
        cout <<"It's a Tie\n";
    }else {
        cout<< winner->name<<" Wins\n";
    }
return 0;
}