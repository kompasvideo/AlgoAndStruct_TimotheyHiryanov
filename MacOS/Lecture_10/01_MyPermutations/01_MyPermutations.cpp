#include <iostream>
using namespace std;

const int MAX_BINARY_DIGITS_TO_GENERATE = 100;

void permutations(int16_t number, int16_t current, int16_t buffer[], bool used[])
{

}

// перебор с возвратом, метод ветвления и границ
// перестановки чисел
int main()
{
    int16_t n;
    cout << "Enter length to generate all permutations: ";
    cin >> n;
    if (n > 20){
        cerr << "Yur number is too big!";
        return 1;
    } else if (n <= 0) {
        cerr << "Yur number is negative!";
        return 1;
    }
    int16_t buffer[n];
    bool* used = new bool[n];
    for (int i = 0; i < n; i++)
    {
        used[i] = false;
    }
    
    permutations(n, 0, buffer, used);
}