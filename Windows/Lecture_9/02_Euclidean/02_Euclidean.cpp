#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// рекурсия алгоритма евклида
int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;
}