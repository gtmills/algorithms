#pragma once
#include <vector>

/**
 * @brief Super simple stack data structure that uses a vector.
 *
 */
class Stack
{
    public:
        /**
         * @brief inserts a new element into the stack
         *
         * @param[in] element - element to be added to the top of the stack
         *
         */
        void push(int element);

        /**
         * @brief Removes and returns the top element
         *
         * @return The top element. If the stack is empty, return -1
         */
        int pop();

        /**
         * @brief Returns the top element without modifying the stack
         *
         * @return The top element. If the stack is empty, return -1
         */
        int peak();

    private:
        std::vector<int> stack;
};
