#include <iostream>
#include <vector>
#include "Sort.h"
//#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;

int main() {
    vector<int> numbers;
    int num;
 

    while (cin >> num) {
        numbers.push_back(num);
    }
     
      
    //BubbleSort B1;
    //numbers= B1.sort(numbers);

    QuickSort Q1;
    numbers= Q1.sort(numbers);
    
    RecursiveBinarySearch R1;
    if (R1.search(numbers,1) == true){
        cout<<"true ";
    }else{
        cout<<"false ";
    }
   
    for (int i=0; i<numbers.size();i++){
        cout<<numbers.at(i)<<" ";
    }

    return 0;
}
