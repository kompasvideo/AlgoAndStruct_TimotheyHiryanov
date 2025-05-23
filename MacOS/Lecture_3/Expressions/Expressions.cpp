#include <iostream>
#include <cmath>

using namespace std;

double f(double x);

int main()
{
    cout << "Input number: ";
    double x;
    cin >> x;
    cout << f(x) << endl;

    double s = 0;
    for(int n = 0, factor = 1; n < 10; n++)
    {
        s += pow(-1, n) * pow(x, 2 * n + 1) / factor;
        factor *= 2 * n * (2 * n + 1);
    }
    cout << s << endl;
    return 0;
}

double f(double x)
{
    return 2 * sin(x);
}