#include <assert.h>
#include "stack.hpp"

int main()
{

    StackWithMax stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    assert(stack.peak() == 3);
    assert(stack.getMax() == 3);
    assert(stack.pop() == 3);
    assert(stack.getMax() == 2);
    assert(stack.pop() == 2);
    assert(stack.getMax() == 1);
    assert(stack.pop() == 1);
    assert(stack.pop() == -1);
    assert(stack.getMax() == -1);

    return 0;
}
