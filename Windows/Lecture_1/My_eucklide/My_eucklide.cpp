#include <iostream>
using namespace std;

int euclid(int f, int s)
{
	while (f != s)
	{
		if (f > s)		
			f = f - s;		
		else		
			s = s - f;		
	}
	return f;
}

int main()
{
	cout << "Enter first number: ";
	int f;
	cin >> f;
	cout << "Enter second number: ";
	int s;
	cin >> s;
	cout << euclid(f, s) << endl;
}