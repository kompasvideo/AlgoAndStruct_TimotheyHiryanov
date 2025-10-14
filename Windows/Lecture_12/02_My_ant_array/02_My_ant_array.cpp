#include <iostream>
#include <vector>
using namespace std;

int ant_recursice(int i, int j)
{
  
}

int ant_dynamic(int n, int m)
{
    
}

// Двумерное динамическое программирование - кузнечик ходит -> и ↓
int main()
{
    int(*ant)(int, int);
    int version = 0;
    cout << "Which version of function to use ? (0 - recursive, 1 - dynamic) :";
    cin >> version;
    if (version == 0)
        ant = ant_recursice;
    else
        ant = ant_dynamic;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << ant(i, j) << '\t';
        }
        cout << endl;
    }
    return 0;
}

