#include <iostream>

int main()
{
    using namespace std;
    bool flag = true;
    uint32_t x;
    cout << "Input x: ";
    cin >> x;
    for (int d = 2; d < x; ++d)
    {
        if (x % d == 0)
            flag = false;
    }
    cout << "flag: " << flag << endl;
}