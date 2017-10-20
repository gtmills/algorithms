#include <iostream>
#include "linked_list.hpp"

int main()
{

    linkedList list;
    list.pushFront(13);
    list.pushBack(15);
    list.pushFront(10);
    std::cout << "Linked list:" << std::endl;
    list.print();
    auto node = list.popBack();
    std::cout << "Popped node from back: " << node.data << std::endl;
    std::cout << "New linked list:" << std::endl;
    list.print();
    node = list.popBack();
    std::cout << "Popped node from back: " << node.data << std::endl;
    std::cout << "New linked list:" << std::endl;
    list.print();
    node = list.popBack();
    std::cout << "Popped node from back: " << node.data << std::endl;
    std::cout << "New linked list:" << std::endl;
    list.print();
    return 0;
}
