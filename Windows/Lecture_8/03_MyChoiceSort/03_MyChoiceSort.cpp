#include <iostream>
using namespace std;

void insert_sort(int A[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        for (int k = i+ 1; k < N; k++)
        {
            if (A[i] > A[k])
            {
                int tmp = A[i];
                A[i] = A[k];
                A[k] = tmp;
            }
        }
    }
}

// сортировка выбором
int main()
{
    int N = 10;
    int A[] = { 9,4,1,2,8,7,0,5,3,6 };
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << '\t';
    }
    cout << endl;
    cout << "choice sort " << endl;
    insert_sort(A, N);
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << '\t';
    }
    cout << endl;
}