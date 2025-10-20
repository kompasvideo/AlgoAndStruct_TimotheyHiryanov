#include <iostream>
#include <list>
#include <vector>
#include <string>

void vector_example()
{
    std::vector<std::string> words;
    std::string word;

    getline(std::cin, word);
    while (word != "")
    {
        words.push_back(word);
        getline(std::cin, word);
    }
    for(int i = 0; i < words.size(); i++)
        std::cout << words[i] << "\t";
    std::cout << std::endl;
}

void list_example()
{
    std::list<std::string> words;
    std::string word;

    getline(std::cin, word);
    while (word != "")
    {
        words.push_back(word);
        getline(std::cin, word);
    }

    for (std::list<std::string>::iterator p = words.begin(); p != words.end(); p++)
        std::cout << *p << "\t";
    std::cout << std::endl;

    for(auto &p: words)
        std::cout << p << "\t";
    std::cout << std::endl;
}

int main()
{ 
    //vector_example();
    list_example();
    return 0;
}
