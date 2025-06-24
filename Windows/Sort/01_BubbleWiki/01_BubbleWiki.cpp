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
	cout << "\nBubble sort" << endl;
    
    for (int j = 1; j < n; j++) {
        bool isSorted = true;
        for (int i = 0; i < n - j; i++) {
            if (A[i] > A[i + 1]) {
                int tmp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = tmp;
                isSorted = false;
            }
        }
        if (isSorted) {
            break;
        }
    }
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << '\t';
	}
}