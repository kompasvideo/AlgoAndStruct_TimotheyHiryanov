#include <iostream>

int main()
{
    using namespace std;
    bool flag = true;
    uint32_t x;
    cout << "Input x: ";
    cin >> x;
    int d = 2;
    while(x!=1)
    {
        if (x % d == 0)
        {
            cout << d << endl;
            x = x / d;
        }
        else
            d++;
    }
    cout << "flag: " << flag << endl;
}