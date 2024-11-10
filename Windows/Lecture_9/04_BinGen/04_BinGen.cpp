#include <iostream>
using namespace std;

const int MAX_BINARY_TO_GENERATE = 100;

void  generate_binary_numbers(int digit_left_to_generation)
{
    static int digits_combination[MAX_BINARY_TO_GENERATE];
    static int top = 0;

    if (digit_left_to_generation == 0) {    // base case
        for (int i = 0; i < top; i++)
            std::cout << digits_combination[i];
        std::cout << "\n";
    }
    else {  // recursive case
        digits_combination[top++] = 0;
        generate_binary_numbers(digit_left_to_generation - 1);
        top--;

        digits_combination[top++] = 1;
        generate_binary_numbers(digit_left_to_generation - 1);
        top--;
    }
}

// рекурсивная генерация бинарных чисел
int main()
{
    int n;
    std::cout << "Enter bin number length: ";
    std::cin >> n;
    generate_binary_numbers(n);
}