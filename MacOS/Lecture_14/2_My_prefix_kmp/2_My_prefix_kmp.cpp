#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> prefix_function_kmp(string s)
{
    int n = s.length();
    vector<int> pi(n, 0);
    for (int i = 1; i < n; i++)
    {
        int k = pi[i - 1];
        while (k > 0 and s[i] != s[k])
        {
            k = pi[k - 1];
        }
        if (s[i] == s[k])
            k++;
        pi[i] = k;
    }
    return pi;
}

int main()
{
    string line = "accabacbabacabacabaabacaaba";
    string tmp = "abacaba";
    string summary = tmp + "#" + line;
    vector<int> pi = prefix_function_kmp(summary);

    int counter = 0;
    for (auto x : pi)
    {
        if (x == tmp.size())
            counter++;
    }
    cout << "Number of cases template is substring in string: "
        << counter << endl;
}
