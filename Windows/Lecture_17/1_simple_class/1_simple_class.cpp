#include <iostream>
#include <string>
using namespace std;

struct Student
{
private:
    string name;
    string group;
    int age;
    double* memory;

public:
    Student(string name_, string group_, int age_)
    {
        name = name_;
        group = group_;
        age = age_;
        cout << "Hooray!!! Me " << name << " enrolled to the course" << endl;
        memory = new double[100];
    }

    ~Student()
    {
        cout << "Ouch!!! Me " << name << " dismissed from the course" << endl;
        delete[] memory;
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
    Student a("Petya", "B02-991", 18);
    a.print();
    a.ageing();
    a.print();

    Student b("Vasya", "B012", 17);
    b.print();
    b = a;
    b.print();
}