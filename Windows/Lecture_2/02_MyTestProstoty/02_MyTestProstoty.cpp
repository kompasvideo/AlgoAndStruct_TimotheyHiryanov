#include <iostream>
using namespace std;

int main()
{
    unsigned int n = 0;
    bool pr = false;
    cout << "Input number: ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "number is not prostoe" << endl;
            return 0;
        }
    }
    cout << "number is prostoe" << endl;
    return 0;
}