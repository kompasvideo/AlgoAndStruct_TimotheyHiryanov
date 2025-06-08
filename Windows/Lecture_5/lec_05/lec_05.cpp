#include <iostream>

using namespace std;

void print(int i, int A[], int N)
{
    cout << i << " - \t";
    for (int i = 0; i < N; ++i)
        cout << A[i] << "\t";
    cout << endl;
}

int main()
{
    //bubble_sort
    const int N = 5;
    int A[N] = { 5,3,2,1,4 };

    bool is_sorted = false;
    print(-1, A, N);

    while (not is_sorted) {
        int i = 0;
        is_sorted = true;
        while (i < N - 1) {
            if (A[i] > A[i + 1]) {
                int tmp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = tmp;
                is_sorted = false;
            }
            print(i, A, N);
            i++;
        }
    }

    print(-2, A, N);
}
