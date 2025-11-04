#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    const char* s = "Hello World!";
    cout << s << endl;
    cout << "strlen(s): " << strlen(s) << endl;
    int times_to_concatenate;
    cin >> times_to_concatenate;
    cout << times_to_concatenate << endl;
    size_t buffer_length = strlen(s) * times_to_concatenate + 1;
    char* buffer = (char*)malloc(buffer_length * sizeof(char));
    buffer[0] = '\0';
    for (int i = 0; i < times_to_concatenate; i++)
    {
        strcat(buffer, s);
    }
    //cout << buffer << endl;
    free(buffer);
    return 0;
}