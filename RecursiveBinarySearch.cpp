#include "RecursiveBinarySearch.h"
#include <vector>
using namespace std;


bool RecursiveBinarySearch::search(vector<int> list, int number, int start, int end){
    if (end<start){
        return false;
    }
    int medPoint = (start+end)/2;
   
    if (list.at(medPoint) == number){
        return true;
    }
    if ( number > list.at(medPoint) ){
        return search(list, number,  medPoint+1, end);
    }
    if (number < list.at(medPoint)){
        return search(list, number,  start, medPoint-1);
    }
};


bool RecursiveBinarySearch::search(vector<int> list, int number){
    int start=0;
    int end = list.size()-1;
    return search(list, number,  start, end);
};