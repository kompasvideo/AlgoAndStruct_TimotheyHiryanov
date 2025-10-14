#include <iostream>
using namespace std;

int euclide(int a, int b)
{
    if (b == 0)
        return a;
    return euclide(b, a % b);
}

// рекурсия алгоритма евклида- наибольший общий делитель 
// 20 6
int main()
{
    int a, b;
    cin >> a >> b;
    cout << euclide(a,b) << endl;
}