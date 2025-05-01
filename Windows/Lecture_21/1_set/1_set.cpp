#include <iostream>
#include <set>
#include <string>
using namespace std;

void set_example()
{
    set<string> words;
    string word;
    getline(cin, word);
    while (word != "")
    {
        words.insert(word);
        getline(cin, word);
    }
    for (auto& word : words)
    {
        cout << word << '\t';
    }
    cout << endl;
}

int main()
{
    set_example();
    return 0;
}