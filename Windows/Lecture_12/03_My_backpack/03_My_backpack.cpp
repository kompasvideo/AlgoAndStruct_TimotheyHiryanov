#include <iostream>
#include <vector>
using namespace std;

double max_backpack_value(vector<pair<int, double>> treasures, int capacity)
{

}

// ������ �� ������� �������
// ����� �������� � ������������ ����������
int main()
{
    // ���������� ���������
    cout << "Enter number of treasures\n";
    int treasures_number;
    cin >> treasures_number;
    vector<pair<int, double>> treasures;
    for (int i = 0; i < treasures_number; i++)
    {
        // ��� �������� � � ��� ���������
        cout << "Enter treasure[" << i << "] weight and value:";
        int weight;
        double value;
        cin >> weight >> value;
        treasures.push_back(make_pair(weight, value));
    }
    // ������ (���) �������
    cout << "Enter backpack carrying capacity: ";
    int capacity;
    cin >> capacity;
    cout << max_backpack_value(treasures, capacity) << endl;
}