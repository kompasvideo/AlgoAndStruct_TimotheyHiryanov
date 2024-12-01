#include <iostream>

// Решето Эратосфена - поиск простых чисел до числа n
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43
int main()
{
    int n = 0;
    std::cin >> n;
    bool* sieve = new bool[n + 1];
    for (int i = 2; i < n + 1; i++) {
        sieve[i] = true;
    }
    int x = 2;
    while(x * x <= n) {
        if (sieve[x]) {
            for (int y = x*x; y <= n; y+= x) {
                sieve[y] = false;
            }
        }
        x += 1;
    }
    for (int i = 2; i < n + 1; i++) {
        if (sieve[i])
            std::cout << i <<'\t';
    }
    std::cout << '\n';
    return 0;
}

