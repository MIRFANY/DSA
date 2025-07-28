#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <list>
using namespace std;

vector<int> dijkstra(int vertex, vector<vector<int>>& edges, int src) {
    // Build adjacency list: node -> list of (neighbor, weight)
    unordered_map<int, list<pair<int, int>>> adj;
    for (auto& edge : edges) {
        int u = edge[0], v = edge[1], w = edge[2];
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); // Remove this line for directed graph
    }

    vector<int> dist(vertex, INT_MAX);
    dist[src] = 0;

    // Min-heap: (distance, node)
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});

    while (!pq.empty()) {
        auto [d, node] = pq.top();
        pq.pop();

        for (auto& nbr : adj[node]) {
            int v = nbr.first;
            int weight = nbr.second;
            if (dist[v] > d + weight) {
                dist[v] = d + weight;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

int main() {
    int vertex = 5;
    vector<vector<int>> edges = {
        {0, 1, 2}, {0, 2, 4}, {1, 2, 1}, {1, 3, 7}, {2, 4, 3}, {3, 4, 1}
    };
    int src = 0;
    vector<int> result = dijkstra(vertex, edges, src);

    cout << "Shortest distances from node " << src << ": ";
    for (int d : result) {
        cout << d << " ";
    }
    cout << endl;
    return 0;
}