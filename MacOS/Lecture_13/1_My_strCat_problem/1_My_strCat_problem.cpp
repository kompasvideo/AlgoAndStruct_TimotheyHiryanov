#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    const char* s  = "Hello World!";
    cout << s << endl;
    cout << "strlen(s): " << strlen(s) << endl;
    int time_to_concatenate;
    cin >> time_to_concatenate;
    cout << time_to_concatenate << endl;
    size_t buffer_length = strlen(s) * time_to_concatenate + 1;
    char* buffer = (char*)malloc(buffer_length * sizeof(char));
    buffer[0] = '\0';
    for (int i = 0; i < time_to_concatenate; i++)
    {
        strcat(buffer, s);
    }
    free(buffer);
    return 0;
}