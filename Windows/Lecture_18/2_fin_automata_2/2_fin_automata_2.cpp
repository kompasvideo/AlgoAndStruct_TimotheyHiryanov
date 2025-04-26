#include <iostream>
#include <string>
using namespace std;

inline bool is_alpha(char symbol)
{
    return (symbol >= 'a' and symbol <= 'z')
        or (symbol >= 'A' and symbol <= 'Z');
}

enum AutomateState
{
    out_of_word = 0,
    in_word = 1,
};

int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;
    AutomateState state = out_of_word;
    int word_len = 0;

    for (int pos = 0; pos < s.length(); pos++)
    {
        switch (state)
        {
        case out_of_word:
            if (is_alpha(s[pos]))
            {
                word_len = 1;
                state = in_word;
            }
            else
            {
                word_len = 0;
                state = out_of_word;
            }
            break;
        case in_word:
            if (is_alpha(s[pos]))
            {
                word_len++;
                state = in_word;
            }
            else
            {
                cout << "word length: " << word_len << endl;
                state = out_of_word;
            }
            break;
        }
    }
    if (word_len > 0)
        cout << "word length: " << word_len << endl;
    return 0;
}