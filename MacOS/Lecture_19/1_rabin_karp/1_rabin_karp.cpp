#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Алгоритм Рабина-Карпа поиска подстроки в строке за O (N)
int main()
{
    string s;
    getline(cin, s);

    string pattern;
    getline(cin, pattern);

    // считаем все степени p
    const int p = 237;
    vector<long long> p_pow(max(s.length(), pattern.length()));
    p_pow[0] = 1;
    for (size_t i = 1; i < p_pow.size(); ++i)
        p_pow[i] = p_pow[i - 1] * p;

    // считаем хэши от всех префиксов строки  pattern
    vector<long long> h(pattern.length());
    for (size_t i = 0; i < pattern.length(); ++i)
    {
        h[i] = (pattern[i] - 'a' + 1) * p_pow[i];
        if (i)  h[i] += h[i - 1];
    }

    // считаем хэш от строки S
    long long h_s = 0;
    for (size_t i = 0; i < s.length(); ++i)
        h_s += (s[i] - 'a' + 1) * p_pow[i];

    // перебираем все подстроки T длины |S| и сравниваем их
    for (size_t i = 0; i + s.length() - 1 < pattern.length(); ++i)
    {
        long long cur_h = h[i + s.length() - 1];
        if (i)  cur_h -= h[i - 1];
        // приводим хэши к одной степени и сравниваем
        if (cur_h == h_s * p_pow[i])
            cout << i << ' ';
    }
    return 0;
}