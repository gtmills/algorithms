#include <iostream>
#include "fibonacci.cpp"

int main()
{
    auto max = 15;
    auto number = 0;
    while (number <= max)
    {
        std::cout << "fibonacci of " << number << ": " <<  fibonacci(number)
                  << std::endl;
        number++;
    }
    return 0;
}
