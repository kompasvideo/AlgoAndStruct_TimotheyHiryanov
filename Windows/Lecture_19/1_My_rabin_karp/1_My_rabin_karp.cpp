#include <iostream>
#include <string>
#include <vector>
using namespace std;

// �������� ������-����� ������ ��������� � ������ �� O(N)
int main()
{
    string s;
    getline(cin, s);

    string pattern;
    getline(cin, pattern);

    // ������� ��� ������� p
    const int p = 237;
    vector<long, long> p_pow(max(s.length(), pattern.length()));
    p_pow[0] = 1;
    for (size_t i = 1; i < p_pow.size(); i++)
    {
        p_pow[i] = p_pow[i - 1] * p;
    }

    // ������� ���� �� ���� ��������� ������  pattern
    vector<long, long> h(pattern.length());
    for (size_t i = 0; i < pattern.length(); i++)
    {
        h[i] = ()
    }

    // ������� ��� �� ������ S

    // ���������� ��� ��������� T ����� |S| � ���������� ��
    return 0;
}