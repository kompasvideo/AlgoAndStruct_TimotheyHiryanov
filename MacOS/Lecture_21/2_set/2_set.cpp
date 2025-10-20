#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

void set_example()
{
    unordered_set<string> words;
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
    cout << "Enter key to find in set: ";
    cin >> word;
    if (words.find(word) != words.end())
    {
        cout << "found it\n";
    }
    else
    {
        cout << "Not found it ...\n";
    }
}

int main()
{
    set_example();
    return 0;
}