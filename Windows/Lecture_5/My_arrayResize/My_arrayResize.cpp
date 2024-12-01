#include <iostream>
using namespace std;

const int MAX_A_SiZE = 100;
int main()
{
    int n = MAX_A_SiZE;
    int* a = new int[n];
    int top = 0;
    int x;

    cout << "Input number (0 - exit): ";
    cin >> x;
    while (x != 0)
    {
        a[top++] = x;
        cin >> x;
    }

    for (int i = 0; i < top; i++)
    {
        cout << a[i] << '\t';
    }
    cout << endl;
}
