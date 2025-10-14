#include <iostream>
using namespace std;

void print(int i, int A[], int N)
{
    cout << i << " - " << '\t';
    for (int i = 0; i < N; ++i)
        cout << A[i] << "\t";
    cout << endl;
}

// for while
void insert_sort(int A[], int N)
{
   
}

// сортировка вставкой
int main()
{
    int A[] = { 7,5,1,4,2,3,9,8,0,6 };
    int N = 10;
    cout << "InsertSort" << endl;
    print(-1, A, N);
    insert_sort(A, N);
    print(-2, A, N);
}