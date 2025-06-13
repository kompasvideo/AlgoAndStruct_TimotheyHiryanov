#include "GRAPH.HPP"

void just_dfs(const Graph_t  &graph, vertex_t start, vector<bool> &used)
{
    used[start] = true;
    cout << start << ' ';
    auto neighbours_list = graph.sets_of_neighbour[start];
    for (auto neighbour : neighbours_list)
    {
        if (not used[neighbour])
            just_dfs(graph, neighbour, used);
    }
    cout << endl;
}

int main()
{
    Graph_t g;
    g.input();
    g.print();
    cout << "Enter start vertex: ";
    vertex_t start;
    cin >> start;
    vector<bool> used_vertexes;
    used_vertexes.resize(g.edges_numbers, false);
    just_dfs(g, start, used_vertexes);
    return 0;
}