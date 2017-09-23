#pragma once
#include <vector>

/**
 * @brief Super simple int stack data structure that uses a vector.
 *
 */
class Stack
{
    public:
        /**
         * @brief Inserts a new element into the stack
         *
         * @param[in] element - element to be added to the top of the stack
         *
         */
        virtual void push(int element);

        /**
         * @brief Removes and returns the top element
         *
         * @return The top element. If the stack is empty, return -1
         */
        virtual int pop();

        /**
         * @brief Returns the top element without modifying the stack
         *
         * @return The top element. If the stack is empty, return -1
         */
        int peak();

    private:
        std::vector<int> stack;
};

/**
 * @brief Simple int stack data structure that returns the maximum element in
          the stack in O(1) time. pop and push must also stay O(1) time.
 *
 */
class StackWithMax : public Stack
{
    public:
        /**
         * @brif Returns the maximum element in the stack.
         *       If the stack is empty, return -1
         *
         * @return The maximum element
         *
         */
        int getMax();

        /**
         * @brief Inserts a new element into the stack
         *
         * @param[in] element - element to be added to the top of the stack
         *
         */
        void push(int element) override;

        /**
         * @brief Removes and returns the top element
         *
         * @return The top element. If the stack is empty, return -1
         */
        int pop() override;

    private:
        std::vector<int> max;
};

