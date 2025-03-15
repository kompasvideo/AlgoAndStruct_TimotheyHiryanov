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
    if (n <= 1) return;
    int16_t middle = n / 2;
    double* left = A;
    double* right = A + middle;
    int16_t left_size = middle;
    int16_t right_size = n - middle;
    merge_sort(left, left_size);
    merge_sort(right, right_size);
    double* buffer = new double[n];
    int16_t left_i = 0, right_i = 0, buffer_i = 0;
    while (left_i < left_size and right_i < right_size)
    {
        if (left[left_i] <= right[right_i])
        {
            buffer[buffer_i] = left[left_i];
            left_i++;
            buffer_i++;
        }
        else
        {
            buffer[buffer_i] = right[right_i];
            right_i++;
            buffer_i++;
        }
    }
    while (left_i < left_size)
    {
        buffer[buffer_i] = left[left_i];
        left_i++;
        buffer_i++;
    }
    while (right_i < right_size)
    {
        buffer[buffer_i] = right[right_i];
        right_i++;
        buffer_i++;
    }
    for (int16_t i = 0; i < n; i++)
    {
        A[i] = buffer[i];
    }
    delete[] buffer;
}

void print_array(double* A, int16_t n)
{
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}

// ���������� ��������
int main()
{
    int16_t n;
    cout << "Enter size of array: ";
    cin >> n;
    if (n < 0 || n > MAX_ARRAY_SIZE) {
        cerr << "Your array size is unacceptable" << endl;
        return 1;
    }
    double* A = new double[n];
    input_array(A, n);
    merge_sort(A, n);
    print_array(A, n);
    delete[] A;
    return 0;
}