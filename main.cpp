#include "Move.h"
#include "Player.h"
#include "Human.h"
#include "Referee.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    Human H1("A");
    Human H2("B");
    Referee R1;
    Player* winner = R1.refGame(&H1,&H2);
    if (winner== nullptr){
        cout <<"It's a Tie\n";
    }else {
        cout<< winner->getName()<<" Wins\n";
    }
return 0;
}