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
    
    return 0;
}

// s1 +asd1  asd 