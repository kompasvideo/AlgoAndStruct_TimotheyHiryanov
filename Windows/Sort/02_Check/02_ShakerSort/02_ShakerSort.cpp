#include <iostream>
using namespace std;

void print(int i, int A[], int N)
{
    cout << i << " - \t";
    for (int i = 0; i < N; ++i)
        cout << A[i] << "\t";
    cout << endl;
}

// shaker cocktail коктельная
int main()
{
    const int N = 5;
    int A[N] = { 5,3,2,1,4 };
    int beg = -1;
    int end = N - 1;
    bool is_sorted = false;
    print(-1, A, N);

    while (!is_sorted)
    {
        is_sorted = true;;
        beg++;
        for (int i = beg; i < end; i++)
        {
            if(A[i] > A[i+1])
            {
                A[i] = A[i] ^ A[i + 1];
                A[i+1] = A[i] ^ A[i + 1];
                A[i] = A[i] ^ A[i + 1];
                is_sorted = false;
            }
        }
        if (is_sorted)        
            break;
        end--;
        for (int i = end; i > beg; i--)
        {
            if (A[i] < A[i - 1])
            {
                A[i] = A[i] ^ A[i - 1];
                A[i - 1] = A[i] ^ A[i - 1];
                A[i] = A[i] ^ A[i - 1];
                is_sorted = false;
            }
        }
    }

    print(-2, A, N);
}
