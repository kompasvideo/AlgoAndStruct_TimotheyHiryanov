#include <iostream>
#include <string>
#include <vector>
using namespace std;

double levinstein_distance(string a, string b)
{
    vector<vector<int>> L;
    L.resize(a.length() + 1);
    for (int i = 0; i < a.length(); i++)
    {
        L[i].resize(b.length() + 1);
    }

    // base case
    for (int i = 0; i < a.length(); i++)
    {
        L[i][0] = i;
    }
    for (int k = 0; k < b.length(); k++)
    {
        L[0][k] = 0;
    }

    for (int i = 1; i < a.length(); i++)
    {
        for (int k = 1; k < b.length(); k++)
        {
            if (a[i - 1] == b[k - 1])
                L[i][k] = L[i - 1][k - 1];
            else
                L[i][k] = min(L[i - 1][k], min(L[i][k - 1], L[i - 1][k - 1])) + 1;
        }
    }
    return L[a.length()][b.length()];
}

int main()
{
    string a, b;
    cout << "Enter string a: ";
    cin >> a;
    cout << "Enter string b: ";
    cin >> b;
    cout << "Levinstein distance between A and B is: ";
    cout << levinstein_distance(a, b) << endl;
    return 0;
}
