#include <iostream>
using namespace std;

void print(int i, int A[], int N)
{
    cout << i << " - " << '\t';
    for (int i = 0; i < N; ++i)
        cout << A[i] << "\t";
    cout << endl;
}

void select(int A[], int N)
{
}

void generate_random_array(int A[], int N, int M)
{
    for (int i = 0; i < N; i++)
    {
        A[i] = rand() % M;
    }
}

// сортировка подсчётом
int main()
{
    int N = 10;
    int A[10];
    generate_random_array(A, N, 10);
    print(-1, A, N);
    cout << "counting sort " << endl;
    select(A, N);
    print(-2, A, N);
}