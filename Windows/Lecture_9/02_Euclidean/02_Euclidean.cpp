#include <iostream>
using namespace std;

int hanoi(int a, int b)
{
    if (b == 0)
        return a;
    return hanoi(b, a % b);
}

// рекурсия алгоритма евклида
int main()
{
    int a, b;
    cin >> a >> b;
    cout << hanoi(a,b) << endl;
}