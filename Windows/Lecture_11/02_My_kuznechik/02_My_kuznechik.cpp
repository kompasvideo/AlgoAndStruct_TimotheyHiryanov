#include <iostream>
using namespace std;

int min_cost(int n, int price[])
{
    
}


// кузнечик
int main()
{
    cout << "Hopper economist wants to go from point 1 to point n. Enter n:";
    int n;
    cin >> n;
    if (n > 100)
    {
        cout << "Yor number is too big." << endl;
        return -1;
    }
    int price[101];
    cout << "Enter prices of visiting point (from point 1 to point n):";
    for (int i = 1; i <= n; i++)
    {
        cin >> price[i];
    }
    cout << "Min cost of archieving point n from point 1 is " << min_cost(n, price) << endl;
    return 0;
}