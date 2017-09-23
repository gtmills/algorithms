#include "stack.hpp"

void Stack::push(int element)
{
    stack.push_back(element);
}

int Stack::pop()
{
    if (stack.empty())
    {
        return -1;
    }
    auto element = stack.back();
    stack.pop_back();
    return element;
}

int Stack::peak()
{
    if (stack.empty())
    {
        return -1;
    }
    return stack.back();
}

int StackWithMax::getMax()
{
    if (max.empty())
    {
        return -1;
    }
    return max.back();
}

int StackWithMax::pop()
{
    int element = Stack::pop();
    if (element != -1 && element == getMax())
    {
        max.pop_back();
    }
    return element;
}

void StackWithMax::push(int element)
{
    if (element >= getMax())
    {
        max.push_back(element);
    }
    Stack::push(element);
}
