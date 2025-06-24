#ifndef _GRAPH_HPP__
#define _GRAPH_HPP__
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

typedef int32_t vertex_t;

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
        sets_of_neighbour.resize(vertexes_numbers);
        for (size_t vertex = 0; vertex < edges_numbers; vertex++)
        {
            vertex_t a, b;
            cin >> a >> b;
            sets_of_neighbour[a].insert(b);
            sets_of_neighbour[b].insert(a);
        }
    }

    void print() const
    {
        cout << "Vertex numbers: " << vertexes_numbers << endl;
        for (size_t vertex = 0; vertex < vertexes_numbers; vertex++)
        {
            cout << vertex << ": [";
            for (int neighbour : sets_of_neighbour[vertex])
            {
                cout << neighbour << ", ";
            }
            cout << "\b\b]\n";
        }
    }
};
#endif //_GRAPH_HPP__