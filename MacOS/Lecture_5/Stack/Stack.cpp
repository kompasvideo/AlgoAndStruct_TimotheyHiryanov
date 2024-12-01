#include <iostream>
using namespace std;

const int MAX_A_SIZE = 100;
int main()
{
    int N = MAX_A_SIZE;
    int* A = new int[N];
    int top = 0;
    int x;
    cout << "Введите число (0 - конец ввода): ";
    cin >> x;
    while (x != 0)
    {
        A[top++] = x;
        cin >> x;
    }
    while (top > 0)
    {
        cout << A[--top] << '\t';
    }
    cout << endl;
    return 0;
}