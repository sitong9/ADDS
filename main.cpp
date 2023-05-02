#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;


int main (){
    int array[5] = {1,2,3,4,5};
    LinkedList* A = new LinkedList(array,5);
    A->insertPosition(0,4);
    A->insertPosition(11,9);
    A->deletePosition(9);
    A->printList();
    return 0;

}