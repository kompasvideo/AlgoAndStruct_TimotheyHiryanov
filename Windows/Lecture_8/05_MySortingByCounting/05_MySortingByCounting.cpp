#include <iostream>
using namespace std;

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

void print_array(int A[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << '\t';
    }
    cout << endl;
}

// сортировка подсчётом
int main()
{
    int N = 10;
    int A[10];
    generate_random_array(A, N, 10);
    print_array(A, N);
    cout << "counting sort " << endl;
    select(A, N);
    print_array(A, N);
}