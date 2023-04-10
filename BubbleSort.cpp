#include "Sort.h"
#include "BubbleSort.h"
#include <vector>
using namespace std;

vector <int> BubbleSort::sort(vector <int> list){
    for (int i = list.size()-1; i >-1; i--){
        for(int j = 0; j < i;j++){
            if (list.at(j)>list.at(j+1)){
                int temp1 = list.at(j);
                int temp2 = list.at(j+1);
                list.at(j+1) = temp1;
                list.at(j) = temp2;
            }
        }
    }
    return list;

}