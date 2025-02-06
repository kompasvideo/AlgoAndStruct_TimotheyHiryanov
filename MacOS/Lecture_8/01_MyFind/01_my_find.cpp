#include <iostream>
using namespace std;

int left_bound(int A[], int N, int x)
{
    for(int i = 0; i < N; i++)
    {
        if (A[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    int A[] = {5,2,3,4,6,2,3};
    int res = left_bound(A,7,4);
    cout << res << endl;
}