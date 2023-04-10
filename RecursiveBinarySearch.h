#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch{
    public:
    bool search(std::vector<int> list, int number);
    private:
    bool search(std::vector<int> list, int number, int start, int end);
};
#endif