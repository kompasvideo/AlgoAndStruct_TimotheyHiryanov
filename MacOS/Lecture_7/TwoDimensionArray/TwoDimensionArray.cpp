#include <iostream>
using namespace std;

int main()
{
    const int N = 5;
    const int M = 6;
    int A[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            A[i][j] = i * M + j;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << A[i][j] << '\t';
        }
        cout << '\n';
    }

    int *p = &A[0][0];
    int* p1 = reinterpret_cast<int *>(A);
    for (int i = 0; i < M * N; i++)
    {
        cout << *(p1 + i) << ' ';
    }
    cout << '\n';
}