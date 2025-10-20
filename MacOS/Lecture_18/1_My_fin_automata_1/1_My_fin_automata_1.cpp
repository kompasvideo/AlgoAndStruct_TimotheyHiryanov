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
in_word:
the_end:
    return 0;
}