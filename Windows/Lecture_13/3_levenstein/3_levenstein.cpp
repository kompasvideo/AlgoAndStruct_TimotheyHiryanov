#include <iostream>
#include <vector>
#include <string>

double levemstein_distance(std::string a, std::string b)
{
    std::vector<std::vector<int>> L;
    L.resize(a.length() + 1);
    for (int i = 0; i <= a.length(); i++)
    {
        L[i].resize(b.length() + 1);
    }

    // base cases
    for (int i = 0; i <= a.length(); i++)
    {
        L[i][0] = i;
    }
    for (int k = 0; k <= b.length(); k++)
    {
        L[0][k] = k;
    }

    for (int i = 1; i <= a.length(); i++)
    {
        for (int k = 1; k <= b.length(); k++)
        {
            if (a[i - 1] == b[k - 1])   // Last chars are the same
                L[i][k] = L[i - 1][k - 1];
            else    // Last chars are differnent  - so we need to add 
                L[i][k] = std::min(L[i - 1][k], std::min(L[i][k - 1],L[i-1][k-1])) + 1;
        }
    }
    return L[a.length()][b.length()];
}

int main()
{
    std::string a, b;
    std::cout << "Enter strung a: ";
    std::cin >> a;
    std::cout << "Enter strung b: ";
    std::cin >> b;

    std::cout << "Levestein disstance between A and B is: ";
    std::cout << levemstein_distance(a, b) << std::endl;
}