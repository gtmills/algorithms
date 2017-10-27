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
         * @param[in] key - the value of the new node
         */
        void pushFront(int key);

        /**
         * @brief Create a new node at the back of the list
         *
         * @param[in] key - the value of the new node
         */
        void pushBack(int key);

        /**
         * @brief Pop the node at the front of the list.
         *
         * @param[return] Node - The front node
         */
        Node popFront();

        /**
         * @brief Pop the node at the back of the list.
         *        This is O(n) time because we must iterate list to
         *        find next to last.
         *
         * @param[return] Node - The last node
         */
        Node popBack();
        /**
         * @brief Return the node at the back of the list.
         *        Does not remove the node.
         *
         * @param[return] Node - The last node
         */
        Node topBack();

        /**
         * @brief Return the node at the front of the list.
         *        Does not remove the node.
         *
         * @param[return] Node - The front node
         */
        Node topFront();

        /**
         * @brief Return if the key is in the list.
         *
         * @param[return] bool - True if key is in the list
         */
        bool isKey(int key);

        /**
         * @brief Erase the key in the list. This erases only the first
         *        occurrence of the key.
         *
         * @param[in] key - The value of the new node
         */
        void erase(int key);

        /**
         * @brief Print the linked list
         *
         */
        void print();

    private:
        Node* head;
        Node* tail;
};
