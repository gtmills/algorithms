#include <iostream>
#include <stdexcept>
#include "linked_list.hpp"

void linkedList::pushFront(int key)
{
    auto node = new Node(key);
    if (head == nullptr)
    {
        // empty list
        head = node;
        tail = node;
    }
    else
    {
        node->next = head;
        head = node;
    }

}

Node linkedList::popBack()
{
    if (head == nullptr)
    {
        throw std::runtime_error("ERROR list empty");
    }
    else
    {
        Node* previous = head;
        while (previous->next != tail)
        {
            previous = previous->next;
        }
        auto node = *previous->next;
        previous->next = nullptr;
        tail = previous;
        return node;
    }

}

void linkedList::print()
{
    Node* tmp = head;
    while (tmp != nullptr)
    {
        std::cout << tmp->data << " ";
        tmp = tmp->next;
    }
    std::cout << std::endl;
}
