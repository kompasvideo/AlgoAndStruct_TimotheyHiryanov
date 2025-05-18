#include <iostream>
using namespace std;

// разложить число на множители
int main()
{
    //cout << "Input number: ";
    int i = 37;
    //cin >> i;
    int k = 2;

    while (i != 1)
    {
        if (i % k == 0)
        {
            cout << k << '\t';
            i /= k;
        }
        else
            k++;
    }
    
    cout << endl;
}