#include <iostream>
#include "linkedlist.hpp"


int main(){
    LinkedList list;
    list.addNodeToEnd(22);
    list.addNodeToEnd(23);
    float a = list.getElement(2);
    std::cout<< a<<std::endl;
    list.printList();
    list.addNodeToStart(12);
    list.printList();
    list.deleteNodeI(1);
    list.printList();
    list.addNodeToEnd(224);
    list.addNodeToEnd(231);
    list.addNodeAtIndex(2, 78);
    list.printList();
    return 0;
}