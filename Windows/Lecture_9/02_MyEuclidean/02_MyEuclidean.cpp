#include <iostream>
using namespace std;

int euclide(int a, int b)
{
    if (b == 0)
        return a;
    return euclide(b, a % b);
}

// рекурсия алгоритма евклида
int main()
{
    int a, b;
    cin >> a >> b;
    cout << euclide(a, b) << endl;
}