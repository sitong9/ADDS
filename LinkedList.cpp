#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <limits>
using namespace std;

LinkedList:: LinkedList(){
    head = nullptr;
}


LinkedList::LinkedList(int * array, int len){
    if (len>0){
        head = new Node(array[0], nullptr);
        Node* current = head;
        for (int i = 1; i<len; i++){
        current->link= new Node(array[i], nullptr);
        current = current->link;
        }
    }
    

}


Node* LinkedList:: traverse(unsigned int index){
    unsigned int pos = 1;
    Node* currNode = head;
    while (currNode != nullptr && pos < index){
        currNode = currNode->link;/*
        link (next)
        */
        pos++;
    }

    return currNode;
}

void LinkedList:: insertPosition(int pos, int newNum){
   /* Node* temp = head;
    head = new Node (newNum);
    head->link = temp;
*/
    if (pos == 0){
        head = new Node (newNum, head);
        return;
    }

    Node* prevNode = traverse(pos-1);

    if (prevNode == nullptr) {
        Node* currNode = head;
        while (currNode->link != nullptr) {
            currNode = currNode->link;      
        }
        Node* newNode = new Node(newNum, nullptr);
        currNode->link = newNode;
        return;
    }

    Node* newNode = new Node(newNum, prevNode->link);
    prevNode->link = newNode;

}


bool LinkedList:: deletePosition(int pos){
if (pos < 1 || head == nullptr) {
        return false;
    }

    if (pos == 1) {
        Node* temp = head;
        head = head->link;
        
        if (temp){
            delete temp;
        }
        return true;
    }

    Node* current = head;
    int i = 1;

    while (current->link != nullptr && i < pos - 1) {
        current = current->link;
        i++;
    }

    if (current->link == nullptr || i != pos - 1) {
        return false;
    }

    Node* temp = current->link;
    current->link = temp->link;
    delete temp;
    return true;
}

int LinkedList::get(int pos){
   if (pos < 1 || head == nullptr) {
        return numeric_limits<int>::max();
    }

    Node* current = head;
    int i = 1;

    while (current != nullptr && i < pos) {
        current = current->link;
        i++;
    }

    if (current == nullptr) {
        return numeric_limits<int>::max();
    }

    return current->data;
}


int LinkedList::search (int target){
    Node* current = head;
    int i = 1;

    while (current != nullptr) {
        if (current->data == target) {
            return i;
        }

        current = current->link;
        i++;
    }

    return -1;
}

void LinkedList::printList(){
    Node* current = head;
    cout<<"[";
    while (current != nullptr){
        cout<<current->data<<" ";
        current = current->link;
    }


    cout <<"]"<< endl;
    
}

/*LinkedList:: ~LinkedList(){
    while(head != nullptr){
        deletePosition(1);
    }
}
*/
LinkedList::~LinkedList() {
    Node* current = head;

    while (current != nullptr) {
        Node* next = current->link;
        delete current;
        current = next;
    }
}