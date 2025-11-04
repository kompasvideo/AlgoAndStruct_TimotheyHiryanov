#include <iostream>
using namespace std;

void foo(unsigned char x)
{
    cout << " foo(unsigned char) is called\n";
}

void foo(int x)
{
    cout << " foo(int) is called\n";
}

void foo(double x)
{
    cout << " foo(double) is called\n";
}

int main()
{
    foo('A');
    foo(1);
    foo(4.5);
    //foo(23U);
    return 0;
}
