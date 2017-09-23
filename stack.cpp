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

