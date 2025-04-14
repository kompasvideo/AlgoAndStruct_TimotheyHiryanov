#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string line;
    getline(std::cin, line);
    std::string tmp;
    getline(std::cin, tmp);
    std::string summary = tmp + '#' + line;
    std::vector<int> pi = prefex_function_kmp(summary);

    int counter = 0;
    for (auto x : pi)
    {
        if (x == tmp.size())
            counter++;
    }
    std::cout << "Number of cases template is substring in string: " 
        << counter << std::endl;
}