#include <iostream>
#include <stdexcept>
/**
 * @brief A singly linked list node
 *
 */
struct Node
{
    Node();
    Node(int key) : data(key){};
    int data;
    Node* next = nullptr;
};

/**
 * @brief Singly linked list with head and tail
 *
 */
class linkedList
{
    public:
        /**
         * @brief Constructs linkedList
         *
         */
        linkedList()
        {
            head = nullptr;
            tail = nullptr;
        }

        /**
         * @brief Create a new node at the front of the list
         *
         * @param[in] data - the value of the new node
         */
        void pushFront(int key);

        /**
         * @brief Pop the node at the back of the list.
         *        This is O(n) time because we must iterate list to
         *        find next to last.
         *
         * @param[return] Node - The last node
         */
        Node popBack();

        /**
         * @brief Print the linked list
         *
         */
        void print();

    private:
        Node* head;
        Node* tail;
};