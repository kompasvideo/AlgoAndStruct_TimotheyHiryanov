#include <iostream>
#include <string>

int main()
{
    std::string hello = "Hello World! ";
    std::string result;
    std::cout << "Hello" << std::endl;
    int times_to_concxatenate;
    std::cin >> times_to_concxatenate;
    for (int i = 0; i < times_to_concxatenate; i++)
    {
        result += hello;
    }

}