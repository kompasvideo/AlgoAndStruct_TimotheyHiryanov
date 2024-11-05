#include <iostream>
using namespace std;

void radix_sort(int A[], int N)
{
    
}

void print_array(int A[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << '\t';
    }
    cout << endl;
}

// поразрядная сортировка 
int main()
{
    int N = 10;
    int A[N];
    print_array(A, N);
    cout << "radix sort " << endl;
    radix_sort(A, N);
    print_array(A, N);
}
