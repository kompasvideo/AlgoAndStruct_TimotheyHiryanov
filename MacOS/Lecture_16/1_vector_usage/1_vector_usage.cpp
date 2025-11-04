#include <iostream>
#include <vector>
#include <algorithm>

void procedure(int x)
{
    std::cout << x << '\n';
}

int main()
{
    std::vector<int> A;
    for (int i = 0; i < 10; i++)
    {
        A.push_back(i);
    }

    // ÍÅÓÊËÞÆÀß ÂÅÐÑÈß
    std::vector<int>::iterator it1 = A.begin();
    while (it1 < A.end())
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }
    std::cout << std::endl;

    // ïî÷òè ÓÊËÞÆÀß ÂÅÐÑÈß
    auto it2 = A.begin();
    while (it2 < A.end())
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
    std::cout << std::endl;

    for (auto it3 = A.begin(); it3 != A.end(); ++it3) {
        std::cout << *it3 << std::endl;
    }
    std::cout << std::endl;

    std::for_each(A.begin(), A.end(), procedure);
    std::cout << std::endl;

    for (auto x : A) {
        std::cout << x << std::endl;
    }
    std::cout << std::endl;

    return 0;
}