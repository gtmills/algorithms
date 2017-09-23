/**
 * @brief Calculate the fibonacci sequence
 *
 * @param[in] n - Fibonacci number to calculate
 *
 */
int fibonacci(int n)
{
    // Error
    if (n < 0)
    {
        return -1;
    }
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
