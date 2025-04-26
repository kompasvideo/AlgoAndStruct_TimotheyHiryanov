#include <iostream>
#include <string>
using namespace std;

inline bool is_alpha(char symbol)
{
    return (symbol >= 'a' and symbol <= 'z')
        or (symbol >= 'A' and symbol <= 'Z');
}

// конечный автомат - goto
int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;
    int pos = 0;
    int word_len = 0;
out_of_word:
    if (pos >= s.length()) goto the_end;
    if (is_alpha(s[pos]))
    {
        pos++;
        word_len = 1;
        goto in_word;
    }
    else
    {
        pos++;
        word_len = 0;
        goto out_of_word;
    }
in_word:
    if (pos >= s.length()) goto the_end;
    if (is_alpha(s[pos]))
    {
        pos++;
        word_len++;
        goto in_word;
    }
    else
    {
        pos++;
        cout << "word length: " << word_len << endl;
        goto out_of_word;
    }
the_end:
    if (word_len > 0)
        cout << "word length: " << word_len << endl;
    return 0;
}