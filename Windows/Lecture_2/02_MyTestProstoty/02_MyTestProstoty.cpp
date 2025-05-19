#include <iostream>
using namespace std;

int main()
{
    using namespace std;
    bool flag = true;
    uint32_t x = 37;
   /* cout << "Input x: ";
    cin >> x;*/
    for (int i = 2; i <= 38 / 2; i++)
    {
        if (x % i == 0)
        {
            flag = false;
            break;
        }
    }

    cout << "flag: " << flag << endl;
}