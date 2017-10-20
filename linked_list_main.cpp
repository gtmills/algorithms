#include <iostream>
#include "linked_list.hpp"

int main()
{

    linkedList list;
    auto key = 13;
    std::cout << "Insert front: " << key << std::endl;
    list.pushFront(key);
    std::cout << "Linked list:" << std::endl;
    list.print();

    key = 15;
    std::cout << "Insert back: " << key << std::endl;
    list.pushBack(key);
    std::cout << "New linked list:" << std::endl;
    list.print();

    key = 10;
    std::cout << "Insert front: " << key << std::endl;
    list.pushFront(key);
    std::cout << "New linked list:" << std::endl;
    list.print();

    auto node = list.popBack();
    std::cout << "Popped node from back: " << node.data << std::endl;
    std::cout << "New linked list:" << std::endl;
    list.print();

    node = list.popFront();
    std::cout << "Popped node from front: " << node.data << std::endl;
    std::cout << "New linked list:" << std::endl;
    list.print();

    node = list.popBack();
    std::cout << "Popped node from back: " << node.data << std::endl;
    std::cout << "New linked list:" << std::endl;
    list.print();
    return 0;
}
