#include <iostream>
#include <string>
using namespace std;

struct Student
{
private:
    string name;
    string group;
    int age;

public:
    void init()
    {
        name = "Vasya";
        group = "B02-999";
        age = 18;
        cout << "Hooray!!! Me " << name << " enrolled to the course" << endl;
    }

    void print() const
    {
        cout << name << " " << group << " " << age << "\n";
    }

    void ageing()
    {
        cout << "Hooray!!! Today is my birthday! I`m " << name << endl;
        age++;
    }
};

int main()
{
    Student a, b;
    a.init();
    a.print();
    a.ageing();
    a.print();

    b.print();
    b = a;
    b.print();
}