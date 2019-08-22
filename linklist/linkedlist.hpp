/*
Author: Tyrel Cadogan
Email: shaqc777yahoo.com
Linked list implementation (floats)
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
        LinkedList();//Done
        void addNodeAtIndex(int index, float input);
        void addNodeToEnd(float input);//Done
        void addNodeToStart(float input);//Done
        void deleteNodeI(int index);//Done
        void deleteHead();
        int len();
        void printList();//Done
        float getElement(int index);//Done
};
LinkedList::LinkedList(){
    /*Constructor*/
    head = NULL;
    tail = NULL;
}
void LinkedList::addNodeToEnd(float input){
    /*
    Add Element with data value "input" to the end of the linkedlist
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
void LinkedList::addNodeToStart(float input){
    node *tmp = new node;
    tmp->val = input;
    tmp->next= head;
    head = tmp;
}

void LinkedList::addNodeAtIndex(int index, float input){
    /*
    Add node(element) to the position of thspecified index
    */
    node *tmp = new node; tmp->val = input;
    node *seeker = head; node * behind = NULL;
    int i = 0; 
    while(seeker != NULL){
        if (i == index ){
            seeker = behind->next;
            behind->next = tmp;
            tmp->next = seeker;
            break;
        }
        behind = seeker;
        seeker = seeker->next;
        i = i +1;
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

void LinkedList::deleteNodeI(int index){
    /*
    Deletes a node at the specified index.
    */
    node *seeker = head;
    node *behind = NULL;
    int i = 0;
    while (seeker != NULL)
    {
        if(i == index){
            seeker = behind->next;
            behind->next = seeker->next;
            delete seeker;
            break;
        }
        behind = seeker;
        seeker = seeker->next;
        i = i+1;
    }
}

void LinkedList::deleteHead(){
    // Deletes the head of the linked list
    node *tmp =  head; head = tmp->next; delete tmp;
}

int LinkedList::len(){
    /*
    Returns the lenght of the Linkedlist(NUmber of nodes in the list)
    */
    node *seeker = NULL; int i = 0;
    while(seeker != NULL){
        seeker = seeker->next;
        i = i + 1;
        }
    return i + 1;
}