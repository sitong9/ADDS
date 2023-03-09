#ifndef MOVE_H
#define MOVE_H

#include <string.h>
#include <vector>
#include <iostream>

class Move{
    public:
    std::string moveName;
    std::vector <std::string> beatMove;
    std::string getName();
  //  ~Move();
};

class Rock : public Move {
    public:
    Rock();
  //  ~Rock();
};

class Paper : public Move{
    public:
    Paper();
  //  ~Paper();
};

class Scissors : public Move{
    public:
    Scissors();
   // ~Scissors();

};

class Robot :public Move{
    public:
    Robot();
   // ~Robot();

};
class Monkey :public Move{
    public:
    Monkey();
  //  ~Monkey();
};

class Pirate : public Move{
    public:
    Pirate();
 //  ~Pirate();

};

class Ninja :public Move{
    public:
    Ninja();
//   ~Ninja();

};

class Zombie : public Move{
    public:
    Zombie();
//    ~Zombie();

};

#endif //MOVE_H