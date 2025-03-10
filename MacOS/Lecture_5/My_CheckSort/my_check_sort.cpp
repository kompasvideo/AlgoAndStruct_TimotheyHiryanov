#include <iostream>
using namespace std;

int main()
{
    const int N = 5;
    int A[N] = {5,3,2,1,4};
    int i = 0;
    
    

    for(int i = 0; i < N; i++)
        cout << A[i] << '\t';
    cout << endl;
    return 0;
}