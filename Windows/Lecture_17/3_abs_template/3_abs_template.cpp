#include <iostream>
using namespace std;

template <typename T>
T my_abs(T x)
{
    if (x < 0)
        return -x;
    else
        return x;
}

int main()
{
    cout << my_abs('A') << "\n";
    cout << my_abs(-23) << "\n";
    cout << my_abs(-3.5) << "\n";
}