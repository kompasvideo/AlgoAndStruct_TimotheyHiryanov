#include <iostream>
using namespace std;

// разложить число на множители
int main()
{
    cout << "Input number: ";
    int i;
    cin >> i;
    int k = 2;
    while (i != 1)
    {
        if ((i % k) == 0)
        {
            i /= k;
            cout << k << '\t';
        }
        else
            k++;
    }
    cout << endl;
}