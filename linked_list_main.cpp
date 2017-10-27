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

    auto node = list.topBack();
    std::cout << "Node in back: " << node.data << std::endl;

    key = 10;
    std::cout << "Insert front: " << key << std::endl;
    list.pushFront(key);
    std::cout << "New linked list:" << std::endl;
    list.print();

    node = list.topFront();
    std::cout << "Node in front: " << node.data << std::endl;
  
    key = 10;
    std::cout << std::boolalpha;
    std::cout << key << " is in the list: " << list.isKey(key) << std::endl;

    key = 11;
    std::cout << key << " is in the list: " << list.isKey(key) << std::endl;

    node = list.popBack();
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

    key = 10;
    std::cout << "Insert front: " << key << std::endl;
    list.pushFront(key);
    std::cout << "Linked list:" << std::endl;
    list.print();

    key = 19;
    std::cout << "Insert back: " << key << std::endl;
    list.pushBack(key);
    std::cout << "New linked list:" << std::endl;
    list.print();

    key = 10;
    std::cout << "Delete: " << key << std::endl;
    list.erase(key);
    std::cout << "Linked list:" << std::endl;
    list.print();

    key = 19;
    std::cout << "Delete: " << key << std::endl;
    list.erase(key);
    std::cout << "Linked list:" << std::endl;
    list.print();

    key = 20;
    std::cout << "Insert back: " << key << std::endl;
    list.pushBack(key);
    std::cout << "New linked list:" << std::endl;
    list.print();

    return 0;
}
