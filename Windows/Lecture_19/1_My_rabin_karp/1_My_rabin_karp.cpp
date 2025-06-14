#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Алгоритм Рабина-Карпа поиска подстроки в строке за O(N)
int main()
{
    string s;
    getline(cin, s);

    string pattern;
    getline(cin, pattern);

    // считаем все степени p
    const int p = 237;
    vector<long, long> p_pow(max(s.length(), pattern.length()));
    p_pow[0] = 1;
    for (size_t i = 1; i < p_pow.size(); i++)
    {
        p_pow[i] = p_pow[i - 1] * p;
    }

    // считаем хэши от всех префиксов строки  pattern
    vector<long, long> h(pattern.length());
    for (size_t i = 0; i < pattern.length(); i++)
    {
        h[i] = ()
    }

    // считаем хэш от строки S

    // перебираем все подстроки T длины |S| и сравниваем их
    return 0;
}