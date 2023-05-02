#include "BigNumCalc.h"
#include <list>
#include <string>
using namespace std;

BigNumCalc::BigNumCalc(){

}
list<int> BigNumCalc::buildBigNum(string numString){
    list<int> numberList;
    for (char c : numString){
        int num = c -'0';
        numberList.push_back(num);
    }
    return numberList;
}


list<int> BigNumCalc::add(list<int> num1, list<int> num2){
    list<int> sum;
    int carry = 0;
    while (!num1.empty() || !num2.empty() || carry != 0) {
        int digitSum = carry;
        if (!num1.empty()) {
            digitSum += num1.back();
            num1.pop_back();
        }
        if (!num2.empty()) {
            digitSum += num2.back();
            num2.pop_back();
        }
        carry = digitSum / 10;
        digitSum %= 10;
        sum.push_front(digitSum);
    }

    return sum;
}


list<int> BigNumCalc::sub(list<int> num1, list<int> num2){
    list<int> diff;

   /*if (num1.size() < num2.size() || (num1.size() == num2.size() && num1 < num2)) {
        std::swap(num1, num2);
    }
*/
    int borrow = 0;
    while (!num1.empty() || !num2.empty()) {
        int digitDiff = borrow;
        if (!num1.empty()) {
            digitDiff += num1.back();
            num1.pop_back();
        }
        if (!num2.empty()) {
            digitDiff -= num2.back();
            num2.pop_back();
        }
        if (digitDiff < 0) {
            digitDiff += 10;
            borrow = -1;
        } else {
            borrow = 0;
        }
        diff.push_front(digitDiff);
    }

    while (!diff.empty() && diff.front() == 0) {
        diff.pop_front();
    }

    if (diff.empty()) {
        diff.push_back(0);
    }

    return diff;
}

list<int> BigNumCalc::mul(list<int> num1,list<int> num2){
    list<int> multi;
    int carry = 0;
    if (num2.back()==0){
        multi.push_front(0);
        return multi;
    }
    while (!num1.empty()|| carry!= 0){
        int digitMulti = carry;

        if(!num1.empty()){
            digitMulti += num1.back() * num2.back();
            num1.pop_back();
        }

        carry = digitMulti/10;
        digitMulti%=10;
        multi.push_front(digitMulti);
    }

        return multi;
    }


BigNumCalc::~BigNumCalc(){}
