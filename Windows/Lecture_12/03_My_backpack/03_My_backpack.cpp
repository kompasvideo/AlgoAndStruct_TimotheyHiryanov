#include <iostream>
#include <vector>
using namespace std;

double max_backpack_value(vector<pair<int, double>> treasures, int capacity)
{
    vector<vector<double>> F;
    F.resize(capacity + 1);
    for (int i = 0; i <= capacity; i++)
        F[i].resize(treasures.size() + 1);
    // base case
    for (int weight = 0; weight <= capacity; weight++)
        F[weight][0] = 0;
    for (int j = 0; j < treasures.size(); j++)
        F[0][j] = 0;
    //recursive case
    for (int j = 1; j < treasures.size(); j++)
    {

    }
    
}

int main()
{
    cout << "Enter number of treasures\n";
    int treasures_number;
    cin >> treasures_number;
    vector<pair<int, double>> treasures;
    for (int i = 0; i < treasures_number; i++)
    {
        cout << "Enter treasure[" << i << "] weight and value:";
        int weight;
        double value;
        cin >> weight >> value;
        treasures.push_back(make_pair(weight, value));
    }
    cout << "Enter backpack carrying capacity: ";
    int capacity;
    cin >> capacity;
    cout << max_backpack_value(treasures, capacity) << endl;
}
