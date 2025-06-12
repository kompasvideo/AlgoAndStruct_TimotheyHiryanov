#include <iostream>
using namespace std;

int min_cost(int n, int price[])
{
    int* cost = new int[n + 3];
    cost[1] = price[1];
    cost[2] = price[1] + price[2];
    for (int i = 3; i <= n; i++)
    {
        cost[i] = min(cost[i-1], cost[i-2]) + price[i];
    }
    cout << "Min path = [ " << n << " ";
    int current = n;
    while (current != 1)
    {
        if (cost[current - 1] == cost[current] - price[current])
            current--;
        else
            current -= 2;
        cout << current << ' ';
    }
    cout << "]\n";
    int result = cost[n];
    delete[] cost;
    return result;
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