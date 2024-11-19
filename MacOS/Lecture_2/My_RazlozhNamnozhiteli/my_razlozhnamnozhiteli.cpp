#include <iostream>
using namespace std;

int main()
{
    cout << "input number: ";
    int num;
    cin >> num;
    int k = 2;
    while (num != 1)
    {
        if (num % k == 0)
        {
            cout << k << '\t';
            num /= k;
        }
        else
            k++;    
    }
    cout << endl;
    return 0;
}