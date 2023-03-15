#include "Reverser.h"
#include <math.h>
#include <string>
#include <iostream>
using namespace std;
int Reverser::reverseDigit(int value){
    if(value<0){
        return -1;
    }
    if(value<10){
        return value;
    }else{
        int n = log10(value);
        return (value%10)*(pow(10,n))+reverseDigit(value/10);
        }
}

string Reverser::reverseString(string characters){
    if (characters.size()<=1){
        return characters;
    }else{
        char first_letter = characters.at(0); 
        characters.erase(0,1);
        string reverse = reverseString(characters);
        return reverse.append(1,first_letter);
    }
}