#include <iostream>
using namespace std;

void select(int A[], int N)
{
	int* a0 = new int[N];
	int* a1 = new int[N];
	for (int radix = 0; radix < 32; radix++)
	{
		int a0_size = 0;
		int a1_size = 0;
		for (int i = 0; i < N; i++)
		{
			if ((A[i] & (1 << radix)) == 0)
				a0[a0_size++] = A[i];
			else
				a1[a1_size++] = A[i];
			for (int i = 0; i < a0_size; i++)			
				A[i] = a0[i];
			for (int i = 0; i < a1_size; i++)
				A[i + a0_size] = a1[i];
		}
	}
	delete[] a0;
	delete[] a1;
}

void print_array(int A[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << '\t';
	}
	cout << endl;
}

// ����������� ���������� 
int main()
{
	const int N = 10;
	int A[N] = { 9,8,7,6,5,4,3,2,1,0 };
	print_array(A, N);
	cout << "radix sort " << endl;
	select(A, N);
	print_array(A, N);
}
