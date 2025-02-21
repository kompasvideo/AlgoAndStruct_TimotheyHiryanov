#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
typedef int32_t vertex_t;
typedef set<vertex_t> SetOfVertexes;

class Graph_type1
{
    public:
        int vertexes_numbers;
        int edges_numbers;
        set<pair<vertex_t, vertex_t>> set_of_edges;

    Graph_type1(): vertexes_numbers(0), edges_numbers(0) {}

    void input()
    {
        cin >> vertexes_numbers;
        cin >> edges_numbers;
        set_of_edges.clear();
        for(vertex_t i =0; i < edges_numbers; i++)
        {
            vertex_t a, b;
            cin >> a >> b;
            set_of_edges.insert(make_pair(a,b));
        }
    }   

    void print() const
    {
        cout << "Vertex numbers = " << vertexes_numbers << endl;
        for(auto edge: set_of_edges)
        {
            cout << "(" << edge.first << ", " << edge.second << ") ";
        }
        cout << endl;
    }
}; 
int main()
{
    Graph_type1 g1;
    g1.input();
    g1.print();
    return 0;
}