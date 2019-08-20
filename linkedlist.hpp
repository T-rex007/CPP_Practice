/*
Author: Tyrel Cadogan
Email: shaqc777yahoo.com

floats Linked list implementation 
*/
#include <iostream>

struct node {
    float val;
    node *next;
};
class LinkedList{
    private: 
        node *head, *tail;
    public:
        LinkedList();
        void addNodeToEnd(float input);
        void addBetween(int first, int second, float input);
        void deleteNode(int index);
        void addNodeToStart(float input);
        void printList();
        float getElement(int index);
};
LinkedList::LinkedList(){
    /*Constructor*/
    head = NULL;
    tail = NULL;
}
void LinkedList::addNodeToEnd(float input){
    /*
    Add Elementwith data value "input" to the end of the linkedlist
    */
    node *tmp = new node;
    tmp->val = input;
    tmp->next = NULL;
    if(head == NULL){
        head = tmp;
        tail = tmp; 
    }
    else{
        tail->next = tmp;
        tail = tail->next; 
    }
}
void LinkedList::printList(){
    /*
    Prints all elements in the list
    */
    node *seeker = head;
    std::cout<<"[ ";
    while(seeker != NULL){
        std::cout<<seeker->val;
        seeker = seeker->next;
        if(seeker != NULL){
            std::cout<<" , ";
        }
    }
    std::cout<<" ]"<< std::endl;
}

float LinkedList::getElement(int index){
    /*
    Gets element at the specified index
    */
    node *seeker = head;
    int i = 0;

    while(seeker != NULL){
        if(i ==index ){
            return seeker->val;
        }
        seeker = seeker->next;
        i = i +1;
        if (seeker == NULL){
            std::cout<<"IndexError: Index is out of range"<<std::endl;
        }
    }
    return 0;
}


