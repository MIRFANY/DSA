#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:
    // unordered_map<int , list<int>> adj;
    vector<vector<int>> adj;
    graph(int n){
        adj = vector<vector<int>>(n, vector<int>(n,0));

    }


    
    void addEdge(int u, int v, bool direction){
        // create an edge now 

        adj[u][v]=1;
        adj[v][u]=1;
        


    }
    

    void print(){
        for(int i=0 ;i<adj.size(); i++){
            cout << i << "->";

            for(int j=0; j<adj[i].size()  ;j++){
                if(adj[i][j] ==1)
                cout<< j << ",";
            }
            cout<<endl;
        }
    }


};


int main(){
    cout<<"Enter the number of nodes: ";
    int n;
    int m;
    cin>> n;
    cout<<"enter the number of edges: ";
    cin>>m;
    graph g(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }

    

    g.print();


}

































// #include <iostream>
// #include<unordered_map>
// #include<list>
// using namespace std;

// class graph {
//     public:
//     unordered_map<int, list<int>>adj;
//     void addEdge(int u, int v, int direction){


//         //create an edge from u to v
//         adj[u].push_back(v);


//         if(direction==0){
//             adj[v].push_back(u);
//         }
//     }

//     void printAdjList(){
//         for(auto i:adj){
//             cout<<i.first<< "->";
//             for(auto j:i.second){
//                 cout<<j<<",";
//             }
//             cout<<endl;
//         }
//     }

// };


// class graph{
//     public:
//     unordered_map<int , list<int>> adj;

//     void addEdge(int u, int v, bool direction){
//         adj[u].push_back(v);
//         if(direction == 0){
//             adj[v].push_back(u);
//         }

//     }


//     void print(){
//         for(auto i: adj){
//             cout<< i.first << "->";
//             for(auto j: i.second){
//                 cout<< j;
//             }
//             cout<<endl;
//         }

//     }


// }









// int main(){
//     int n;
//     cout<<"Enter the number of nodes " << endl;

//     cin >> n;

//     int m;
//     cout << "Enter the number of edges "  << endl;

//     cin >> m;

//     graph g;
//     for(int i=0; i<m; i++){
//         int u,v;
//         cin >>u >>v;
//         //creating undirected graph
//         g.addEdge(u,v,0);



//     }


//     // now calling the print function
    
//     g.printAdjList();

    

//     return 0;
// }