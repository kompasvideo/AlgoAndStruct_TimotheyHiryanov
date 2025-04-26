#include <iostream>
#include <list>
#include <vector>
#include <string>
using namespace std;

void vector_example()
{
    vector<string> words;
    string word;

    getline(cin, word);
    while (word != "")
    {
        words.push_back(word);
        getline(cin, word);
    }
    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i] << '\t';
    }
    cout << endl;
}

void list_example()
{
    list<string> words;
    string word;

    getline(cin, word);
    while (word != "")
    {
        words.push_back(word);
        getline(cin, word);
    }
    for (list<string>::iterator p  = words.begin();  p != words.end(); p++)
    {
        cout << *p << '\t';
    }
    cout << endl;
    for (auto &p : words)
    {
        cout << p << '\t';
    }
    cout << endl;
}

int main()
{
    list_example();
    vector_example();
    return 0;
}