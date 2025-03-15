#include <iostream>
#include <cassert>

using namespace std;

uint64_t fib_recursive(int n)
{
    assert(n >= 0);
    if (n == 0 or n == 1)
        return n;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

uint64_t fib_dynamic(int n)
{
    uint64_t result;
    uint64_t* fib = new uint64_t[n + 2];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    result = fib[n];
    delete[] fib;
    return result;
}

int main()
{
    for (int n = 0; n < 50; n++)
    {
        cout << n << '\t' << fib_recursive(n) << '\t' << fib_dynamic(n) << endl;
    }
    return 0;
}