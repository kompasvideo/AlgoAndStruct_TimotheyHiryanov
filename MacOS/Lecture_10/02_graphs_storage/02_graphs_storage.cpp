#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
typedef int32_t vertex_t;
typedef set<vertex_t> SetOfVertexes;

class AbstractGraph
{
    public:
        int vertexes_numbers;
        int edges_numbers;

        virtual void input() = 0;
        virtual void print() = 0;
};

class Graph_type2 : public AbstractGraph
{
    public:
        // matrix of adjasency
        vector<vector<bool>> matrix;

    void input()
    {
        cin >> vertexes_numbers;
        matrix.resize(vertexes_numbers);
        for(auto &line: matrix)
        {
            line.resize(vertexes_numbers, false);
        }
        cin >> edges_numbers;
        matrix.clear();
        for(vertex_t i =0; i < edges_numbers; i++)
        {
            vertex_t a, b;
            cin >> a >> b;
            matrix[a][b] = 1;
            matrix[b][a] = 1;
        }
    }   

    void print() const
    {
        cout << "Vertex numbers = " << vertexes_numbers << endl;
        for(auto edge: matrix)
        {
            cout << "(" << edge.first << ", " << edge.second << ") ";
        }
        cout << endl;
    }
}; 
int main()
{
    Graph_type2 g1;
    g1.input();
    g1.print();
    return 0;
}