#include "QuickSort.h"
#include "Sort.h"
#include <vector>
using namespace std;
#include <iostream>

int QuickSort::partition(std::vector<int> &list, int left, int right) {
        int pivotIndex = (right+left)/2;
             if (right - left>3){
                  pivotIndex = left+2;
              }

        int pivot = list.at(pivotIndex);
        while (left <= right) {
            while (list[left] < pivot) {
                left++;
            }
            while (list[right] > pivot) {
                right--;
            }
            if (left <= right) {
                int temp = list.at(left);
                list.at(left) = list.at(right);
                list.at(right) = temp;
                left++;
                right--;
            }
        }
        return left;
        }

void QuickSort::sort(std::vector<int> &list, int left, int right) {
    if (left >= right) {
        return;
    }
    int pivotIndex = partition(list, left, right);
    sort(list, left, pivotIndex - 1);
    sort(list, pivotIndex, right);

 }

vector <int> QuickSort::sort(vector<int> list){
    if (list.size()<2){
        return list;
    }
   sort(list, 0, list.size()-1);
   return list; 
}
