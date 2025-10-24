#include<iostream>
using namespace std;

string cycleDetection(vector<vector<int> &edges, int n , int m){
    //create the adjacency list
    unordered_map<int , list<int> > adj;

    for(int i=0; i<m;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);


    }

    // to handle disconnected components
    unordered_map<int, bool> visited;
    for(int i=0; i< n; i++){
        if(!visitied[i]){
            bool ans = isCyclicBFS();
            if(ans ==1){
                return "Yes";

            }
            
        }
    }
    return "No";

}