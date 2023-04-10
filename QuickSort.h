#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <vector>
#include "Sort.h"

class QuickSort: public Sort{
    public:
    virtual std::vector<int> sort(std::vector <int> list);
    private:
    void sort(std::vector<int>&list, int left, int right);
    int partition(std::vector<int>&list, int left, int right);

};

#endif