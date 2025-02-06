#include <iostream>
using namespace std;


int main()
{
    int N = 10;
    int A[] = { 1,3,3,7,7,7,7,9,10,10 };
    int x = 8;
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << '\t';
    }
    cout << endl;
    cout << "left_bound index " << left_bound(A, N, x) << endl;
    cout << "find index " << find(A, N, x) << endl;
}