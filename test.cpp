#include <iostream>
#include "linkedlist.hpp"


int main(){
    LinkedList list;
    list.addNodeToEnd(22);
    list.addNodeToEnd(23);
    float a = list.getElement(2);
    std::cout<< a<<std::endl;
    list.printList();
    return 0;
}