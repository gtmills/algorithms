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
        void pushFront(int key)
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

        /**
         * @brief Pop the node at the back of the list.
         *        This is O(n) time because we must iterate list to
         *        find next to last.
         *
         * @param[return] Node - The last node
         */
        Node popBack()
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

        /**
         * @brief Print the linked list
         *
         */
        void print()
        {
            Node* tmp = head;
            while (tmp != nullptr)
            {
                std::cout << tmp->data << " ";
                tmp = tmp->next;
            }
            std::cout << std::endl;
        }

    private:
        Node* head;
        Node* tail;
};

int main()
{

    linkedList list;
    list.pushFront(10);
    list.pushFront(13);
    list.pushFront(15);
    list.print();
    auto node = list.popBack();
    std::cout << "popped node: " << node.data << std::endl;
    list.print();
    return 0;
}
