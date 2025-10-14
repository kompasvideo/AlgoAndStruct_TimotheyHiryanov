#include <iostream>
#include <vector>
using namespace std;

double max_backpack_value(vector<pair<int, double>> treasures, int capacity)
{

}

// задача об укладке рюкзака
// взять предметы с максимальной стоимостью
int main()
{
    // количество предметов
    cout << "Enter number of treasures\n";
    int treasures_number;
    cin >> treasures_number;
    vector<pair<int, double>> treasures;
    for (int i = 0; i < treasures_number; i++)
    {
        // вес предмета и и его стоимость
        cout << "Enter treasure[" << i << "] weight and value:";
        int weight;
        double value;
        cin >> weight >> value;
        treasures.push_back(make_pair(weight, value));
    }
    // размер (вес) рюкзака
    cout << "Enter backpack carrying capacity: ";
    int capacity;
    cin >> capacity;
    cout << max_backpack_value(treasures, capacity) << endl;
}