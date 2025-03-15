#include <iostream>
using namespace std;

void select(int A[], int N)
{

}

void print_array(int A[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << '\t';
	}
	cout << endl;
}

// поразрядная сортировка 
int main()
{
	const int N = 10;
	int A[N] = { 9,8,7,6,5,4,3,2,1,0 };
	print_array(A, N);
	cout << "radix sort " << endl;
	select(A, N);
	print_array(A, N);
}
