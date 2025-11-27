#include<unordered_map>
#include<map>




vector<int> toppologicalSort(vector<vector<int>> &edges, int v, int e){
    // create the adj list
    unordered_map<int, list<int> > adj;
    for(int i=0;i< e, i++){
        int u= edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);


    }

    // call djs topological sort until for all components
    unordered_map<int, bool> visited;
    stack<int> s;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            topSort(i, visited, s , adj);
        }


    }

    vector<int> ans;

    while(!s.empty())
    {

    }
}