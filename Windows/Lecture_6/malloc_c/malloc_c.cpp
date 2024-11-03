#include <iostream>
using namespace std;

// malloc
int main()
{
    double* pd = (double*)malloc(10 * sizeof(double));
    if (pd != NULL)
    {
        for (double* p = pd; p < pd + 10; p++) {
            cout << "*p = 0.0;" << endl;
            *p = 0.0;
        }
    }
    else {
        cout << "Не удалось выделить память";
    }
    free(pd);
    cout << endl;
}