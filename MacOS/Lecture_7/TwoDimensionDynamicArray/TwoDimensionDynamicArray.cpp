#include <iostream>
using namespace std;

int main()
{
    const int N = 5;
    const int M = 6;

    int **A = new int* [N];
    for (int i = 0; i < N; i++)
    {        
        A[i] = new int[M];        
    }

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
    cout << '\n';

    for (int i = 0; i < N; i++)
    {        
        delete[] A[i];        
    }
    delete[] A;

    return 0;
}