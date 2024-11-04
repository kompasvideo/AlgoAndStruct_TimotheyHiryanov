#include <iostream>
using namespace std;

void insert_sort(int A[], int N)
{
    // for(int i = 0; i < N-1; i++)
    // {
    //     for(int j = i + 1; j < N; j++)
    //     {
    //         if (A[j]< A[i])
    //         {
    //             int temp = A[i];
    //             A[i] = A[j];
    //             A[j] = temp;
    //         }
    //     }    
    // }   
}

// сортировка вставкой
int main()
{
    int N = 10;
    int A[] = {9,4,1,2,8,7,0,5,3,6};
    for(int i =0; i < N; i++)
    {
        cout << A[i] << '\t';
    }
    cout << endl;
    cout << "insert sort " << endl;
    insert_sort(A,N);
    for(int i =0; i < N; i++)
    {
        cout << A[i] << '\t';
    }
    cout << endl;
} 