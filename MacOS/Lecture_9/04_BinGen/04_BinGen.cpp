#include <iostream>
using namespace std;

const int MAX_BINARY_TO_GENERATE = 100;

void generate_binary_numbers(int digit_left_to_generation)
{
    static int digits_combination[MAX_BINARY_TO_GENERATE];
    static int top = 0;
    if (digit_left_to_generation == 0)
    {
        for(int i =0; i < top; i++)
            cout << digits_combination[i];
        cout << endl;
    }
    else // recursive case
    {
        digits_combination[top++] = 0;
        generate_binary_numbers(digit_left_to_generation - 1);
        top--;

        digits_combination[top++] = 1;
        generate_binary_numbers(digit_left_to_generation - 1);
        top--;
    }    
}

int main()
{
    int n;
    cout << "Enter bin number lenght: ";
    cin >> n;
    generate_binary_numbers(n);
    return 0;
}