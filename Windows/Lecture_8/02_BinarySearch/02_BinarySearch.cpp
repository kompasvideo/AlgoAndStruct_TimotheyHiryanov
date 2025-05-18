#include <iostream>
using namespace std;

int left_bound(int A[], int N, int x)
{
    int left = -1;
    int right = N;
    while (right - left > 1)
    {
        int middle = (left + right) / 2;
        if (A[middle] < x)
            left = middle;
        else
            right = middle;
    }
    return left;
}

int find(int A[], int N, int x)
{
    int left = left_bound(A, N, x);
    if (left + 1 < N and A[left + 1] == x)
        return left + 1;
    else
        return -1;
}

// бинарный поиск
int main()
{
    int N = 10;
    int A[] = { 1,3,3,7,7,7,7,9,10,10 };
    int x = 9;
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << '\t';
    }
    cout << endl;
    cout << "left_bound index " << left_bound(A, N, x) << endl;
    cout << "find index " << find(A, N, x) << endl;
}