#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void procedure(int x)
{
    cout << x << endl;
}

int main()
{
    list<int> A;
    for (int i = 0; i < 10; i++)
    {
        A.push_back(i);
    }

    // ÍÅÓÊËÞÆÀß ÂÅÐÑÈß
    list<int>::iterator it1 = A.begin();
    while (it1 != A.end())
    {
        cout << *it1 << endl;
    }
    cout << endl;

    // ïî÷òè ÓÊËÞÆÀß ÂÅÐÑÈß
    auto it2 = A.begin();
    while (it2 != A.end())
    {
        cout << *it2 << endl;
    }
    cout << endl;

    for (auto it3 = A.begin(); it3 != A.end(); it3++)
        cout << *it3 << endl;
    cout << endl;

    for_each(A.begin(), A.end(), procedure);
    cout << endl;

    for (auto x : A)
        cout << x << endl;
    cout << endl;

    return 0;
}