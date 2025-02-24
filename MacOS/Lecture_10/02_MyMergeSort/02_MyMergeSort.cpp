#include <iostream>
using namespace std;

const int MAX_ARRAY_SIZE = 100000;

void input_array(double *A, int16_t n)
{
    for(int i =0; i < n; i++)
        cin >> A[i];
}

void merge_sort(double *A, int16_t n)
{
    if (n <= 1) return;
    
}


void print_array(double *A, int16_t n)
{
    for(int i =0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;    
}

// сортировка слиянием
int main()
{
    // int16_t n;
    // cout << "Enter size of array: ";
    // cin >> n;
    // if (n < 0 || n > MAX_ARRAY_SIZE) {
    //     cerr << "Your array size is unacceptable" << endl;
    //     return 1;
    // }
    // double *A = new double[n];
    int16_t n = 4;
    double *A = new double[n];
    input_array(A, n);
    merge_sort(A, n);
    print_array(A, n);
    delete[] A;
    return 0;
}