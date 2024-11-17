#include <iostream>

int main()
{
    using namespace std;
    uint32_t i;
    cout << "Input number: ";
    cin >> i;
    bool flag = false;
    while (i >= 7)
    {
        flag = (i % 10 == 7) || flag;
        i = i / 10;
    }
    cout << "flag: " << flag;
}