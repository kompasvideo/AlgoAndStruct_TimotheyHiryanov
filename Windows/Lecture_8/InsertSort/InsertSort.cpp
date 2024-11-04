#include <iostream>
using namespace std;

void insert_sort(int A[], int N)
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
    int A[] = { 7,5,1,4,2,3,9,8,0,6 };
    int N = 10;
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << '\t';
    }
    cout << endl;
    cout << "InsertSort" << endl;
    insert_sort(A, N);
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << '\t';
    }
}