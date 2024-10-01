#include <iostream>

int main()
{
    using namespace std;
    bool flag = false;
    uint32_t x;
    cout << "Input x: ";
    cin >> x;
    while (x != 0)
    {
        /*if (x % 10 == 7)
            flag = true;*/
        flag = (x % 10 == 7) || flag;
        x = x / 10;
    }
    cout << "flag: " << flag << endl;
}