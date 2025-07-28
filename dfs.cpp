#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
using namespace std;

void prepareAdjList(unordered_map<int, list<int>>& adjList, vector<pair<int, int>>& edges) {
    for (auto edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adjList[u].push_back(v);
        adjList[v].push_back(u); // For undirected graph
    }
}

void dfs(unordered_map<int, list<int>>& adjList, unordered_map<int, bool>& visited, vector<int>& ans, int node) {
    visited[node] = true;
    ans.push_back(node);

    for (auto neighbor : adjList[node]) {
        if (!visited[neighbor]) {
            dfs(adjList, visited, ans, neighbor);
        }
    }
}

vector<int> DFS(int vertex, vector<pair<int, int>> edges) {
    unordered_map<int, list<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    prepareAdjList(adjList, edges);

    // Traverse all components of the graph
    for (int i = 0; i < vertex; i++) {
        if (!visited[i]) {
            dfs(adjList, visited, ans, i);
        }
    }
    return ans;
}

int main() {
    int vertex = 5;
    vector<pair<int, int>> edges = {
        {0, 1}, {0, 2}, {1, 3}, {2, 4}
    };

    vector<int> result = DFS(vertex, edges);

    cout << "DFS Traversal: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;
    return 0;
}