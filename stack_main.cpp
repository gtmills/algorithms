#include <iostream>
#include "stack.hpp"

int main()
{

    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    // Should be 3
    auto top = stack.peak();
    std::cout << top << std::endl;

    // Should be 3
    top = stack.pop();

    std::cout << top << std::endl;
    // Should be 2
    top = stack.pop();
    std::cout << top << std::endl;

    // Should be 1
    top = stack.pop();
    std::cout << top << std::endl;

    // Should be -1
    top = stack.pop();
    std::cout << top << std::endl;

    return 0;
}
