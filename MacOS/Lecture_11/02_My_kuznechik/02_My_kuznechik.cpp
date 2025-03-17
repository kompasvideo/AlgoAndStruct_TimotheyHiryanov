#include <iostream>
using namespace std;

int min_cost(int n, int price[])
{
    int cost[101];
    // base cases
    cost[1] = price[1];
    cost[2] = price[1] + price[2];

    for (int i = 3; i <= n; i++)
    {
        // recursive case
        cost[i] = min(cost[i-1], cost[i-2]) + price[i];
    }

    cout << "Min cost path (reversed) = [" << n << ' ';
    int current = n;
    while(current != 1)
    {
        if (cost[current-1] == cost[current] - price[current])
            current--;
        else
            current = current - 2;
        cout << current << ' ';        
    }
    cout << "]\n";
    return cost[n];
}

int main()
{
    cout << "Hopper economist wants to go from point 1 to point n. Enter n:";
    int n;
    cin >> n;
    if (n > 100)
    {
        cout << "Your number is too big." << endl;
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