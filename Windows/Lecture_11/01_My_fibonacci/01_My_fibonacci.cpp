#include <iostream>
#include <cassert>

using namespace std;

uint64_t fib_recursive(int n)
{
    if (n <= 1)
        return n;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

uint64_t fib_dynamic(int n)
{
    
}

// �������� �� ������, ������ �� 1 ��� 2 ������
int main()
{
    for (int n = 0; n < 50; n++)
    {
        cout << n << '\t' << fib_recursive(n) << '\t' << fib_dynamic(n) << endl;
    }
    return 0;
}