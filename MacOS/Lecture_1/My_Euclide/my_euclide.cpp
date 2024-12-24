#include <iostream>
using namespace std;

int euclide_gcd(int a, int b)
{
    while (a != b)
    {
        if(a > b)
            a -= b;
        else 
            b -= a;    
    }
    return a;
}

int main()
{
    cout << "enter 1 number: ";
    int a;
    cin >> a;
    cout << "enter 2 number: ";
    int b;
    cin >> b;
    cout << euclide_gcd(a,b) << endl;
    return 0;
}