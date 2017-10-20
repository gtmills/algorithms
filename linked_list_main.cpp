#include <iostream>
#include "linked_list.hpp"

int main()
{

    linkedList list;
    list.pushFront(10);
    list.pushFront(13);
    list.pushFront(15);
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
