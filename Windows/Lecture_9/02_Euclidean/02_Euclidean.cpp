#include <iostream>
using namespace std;

int hanoi(int a, int b)
{
    if (b == 0)
        return a;
    return hanoi(b, a % b);
}

// �������� ��������� �������
int main()
{
    int a, b;
    cin >> a >> b;
    cout << hanoi(a,b) << endl;
}