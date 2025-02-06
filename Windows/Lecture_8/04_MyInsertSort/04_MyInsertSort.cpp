#include <iostream>
using namespace std;

void insert_sort(int A[], int N)
{

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