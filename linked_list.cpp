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

void linkedList::pushBack(int key)
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
        tail->next = node;
        tail = node;
    }
}

Node linkedList::popFront()
{
    if (head == nullptr)
    {
        throw std::runtime_error("ERROR list empty");
    }

    Node tmp = *head;
    if (head == tail)
    {
        // only one node in the list
        head = tail = nullptr;
        return tmp;
    }

    head = head->next;
    return tmp;
}

Node linkedList::popBack()
{
    if (head == nullptr)
    {
        throw std::runtime_error("ERROR list empty");
    }

    if (head == tail)
    {
        // only one node in the list
        Node tmp = *head;
        head = tail = nullptr;
        return tmp;
    }

    Node* previous = head;
    while (previous->next != tail)
    {
        previous = previous->next;
    }
    auto node = *(previous->next);
    previous->next = nullptr;
    tail = previous;
    return node;
}

Node linkedList::topFront()
{
    if (head == nullptr)
    {
        throw std::runtime_error("ERROR list empty");
    }

    return *head;
}

Node linkedList::topBack()
{
    if (head == nullptr)
    {
        throw std::runtime_error("ERROR list empty");
    }

    return *tail;
}

bool linkedList::isKey(int key)
{
    Node* tmp = head;
    while (tmp != nullptr)
    {
        if (tmp->data == key)
        {
            return true;
        }
        tmp = tmp->next;
    }
    return false;
}

void linkedList::erase(int key)
{
    Node* previous = head;
    // If key is head
    if (head->data == key)
    {
        delete head;
        if (head == tail)
        {
            // only one node in the list
            head = tail = nullptr;
            return;
        }
        head = head->next;
        return;
    }

    while (previous->next != tail)
    {
        if (previous->next->data == key)
        {
            delete previous->next;
            previous->next = previous->next->next;
            return;
        }
        previous = previous->next;
    }
    //If key is tail
    if (tail->data == key)
    {
        delete tail;
        tail = previous;
        return;
    }
    std::cout << key << " not in list " << std::endl;
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
