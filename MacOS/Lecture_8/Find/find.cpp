#include <iostream>
using namespace std;

int find(int A[], int N, int x)
{
    for(int i =0; i < N; i++)
    {
        if (A[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    int A[] = {5,2,3,4,6,2,3};
    int res = find(A, 7, 4);
    cout << res << endl;
}