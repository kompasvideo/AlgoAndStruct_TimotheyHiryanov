#include "GRAPH.HPP"

bool check_DAG(const OrGraph_t& graph, vertex_t start, vector<bool>& used)
{
    used[start] = true;
    auto neighbours_list = graph.sets_of_neighbour[start];
    for (auto neighbour : neighbours_list)
    {
        if (neighbour == start)
            continue;
        if (used[neighbour])  // Пытаемся попасть в соседнюю в ранее пройденную вершину - цикл
            return false;
        bool is_DAG = check_DAG(graph, neighbour, used);
        if (not is_DAG)
            return false;
    }
    return true; // достигаю этой точки, если цикл не найден
}

int main()
{
    OrGraph_t g;
    g.input();
    g.print();
    vector<bool> used_vertexes;
    used_vertexes.resize(g.edges_numbers, false);
    bool is_DAG = true;
    for (vertex_t v = 0; v < g.vertexes_numbers; v++)
    {
        if (used_vertexes[v]) continue;
        if (not check_DAG(g, v, used_vertexes))
        {
            is_DAG = false;
            break;
        }
    }
    if (is_DAG)
        cout << "Acyclic graph\n";
    else
        cout << "Cyclic graph\n";
    return 0;
}