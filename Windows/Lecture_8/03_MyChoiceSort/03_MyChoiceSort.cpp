#include <iostream>
using namespace std;

void print(int i, int A[], int N)
{
    cout << i << " - " << '\t';
    for (int i = 0; i < N; ++i)
        cout << A[i] << "\t";
    cout << endl;
}

void choice_sort(int A[], int N)
{
   
}

// сортировка выбором
int main()
{
    int N = 10;
    int A[] = { 9,4,1,2,8,7,0,5,3,6 };
    cout << "choice sort " << endl;
    print(-1, A, N);
    choice_sort(A, N);
    print(-2, A, N);
}