#include <iostream>

// Наибольший общий делитель - алгоритм Евклида
int euclid_gcd(int a, int b) {

}

int main() {
    using namespace std;
    int x, y;
    cout << "Enter integer. x = ";
    cin >> x;
    cout << "Enter integer. y = ";
    cin >> y;
    cout << "GCD(x,y) = " << euclid_gcd(x, y);
    return 0;
}
