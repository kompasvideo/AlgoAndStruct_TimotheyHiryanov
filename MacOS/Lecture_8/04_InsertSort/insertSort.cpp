#include <iostream>
using namespace std;

void select(int A[], int N)
{
    for (int pos = 1; pos < N; pos++)
    {
        int i = pos;
        while (i > 0 and A[i - 1] > A[i])
        {
            int t = A[i];
            A[i] = A[i - 1];
            A[i - 1] = t;
            i -= 1;
        }
    }
}

// сортировка вставкой
int main()
{
    int N = 10;
    int A[] = {9,4,1,2,8,7,0,5,3,6};
    for(int i =0; i < N; i++)
    {
        cout << A[i] << '\t';
    }
    cout << endl;
    cout << "insert sort " << endl;
    select(A,N);
    for(int i =0; i < N; i++)
    {
        cout << A[i] << '\t';
    }
    cout << endl;
} 