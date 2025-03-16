#include <iostream>
#include <vector>
using namespace std;

int ant_recursive(int i, int j)
{
    if (i == 1 or j == 1)
        return 1;
    else
    {
        return ant_recursive(i, j - 1) + ant_recursive(i - 1, j);
    }
}

int ant_dynamic(int n, int m)
{
    std::vector<std::vector<int>> K;
    K.resize(n + 1);
    for (int i = 1; i <= n; i++)
        K[i].resize(m + 1);

    // base cases
    for (int i = 1; i <= n; i++)
        K[i][1] = 1;
    for (int j = 1; j <= m; j++)
        K[1][j] = 1;

    // recursuve cases
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++)
        {
            K[i][j] = K[i - 1][j] + K[i][j - 1];
        }
    }
    return K[n][m];
}

// Двумерное динамическое программирование - кузнечик ходит -> и ↓
int main()
{
    int (*ant)(int, int);
    int version = 0;
    cout << "Which version of function to use? (0 - recursive, 1 - dynamic\n";
    cin >> version;
    if (version == 0)
        ant = ant_recursive;
    else
        ant = ant_dynamic;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << ant(i, j) << '\t';
        }
        cout << endl;
    }
    return 0;
}