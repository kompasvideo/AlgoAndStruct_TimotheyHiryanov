#ifndef _GRAPH_HPP__
#define _GRAPH_HPP__
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
typedef int32_t vertex_t;
typedef set<vertex_t> SetOfVertexes;

class Graph_t
{
public:
    int vertexes_numbers = 0;
    int edges_numbers = 0;
    // списки смежности для каждой вершины графа
    vector<set<vertex_t>> sets_of_neighbour;

    void input()
    {
        cin >> vertexes_numbers;
        cin >> edges_numbers;
        // полная очистка массива списков смежности
        sets_of_neighbour.clear();
        // создаю пустые списки смежности для каждой верщины
        sets_of_neighbour.resize(vertexes_numbers);
        for (int i = 0; i < edges_numbers; i++)
        {
            vertex_t a, b;
            cin >> a >> b;
            sets_of_neighbour[a].insert(b);
            sets_of_neighbour[b].insert(a);
        }
    }

    void print() const
    {
        cout << "Vertex numbers = " << vertexes_numbers << endl;
        for (vertex_t vertex = 0; vertex < vertexes_numbers; vertex++)
        {
            cout << vertex << ": [";
            for (auto neighbour : sets_of_neighbour[vertex])
            {
                cout << neighbour << ", ";
            }
            cout << "\b\b]\n";
        }
        cout << endl;
    }
};
#endif //_GRAPH_HPP__