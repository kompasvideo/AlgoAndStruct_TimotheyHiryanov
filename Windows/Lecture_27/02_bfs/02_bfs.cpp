#include "GRAPH.HPP"
#include <deque>

void just_bfs(const Graph_t& graph, vertex_t start, vector<bool>& fired)
{
    fired[start] = true;
    deque<vertex_t> firing_list;
    firing_list.push_back(start);
    cout << start << '\t';
    while (not firing_list.empty())
    {
        vertex_t current = firing_list.front();
        firing_list.pop_front();
        auto neighbours_list = graph.sets_of_neighbour[current];
        for (auto neighbour : neighbours_list)
        {
            if (not fired[neighbour])
            {
                cout << neighbour << '\t';
                fired[neighbour] = true;
                firing_list.push_back(neighbour);
            }
        }
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
    just_bfs(g, start, used_vertexes);
    return 0;
}