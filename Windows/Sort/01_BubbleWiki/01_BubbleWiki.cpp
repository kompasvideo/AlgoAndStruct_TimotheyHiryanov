#include <iostream>
using namespace std;

int main()
{
	int n = 10;
    int A[] = { 9,8,7,6,5,4,3,2,1,0 };
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << '\t';
	}
	cout << "Bubble sort" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << A[i] << '\t';
	}
}