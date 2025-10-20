#include <iostream>
#include <string>
using namespace std;

int main()
{
    string hello = "Hello World! ";
    string result;
    cout << "Hello" << endl;
    int times_to_conditions;
    cin >> times_to_conditions;
    for (int i = 0; i < times_to_conditions; i++)
    {
        result += hello;
    }
}