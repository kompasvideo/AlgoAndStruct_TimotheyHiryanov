#include <iostream>  
using namespace std;

// Функция для решения задачи Ханойской башни  
void hanoi4(int n, char from, char to, char aux1, char aux2) {
    if (n == 0) return;

    // Базовый случай: если дисков 1 или 2, используем классическое решение  
    if (n == 1) {
        cout << "Переместить диск 1 с " << from << " на " << to << endl;
        return;
    }
    if (n == 2) {
        cout << "Переместить диск 1 с " << from << " на " << aux1 << endl;
        cout << "Переместить диск 2 с " << from << " на " << to << endl;
        cout << "Переместить диск 1 с " << aux1 << " на " << to << endl;
        return;
    }

    // Рекурсивный случай  
    // Перемещаем n-2 дисков на aux1, используя to и aux2 как вспомогательные  
    hanoi4(n - 2, from, aux1, to, aux2);

    // Перемещаем 2 диска на to, используя from и aux2 как вспомогательные  
    hanoi4(2, from, to, aux1, aux2);

    // Перемещаем n-2 дисков с aux1 на to, используя from и aux2 как вспомогательные  
    hanoi4(n - 2, aux1, to, from, aux2);
}

int main() {
    int n;
    cout << "Введите количество дисков: ";
    cin >> n;

    cout << "\nПоследовательность перемещений:\n";
    hanoi4(n, 'A', 'D', 'B', 'C'); // A - исходный стержень, D - целевой, B и C - вспомогательные  

    return 0;
}