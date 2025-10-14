#include <iostream>
using namespace std;

void print(int A[], int N)
{
    for (int i = 0; i < N; ++i)
        cout << A[i] << "\t";
    cout << endl;
}

// сортировка пузырьком
int main()
{
    const int N = 5;
    int A[N] = { 5,3,2,1,4 };
    bool is_sorted = false;
    int i = 0;
    print(A, N);

   
        
    print(A, N);
}
