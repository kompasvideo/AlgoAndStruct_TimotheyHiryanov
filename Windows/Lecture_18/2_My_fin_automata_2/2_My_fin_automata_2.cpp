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

// конечный автомат - switch
int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;
    AutomateState state = out_of_word;
    int word_len = 0;
    

    return 0;
}