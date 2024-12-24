#include <iostream>
using namespace std;

// Решето Эратосфена - поиск простых чисел до числа n
int main()
{
    cout << "input number: ";
    int n;
    cin >> n;
    bool* sieve = new bool[n + 1];
    for(int i = 0; i <= n +1; i++)
        sieve[i] = true;
    int x = 2;
    while(x * x < n)
    {
        if(sieve[x])
            for(int i = 2 * x; i <= n; i += x)
                sieve[i]= false;
        x++;        
    }
    for(int i = 2; i <= n; i++)    
    {
        if(sieve[i])
        cout << i << "  ";
    }
    cout << endl;
    delete[] sieve;
    return 0;
}