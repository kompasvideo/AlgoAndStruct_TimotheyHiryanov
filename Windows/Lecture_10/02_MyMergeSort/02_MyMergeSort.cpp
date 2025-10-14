#include <iostream>
using namespace std;

const int MAX_ARRAY_SIZE = 100000;

void input_array(double* A, int16_t n)
{
    for (int i = 0; i < n; i++)
        cin >> A[i];
}

void merge_sort(double* A, int16_t n)
{

}

void print_array(double* A, int16_t n)
{
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}

// сортировка слиянием
int main()
{
   /* int16_t n;
    cout << "Enter size of array: ";
    cin >> n;
    if (n < 0 || n > MAX_ARRAY_SIZE) {
        cerr << "Your array size is unacceptable" << endl;
        return 1;
    }
    double* A = new double[n];*/
    const int n = 10;
    double A[n] = { 9,1,7,6,5,4,3,2,1,0 };
    //input_array(A, n);
    merge_sort(A, n);
    print_array(A, n);
    //delete[] A;
    return 0;
}